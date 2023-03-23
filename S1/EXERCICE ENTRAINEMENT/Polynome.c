#include 'POLYNOME.h'
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

Polynome *create_polynomial(int K)
{
    Polynome *P = malloc(sizeof(Polynome));
    P->coeff = malloc((K+1) * sizeof(double));
    P.K = K;
    return P;
}

void free_polynomial(Polynomial *p) //: supprime un polynôme en libérant l’espace mémoire correspondant.
{
    free(p->coeff);
    free(p);
}

void set_coefficient(Polynomial *p, int k, double c) //: donne la valeur c au coefficient d’ordre k
{
    p->coeff[k] = c;
}

double eval_polynomial(Polynomial *p, double x)
{
    double res=0;
   for (int i = 0; i < p.K; i++)
   {
    res+=p->coeff[i]*pow(x,i);
   }
   return res;
   
}
Polynome *diff_polynomial(Polynomial *p)
{
 for (int i = p.K; i =< 0; i--)
 {
    p->coeff[i]=p->coeff[i]*(i-1);

    p->coeff[i-1]++;
 }
 
}