#include "TP1.h"



int main()
{



Graph g(4);
Graph temp(4);
g.randomGraph();
g.affichageGraph();

g.FloydGraph();

g.affichageGraph();




//g.getConnexite(2,g);
// a=g.getConnexion();
// g.printNode(a);
return 0;
}