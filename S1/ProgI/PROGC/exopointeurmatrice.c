#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int* create_filltab(int taille, int valeurmax)
{
    srand(time(NULL));
    int i;
    int* pT=malloc(taille*sizeof(int));
    for (i = 0; i < taille; i++)
    {
        pT[i]=floor(((double) rand()/RAND_MAX)*valeurmax);  

    }
    return pT;
}

void affichagetableau(int* T, int taille)
{
int i;
for ( i = 0; i < taille; i++)
{
printf("%d  |\n",T[i]);
}
}


void affichagemat(double **T, int nbligne, int nbcolonne)
{
int i,j;
for ( i = 0; i < nbligne+1; i++)
{
   
    for ( j = 0; j < nbcolonne; j++)
    {
        
        printf("%g |",T[i][j]);
        
        
    }
   

    printf("\n");

}

}

double** createfill_mat(int nbligne, int nbcolonne, int valeurmax) 
{
srand(time(NULL));
int i,j;
double **ppMat;
//allocation des lignes
ppMat=(double**)malloc(nbligne*sizeof(double));

//allocation des colonnes
for (i = 0; i < nbcolonne; i++)
{
 ppMat[i]=(double*)malloc(nbcolonne*sizeof(double));
}

//remplissage
for ( i = 0; i < nbligne; i++)
{
    for ( j = 0; i < nbcolonne; i++)
    {
        ppMat[i][j]=floor(((double) rand()/RAND_MAX)*valeurmax);  
    }

    

}
return ppMat;
}

int main()
{
double **mat;
mat=createfill_mat(3,3,6);

//mat=createfill_mat(3,3,5);
affichagemat(mat,3,3);
return 0;
}
