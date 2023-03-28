#include "TP1.h"



int main()
{



Graph g(8);
Graph temp;
int a;


g.randomGraph();
temp=g.floydMarshall(g,a);
g.bfs(0,4,a);
// g.affichageGraph();
// temp.affichageGraph();
 








// temp=g.floydMarshall(g);
// temp.affichageGraph();


// temp.CentreGraph(temp);



//g.getConnexite(2,g);
// a=g.getConnexion();
// g.printNode(a);
return 0;
}