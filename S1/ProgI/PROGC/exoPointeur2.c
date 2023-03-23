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

int* my_realloc(int *T, int taille, int taille2)
{
    int i;
    int *pT = malloc(taille2*sizeof(int));
    for ( i = 0; i < taille; i++)
    {
       pT[i]=T[i];
    }
    
return pT;
}

void my_realloc2(int **pT, int taille, int taille2)
{
int i;
int *temp=malloc(taille2*sizeof(int));

 for ( i = 0; i < (taille<taille2 ? taille : taille2); i++)
 {
    temp[i]=*pT[i];
 }
 
free(*pT);
*pT =temp;
}



int main()
{
/*int a[8] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1];
int *q = &a[5];
printf("valeur de a :\n");
printf("%d  |\n",a[1]);
printf("%d  |\n",a[5]);

printf("adresse de la case a|\n");
printf("%d  |\n",&a[1]);
printf("%d  |\n",&a[5]);
printf("%d  |\n",&a);
//meme chose :
printf("%d  |\n",p);
printf("%d  |\n",q);
printf("adresse de la case p|\n");
printf("%d  |\n",&p);
printf("%d  |\n",&q);


printf("%d  |\n",*p);
printf("%d  |\n",*q);
printf("Test |\n");
printf("%d  |\n",q-p);



printf("%d  |\n",*p);
printf("%d  |\n",*q);*/




}
