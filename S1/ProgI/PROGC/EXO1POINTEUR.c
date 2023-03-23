#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


void affichagetableau(int* T, int taille)
{
int i;
for ( i = 0; i < taille; i++)
{
printf("%d  |\n",T[i]);
}

}



int* createtab(int tailletableau)
{
int i;
int* pT=malloc(tailletableau*sizeof(int));
int nbmax=5;
 pT[1]=1;
 pT[2]=2;
 pT[4]=4;
 pT[3]=3;
 pT[0]=4;
/*for (i = 0; i < tailletableau; i++)
{
  pT[i]=floor(((int) rand()/RAND_MAX)*nbmax);  

}*/

return pT;
}

int main()
{


srand(time(NULL));
    int n=5;
    int* T; 
T=createtab(n);
affichagetableau(T,n);


}

    
