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

int dichotomie(int T[], int taille, int recherche)
{
int i=0;
int j=taille-1;
bool find=false;
int pivot;
int res=-1;

while ((i<j) && (find==false))
{
        pivot=floor(((i+j)/2));
    if (T[pivot]==recherche)
    {   
         return pivot;
         find=true;
         
    }
    else if (T[pivot]<recherche)
    {
        j=pivot-1;

    }
    else if(T[pivot]>recherche){
        i=pivot+1;

    }
    
    
}


}

int main()
{
int i,j,z,n;
j=0;
int T[5];
T[0]=2;
T[1]=5;
T[2]=7;
T[3]=9;
T[4]=11;
j=dichotomie(T, 5, 2);
printf("%d\n",j);
}
