#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 3

int main()
{


int i;
int j;
int nbmax=5;
int testmin=nbmax+1;
int testmax=-1;
int indmin;
int indmax;
int T[N][N];//init tableau 2 dim


time_t t;
//seed rand

srand(time(&t));

//attribution valeur tab
for ( i = 0; i < N; i++)
{
    for ( j = 0; j < N; j++)
    {
        T[i][j]=floor(((double) rand()/RAND_MAX)*nbmax); 
        
    }
    
    
}
//affichage tableau
for ( i = 0; i < N; i++)//colonne
{

    for ( j = 0; j < N; j++)//ligne
    {
       printf("%d",T[i][j]);printf(" | ");
        
    }
    printf("\n");
    for ( j = 0; j < N; j++)
    {
        printf("__  ");
    }
    
    printf("\n");
    
}

for ( i = 0; i < N; i++)//colonne
{

    for ( j = 0; j < N; j++)//ligne
    {
      
      
        
    }
   
    
    
    
    
}
    






}