#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>




void affichagetableau(int* T, int taille)
{
int i;
for ( i = 0; i < taille; i++)
{
printf("%d  |\n",T[i]);
}

}


double* create_vector(int taille,int valeurmax)
{
      
int i;
int *pT = malloc(taille*sizeof(double));
     for (i = 0; i < taille; i++)
    {

        pT[i]=((double) rand()/RAND_MAX)*valeurmax;

    }
return pT;


}

void free_vector(double* v)
{
    free(v);
}
void fill_vector(double *v, int N)
{
int i;
     for (i = 1; i < N+1; i++)
    {

        v[i]=i;

    }
}

double dot_product(double *u, double *v, int N)
{   
    double w;
    int i;
    for ( i = 0; i < N; i++)
    {
        w+=u[i]*v[i];
    }
    
return w;
}

int is_orthogonal(double *u, double *v, int N)
{
 double a;
 a=dot_product(u,v,N);
 if (a==0)
 {
    printf(" les deux vecteurs sont orthogonaux\n");
    return 1;
 }
 else
 {
printf("les deux vecteur ne sont pas orthogonaux\n");
    return 0;

 }

}

double norm2(double *u, int N)
{

double w;
    int i;
    for ( i = 0; i < N; i++)
    {
        w+=u[i]*u[i];
        w=sqrt(w);
    }
    
return w;

}





int main()
{
int i,j,z,n;
int *T;
for ( i = 0; i < n; i++)
{
  
}





}
