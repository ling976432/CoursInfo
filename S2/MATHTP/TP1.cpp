
/*
 * graph.cpp
 */

#include <time.h>
#include "TP1.h"
#include <cassert>


/* PUBLIC MEMBER FUNCTIONS
 ********************************/
int Graph::Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int Graph::Min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

Graph::Graph() // fonctionne
{
    int **m_g = nullptr;
    int m_n = 0;
}

Graph::Graph(int n) // fonctionne
{
    m_n = n;
    m_g = new int *[m_n];
    assert(m_g);
    for (int i = 0; i < m_n; i++)
    {
        m_g[i] = new int[m_n];
        assert(m_g[i]);
    }
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            m_g[i][j] = 0;
        }
    }
}

Graph::~Graph() // fonctionne
{
    for (int i = 0; i < m_n; i++)
        delete[] m_g[i];
    delete[] m_g;
}

Graph::Graph(const Graph &Gr) // fonctionne
{
    m_n = Gr.m_n;
    m_g = new int *[m_n];
    assert(m_g);
    for (int i = 0; i < m_n; i++)
    {
        m_g[i] = new int[m_n];
        assert(m_g[i]);
    }

    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            m_g[i][j] = Gr.m_g[i][j];
        }
    }
}

void Graph::randomGraph() // fonctionne

{

    srand(time(NULL));
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            if (j > i)
            {
                break;
                
            }

            m_g[i][j] = rand() % 2;
            m_g[j][i] = m_g[i][j];
        }
    }
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            if (i == j)
            {
                m_g[i][j] = 0;
            }
        }
    }
}

int *&Graph::operator[](const int &index) // overloading operator []
{
    return m_g[index];
}

void Graph::fillGraph() // fonctionne
{
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            if (i == j)
            {
                continue;
            }

            cout << "Rentrez valeur de la case de ligne " << i << " et de colonne" << j << endl;
            cin >> m_g[i][j];
        }
    }
}

node *Graph::getConnexion()
{

    // reservation de memoire
    int indexConnex;
    node *nd = new node[m_n];
    for (int i = 0; i < m_n; i++)
    {
        nd[i].connex = new int[m_n];
    }

    for (int i = 0; i < m_n; i++)
    {

        indexConnex = 0;
        nd[i].node = i;
        for (int j = 0; j < m_n; j++)
        {
            if (m_g[i][j] == 1)
            {

                nd[i].connex[indexConnex] = 1;

                indexConnex++;
            }
            else if (m_g[i][j] != 1)
            {

                nd[i].connex[indexConnex] = MAX;

                indexConnex++;
            }
            else if (i == j)
            {

                nd[i].connex[indexConnex] = MAX;
                indexConnex++;
            }
        }
    }

    return nd;
}

void Graph::printNode(node *nd)
{
    for (int i = 0; i < m_n; i++)
    {
        cout << "[" << nd[i].node + 1 << "]";
        // cout << "{" << nd[i].couleur << "}" << endl;
        cout << ": (";
        for (int j = 0; j < m_n; j++)
        {

            cout << nd[i].connex[j] << ", ";
        }
        cout << " )" << endl;
    }
}
void Graph::CentreGraph(Graph g)
{
    node *a;
    int node;
    int test = MAX;
    int sum = 0;
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            sum += m_g[i][j];
        }
        if (sum < test)
        {
            node = i;
            test = sum;
        }
    }
    a = g.getConnexion();
    cout << "Le centre est :" << node + 1 << endl;
}
/*Return Deg d'un Graph*/
void Graph::DegGraph()
{
    int deg = 0;
    int test;
    for (int i = 0; i < m_n; i++)
    {
        test = 0;
        for (int j = 0; j < m_n; j++)
        {
            if (m_g[i][j] == 1)
            {
                test++;
            }
        }
        if (test > deg)
        {
            deg = test;
        }
    }
    for (int i = 0; i < m_n; i++)
    {
        test = 0;
        for (int j = 0; j < m_n; j++)
        {
            if (m_g[j][i] == 1)
            {
                test++;
            }
        }
        if (test > deg)
        {
            deg = test;
        }
    }
    std::cout << "Degre du graph :" << deg << std::endl;
}

void Graph::identite()
{
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            if (i == j)
            {
                m_g[i][j] = 1;
            }
            else
            {
                m_g[i][j] = 0;
            }
        }
    }
}

void Graph::affichageGraph() // fonctionne
{
    cout << "affichage du graph :" << endl;
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            cout << "|" << m_g[i][j] << "|";
        }
        cout << endl;
    }
}
/* OPerator = Graph*/
void Graph::operator=(const Graph &g)
{
    // si les magt font la même taille
    if (m_n == g.m_n)
    {
        for (int i = 0; i < g.m_n; i++)
        {
            for (int j = 0; j < g.m_n; j++)
            {
                m_g[i][j] = g.m_g[i][j];
            }
        }
    }
    // sinon on ré initialise l'allocation de mémoire
    else
    {
        m_n = g.m_n;
        m_g = new int *[g.m_n];
        assert(m_g);
        for (int i = 0; i < g.m_n; i++)
        {
            m_g[i] = new int[g.m_n];
            assert(m_g[i]);
        }
        for (int i = 0; i < g.m_n; i++)
        {
            for (int j = 0; j < g.m_n; j++)
            {
                m_g[i][j] = g.m_g[i][j];
            }
        }
    }
}

/*operator = between Graph and int** */
void Graph::operatorIntToGraph(int **g, int taille)
{
    // determiner taille tableau
    

    // allocation de mémoire
    m_n = taille;
    m_g = new int *[m_n];
    assert(m_g);
    for (int z = 0; z < m_n; z++)
    {
        m_g[z] = new int[m_n];
        assert(m_g[z]);
    }

    // copie int** dans graph.m_g
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            m_g[i][j]=g[i][j];
        }
        
    }
}
    

/*Operator to make mul to graph*/
void Graph::operatorGraph(Graph g)
{

    for (int i = 0; i < m_n; ++i)
    {
        for (int j = 0; j < m_n; ++j)
        {
            for (int k = 0; k < m_n; ++k)
            {
                m_g[i][j] = Max(m_g[i][j], g.m_g[i][k] * m_g[k][j]);
            }
        }
    }
}
/*Get what node is connected to what node*/
Graph Graph::getConnexite(int deg)
{
  
    Graph temp1;
    
    Graph temp2;
    
    
    temp2.operatorIntToGraph(m_g,m_n);
   
    temp1.operatorIntToGraph(m_g,m_n);
   
   


    // g=m_g;
    if (deg > 1)
    {
        for (int i = 1; i < deg; i++)
        {
            temp2.operatorGraph(temp1);
        }
    }
    else if (deg == 1)
    {
        return temp1;
    }
    else
    {
        temp2.identite();
        return temp2;
    }

    return temp2;
}
/* Return graph with how much link u have go go through to go frome one node to another , else return */
Graph Graph::floydMarshall(Graph g,int compteur)
{

    Graph temp;
    temp = g;
    temp.FloydGraph();
    for (int i = 0; i < m_n; ++i)
    {
        for (int j = 0; j < m_n; ++j)
        {
            for (int k = 0; k < m_n; ++k)
            {
                temp[i][j] = Min(temp[i][j], temp[i][k] + temp[k][j]);
                compteur++;
            }
            if (i == j)
            {
                temp[i][j] = 0;
            }
        }
        // for (int i = 0; i < m_n; i++)
        // {
        //     for (int j = 0; j < m_n; j++)
        //     {
        //         if (temp[i][j]==MAX)
        //         {
        //             temp[i][j]=temp[j][i];
        //         }

        //     }

        // }
    }
    cout<<compteur<<endl;
    return temp;
}

void Graph::FloydGraph()
{
    for (int i = 0; i < m_n; i++)
    {
        for (int j = 0; j < m_n; j++)
        {
            if (m_g[i][j] == 0)
            {
                m_g[i][j] = MAX;
            }
        }
    }
}

void Graph::bfs(int start, int j, int compteur)
{
    // Set current node as visited
    isWet[start]=1;
    step[start] = 1;
    // For every node of the graph
    for (int i = 0; i < m_n; i++)
    {
        if (m_g[start][i] == 1 && (isWet[i]) == 0)
        {
            j++;
            bfs(i, j,compteur++);
            step[i] = i + 1;
            j = 0;
            
        }
    }
    
    cout<<compteur<<endl;
    
}
/**
 * Return a bool true if clor condition is respected false etheir way
*/
// bool Graph::TestCouleur(Graph g)
// {
//     node *nd = g.getConnexion();
//     Color c;
//        for (int i = 0; i < g.getTaille(); i++)
//     {
//         nd[i].couleur=c;
//         for (int j = 0; j < g.getTaille(); j++)
//         {
//             if (nd[i].connex[j]==NULL)
//             {
//                 break;
//             }
            
//             if (nd[nd[i].connex[j]].couleur=c)
//             {
//                 return false;
//             } 
//         }
//     }
//     return true;
// }
int Graph::getTaille() // GETtaille
{
    return m_n;
}

int **Graph::getMat() // get mat
{
    return m_g;
}
