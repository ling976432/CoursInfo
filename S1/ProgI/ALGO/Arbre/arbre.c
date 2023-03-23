#include "arbre.h"

/* FONCTION ARBRE BASIQUE*/
// arbre creer_arbre()
// {
//     arbre a;
//     noeud n = createfill_noeud(5);
//     a = &n;
//     return a;
// }

bool IsArbreNULL(arbre a) 
{
if (a==NULL)
    {
        return true;
    }
else return false
}
arbre creer_arbrevide()
{
    arbre a;
    a->fils_droit=NULL;
    a->fils_gauche=NULL;
    a->elt=NULL;
    return a;
}
Data Racine(a)
{
    if (a==NULL)
    {
        return NULL;
    }
    
    return a->elt;
}
arbre creer_arbre(Data data,arbre d,arbre g)
{

    arbre a;
    a->elt=data;
    a->fils_droit=d;
    a->fils_gauche=g;
    return a;
}


    


// FONCTION NOEUD BASIQUE

//

//
// noeud createfill_noeud(Data E)
// {
//     noeud n;
//     n.elt = E;
//     n->fils_droit = NULL;
//     n->fils_gauche = NULL;
//     return n;
// }
// FONCTION PRINTF
// CHECK
void printnoeud(noeud n)
{
    printf("[");
    printf("%d", n.elt);
    printf("]");
}

void printarbre(arbre a);
{
   arbre b;
    while (a->fils_droit != NULL && a->fils_gauche!=NULL)
    {
        printf("%d", fils_droit->elt);
        printf("%d", fils_gauche->elt);
        b=a->fils_droit;
    }
    
    


}