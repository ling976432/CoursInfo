
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

int Graph::MinVector(vector<int> a)
{
    int min = a[0];
    std::cout << a.size() << std::endl;
    for (int i = 0; i < a.size(); i++)
    {
        min = Min(min, a[i]);
    }

    return min;
}

int Graph::MaxVector(vector<int> a)
{
    int max = a[0];
    for (int i = 0; i < a.size(); i++)
    {
        max = Max(max, a[i]);
    }

    return max;
}

Graph::Graph() // fonctionne
{
    int **m_g = NULL;
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
    if (m_g = NULL)
    {
    }
    else
    {
        delete[] m_g;
    }
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
    int indexnode;
    node *nd = new node[m_n];
    int *connex = new int[m_n];

    for (int i = 0; i < m_n; i++)
    {
        nd[i].node = i;
        indexConnex = 0;
        indexnode = 0;
        for (int j = 0; j < m_n; j++)
        {
            if (m_g[i][j] == 1)
            {
                connex[indexConnex] = indexnode;
                indexnode++;
                indexConnex++;
            }
            else
            {
                indexnode++;
            }
        }
        nd[i].tailleConnex = indexConnex;
        nd[i].connex = new int[nd[i].tailleConnex + 1];
        nd[i].taillenode = indexnode;
        nd[i].taillemat = m_n;
        for (int j = 0; j < nd[i].tailleConnex; j++)
        {
            nd[i].connex[j] = connex[j];
        }
    }

    return nd;
}

void Graph::printNode(node *nd)
{
    for (int i = 0; i < m_n; i++)
    {
        cout << "[" << nd[i].node << "]";
        cout << "couleur :" << nd[i].color;
        // cout << "{" << nd[i].couleur << "}" << endl;
        cout << ": (";
        for (int j = 0; j < nd[i].tailleConnex; j++)
        {

            cout << "{" << nd[nd[i].connex[j]].node << "}";
            cout << "couleur :";
            cout << nd[nd[i].connex[j]].color;
            cout << " |";
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
            m_g[i][j] = g[i][j];
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

    temp2.operatorIntToGraph(m_g, m_n);

    temp1.operatorIntToGraph(m_g, m_n);

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
Graph Graph::floydMarshall(Graph g, int compteur)
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
    cout << compteur << endl;
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
    isWet[start] = 1;
    step[start] = 1;
    // For every node of the graph
    for (int i = 0; i < m_n; i++)
    {
        if (m_g[start][i] == 1 && (isWet[i]) == 0)
        {
            j++;
            bfs(i, j, compteur++);
            step[i] = i + 1;
            j = 0;
        }
    }
}
/**
 * Return a bool true if clor condition is respected false etheir way
 */
bool Graph::TestCouleurGraph(Graph g)
{
    node *nd = g.getConnexion();

    for (int i = 0; i < g.getTaille(); i++)
    {

        for (int j = 0; j < nd[i].tailleConnex; j++)
        {

            if (nd[nd[i].connex[j]].color = nd[i].color)
            {
                return false;
            }
        }
    }
    return true;
}
void Graph::ColoriageGraph(Graph g)
{
    node *nd = g.getConnexion();
    int test;
    for (int i = 0; i < m_n; i++)
    {
        if (i==0)
        {
          nd[i].color=0;  
        }
        
        
        vector<int> couleurNode;
        for (int j = 0; j < nd[i].tailleConnex; j++)
        {
            couleurNode.push_back(nd[nd[i].connex[j]].color);
        }

        
        sort(couleurNode.begin(), couleurNode.end());

        for (int couleurDisponible = 0; couleurDisponible < couleurNode.size(); couleurDisponible++)
        {
            if (couleurDisponible!=couleurNode[i])
            {
                nd[i].color=couleurDisponible;
            }
            if (couleurDisponible==couleurNode.size()-1)
            {
                nd[i].color=couleurDisponible+1;
            }
            
        }
        
        
        
    }
    printNode(nd);
}
    /*Return true if la couleur de la node est la meme*/
    bool Graph::TestCouleurNode(node nd, node * ndtab)
    {
        for (int i = 0; i < m_n; i++)
        {
            for (int j = 0; j < nd.tailleConnex; j++)
            {
                if (ndtab[ndtab[i].connex[j]].color == nd.color)
                {
                    return true;
                }
            }
        }
        return false;
    }

    int Graph::getTaille() // GETtaille
    {
        return m_n;
    }

    int **Graph::getMat() // get mat
    {
        return m_g;
    }
