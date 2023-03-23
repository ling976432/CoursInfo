#ifndef __ARBRE_H__
#define __ARBRE_H__
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "C:\Users\lucbo\OneDrive\Bureau\CoursInfo\ProgI\ALGO\Pile\pile.h"


typedef int Data;

struct znoeud {
Data elt ;
struct znoeud *fils_gauche;
struct znoeud *fils_droit; };
typedef struct znoeud noeud ;
typedef struct znoeud *arbre;

//FONCTION ARBRE
arbre creer_arbre();
void add_arbrefilsgauche(arbre a, noeud n);
void add_arbrefilsdroite(arbre a,noeud n);
Data Racine(arbre a);

// FONCTION NOEUD
noeud createfill_noeud(Data E);
void add_noeudgauche(noeud nparent,arbre nfils);
void add_noeuddroit(noeud nparent,arbre nfils);//
//FONCTION PRINT
void printnoeud(noeud n);//print un noeud->elt




#endif