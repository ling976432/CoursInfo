#include <math.h>
#ifndef POLYNOME_H
#define POLYNOME_H

typedef struct
{
    double *coeff;
    int K;
} Polynome;

Polynome *create_polynomial(int K)                       // crée un polynôme d’ordre K initialisé à 0.
    void free_polynomial(Polynomial *p)                  //: supprime un polynôme en libérant l’espace mémoire correspondant.
    void set_coefficient(Polynomial *p, int k, double c) //: donne la valeur c au coefficient d’ordre k

    double eval_polynomial(Polynomial *p, double x)   //: calcule la valeur de p en x.
    Polynome *diff_polynomial(Polynomial *p)          //: dérive un polynôme.
    Polynome *diff_n_polynomial(Polynomial *p, int n) //: dérivée n-ième.

