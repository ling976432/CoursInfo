#include "TP1.h"



int main()
{



Graph g(8);
Graph temp;
node* a;



g.randomGraph();
a=g.getConnexion();
for (int i = 0; i < g.getTaille(); i++)
{
    cout<<(Couleur)a[i].color<<endl;
}

g.printNode(a);
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