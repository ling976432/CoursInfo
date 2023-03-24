
using namespace std;
#include <iostream>
#include <math.h>
#include <vector>
#pragma once

struct node
{
    int node;
    int *connex;
    int wet; // wet == 0 not wet, wet==1 is wet
};

class Graph
{
private:
    int **m_g; // Graph
    int m_n;   // taille du graphe (matrice carré)
    int Max(int a, int b);
    int Min(int a, int b);

public:
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
     Graph floydMarshall(Graph g);
     void FloydGraph();//Transforme un Graph en Graph pour floyd
    // int depthSearch();


    /*Fonction node*/
    node *getConnexion();   // retourne à quoi chaque node est connecté
    void printNode(node *); // affiche les node et leurs

    /*Get*/
    int getTaille(); // get taille graphe
    int **getMat();  // get Graphe en **int

    /*OPERATOR*/
    void operator=(const Graph &);   // operateur =
     void operator=( int**);            //surcharge operateur = vers int**
    Graph operator*=(const Graph &); // operateur *=
    int *&operator[](const int &index); // overloading operator []
    void operatorGraph(Graph); // operateur multiplicatif entre matrice

};
