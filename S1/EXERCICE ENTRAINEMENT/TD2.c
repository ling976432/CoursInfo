#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
int main()
{
int *T=malloc(sizeof(int));
T[0]=3;
T[1]=2;
T[2]=5;
T[3]=1;
int a=INT_MAX;
for (int i = 0; i < 4; i++)
{
    if (T[i]<a)
    {
        a=T[i];
    }

}
printf("%d\n",a);




return 0;

}
*/
/*int recherche(int[] T,int taille)
for (int i = 0; i < 5; i++)
{
    if (T[i]==x)
    {
        return i;
    }

}
int trie(int[] T, int taille)
{
int tailleres=taille;
int a=T[0];
int resI=0;
int k;
int Tres[tailleres];
for ( i = 0; i < taille; i++)
{
    a=INT_MAX;
    for (int i = 0; i < tailleres; i++)
{

    if(T[i]<a)
    {
        a=T[i];
        k=i;

    }
    if(i==taille)
    {
        T[k]=NULL;
        Tres[resI]=a;
        resI++;

    }
}
}




}*/

/*int[] trie2(int[] T, int taille)
{
    int a = INT_MAX;
    int j = 0;

        for (i = j; i < taille-j; i++)
        {
            if (T[i] < a)
            {
                a = T[i];
            }
            if (i==taille)
            {
               T[j]=a;
            }

        }
}

int main()
{
    int x;
    int T[5];
    T[0] = 3;
    T[1] = 2;
    T[2] = 3;
    T[3] = 5;
    T[4] = 6;
    printf("Nombre X :");
    scanf("%d\n", x);
}
*/
int recherchedichotomie(int[] T, int taille, int search)
{
    int i;
    int deb;
    int fin;
    int pivot = (deb + fin) / 2;
    while (deb != fin && T[pivot] != search)
    {
        if (T[moitier] < search)
        {
            deb=moitier;
            fin=fin;

        }
         if (T[moitier]==search)
        {
           return moitier;
        }
        if (T[moitier] > search)
        {
            deb=deb;
            moitier=fin;
        }

    }
    

    
}

int main()
{
}