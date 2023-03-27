#include "TP1.h"



int main()
{



Graph g(8);
Graph temp;
g.randomGraph();
g.affichageGraph();



temp=g.floydMarshall(g);
temp.affichageGraph();


temp.CentreGraph(temp);



//g.getConnexite(2,g);
// a=g.getConnexion();
// g.printNode(a);
return 0;
}