#include "TP1.h"


void freenode(node a)
{
   
    delete[] a.connex;


}
void freenodetab(node* a)
{
    for (int i = 1; i < a->taillemat; i++)
    {
        freenode(a[i]);
        
    }
   delete[] a;
     
    
}
int main()
{



Graph g(5);
Graph temp;
node* a;



g.randomGraph();
g.affichageGraph();
a=g.getConnexion();
g.printNode(a);
freenodetab(a);
std::cout << "d" << std::endl;




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