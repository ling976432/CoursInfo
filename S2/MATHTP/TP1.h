
using namespace std;
#include <iostream>
#include <math.h>
#include <vector>
#pragma once
#define MAX 999999

enum Couleur
{
    Rouge,
    Vert,
    Gris,
    Rose,
    Bleu,
    Noir 
};

// struct link
// {
//     node* FirstLink;
//     node* SecondLink;
//     Couleur color;

// };

struct node
{
    int taillemat=0;
    int node=0;
    int taillenode=0;
    int *connex;
    int tailleConnex=0;
    int wet=0; // wet == 0 not wet, wet==1 is wet
    int color=1;
};

class Graph
{
private:
    
    int **m_g; // Graph
    int m_n;   // taille du graphe (matrice carré)
    int Max(int a, int b);
    int Min(int a, int b);

public:
    int step[10] = {};
    int isWet[10]={};

    /*Fonction de base*/
    Graph();                // constructeur vide
    Graph(int n);           // constructeur un graph initialiser a 0 de taille n*n
    ~Graph();               // destructeur
    Graph(const Graph &Gr); // constructeur de copie

    /*Fonction utilitaire*/
    void randomGraph();    // pour créer un graph generer aléatoirement sur un graph deja existant
    void affichageGraph(); // afficher un graph
    void fillGraph();      // remplir un graph manuellement
    void DegGraph();       // return un int qui est le degré du graph
    void identite();
    Graph getConnexite(int); // retourne une matrice qui permet d'obtenir la connexité entre tous le spoints du graphe prend en argument le degré souhaité
    Graph floydMarshall(Graph g, int compteur);
    void FloydGraph(); // Transforme un Graph en Graph pour floyd
    void bfs(int, int,int);

    /*Fonction node*/
    node *getConnexion();      // retourne à quoi chaque node est connecté
    void printNode(node *);    // affiche les node et leurs
    void CentreGraph(Graph g); // retourne la node qui est le centre du Graph

    /*Coloriage Graphe*/
    bool TestCouleurGraph(Graph g);
    void ColoriageGraph(Graph g);
    bool TestCouleurNode(node nd, node *ndtab);
    /*Get*/
    int getTaille(); // get taille graphe
    int **getMat();  // get Graphe en **int

    /*OPERATOR*/
    void operator=(const Graph &);        // operateur =
    void operatorIntToGraph(int **, int); // surcharge operateur = vers int**
    Graph operator*=(const Graph &);      // operateur *=
    int *&operator[](const int &index);   // overloading operator []
    void operatorGraph(Graph);            // operateur multiplicatif entre matrice
};
