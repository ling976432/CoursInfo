
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
            m_g[i][j] = rand() % 2;
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

                nd[i].connex[indexConnex] = 999;

                indexConnex++;
            }
            else if (i == j)
            {

                nd[i].connex[indexConnex] = 999;
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
        cout << ": (";
        for (int j = 0; j < m_n; j++)
        {

            cout << nd[i].connex[j] << ", ";
        }
        cout << " )" << endl;
    }
}

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

void Graph::operator=(int ** i)
{
    //determiner taille tableau
    int j=0;
   while(i[j])
   {
    j++;
    
   }
   std::cout << j << std::endl;
   cout<<"d";


   //allocation de mémoire
   m_n = j;
    m_g = new int *[m_n];
    assert(m_g);
    for (int i = 0; i < m_n; i++)
    {
        m_g[i] = new int[m_n];
        assert(m_g[i]);
    }
    

    //copie int** dans graph.m_g
   m_g=i;
   
    
}



void Graph::operatorGraph(Graph g)
{

    for (int i = 0; i < m_n; ++i)
    {
        for (int j = 0; j < m_n; ++j)
        {
            for (int k = 0; k < m_n; ++k)
            {
                m_g[i][j] = max(m_g[i][j], g.m_g[i][k] * m_g[k][j]);
            }
        }
    }
}

Graph Graph::getConnexite(int deg)
{
    Graph temp1;
    Graph temp2;
    temp2 = m_g;
    temp1=m_g;

    
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


/*If no path return 0, else return */
int Graph::floydMarshall(Graph g, int n1, int n2)
{
    Graph temp = g;
    node *nd;

    for (int i = 0; i < g.m_n; i++)
    {
        nd = temp.getConnexion();
        for (int j = 0; i < g.m_n; i++)
        {

            if (nd[n1 - 1].connex[j] == n2 - 1)
            {
                return i;
            }
        }
    }
    return 0;
}
int Graph::depthSearch(Graph )
{



}
/*void floydWarshall(int graph[][V]) {
    // Application de l'algorithme de Floyd-Warshall
    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
            }*/
int Graph::getTaille() // GETtaille
{
    return m_n;
}

int **Graph::getMat() // get mat
{
    return m_g;
}
