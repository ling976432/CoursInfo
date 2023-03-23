#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
// PREMIER ENTIER QUI DONT LA SOMME DES NOMBRES PRECEDENT DEPASSE LE NOMBRE ENTRER



    /*int i,j,sommeN,n,sommeTest;
    j=0;
    sommeN=0;
    sommeTest=0;
    printf("Rentrer le Nombre N");
    scanf("%d\n",&n);

    for ( i = 0; i < n; i++)
    {
        sommeN=sommeN+i;
    }
    while (sommeTest<sommeN)
    {
    sommeTest=0;
        for ( i = 0; i < j; i++)
        {
            sommeTest=sommeTest+i;
        }
        j++;
    }
    j=j-1;
    printf("%d\n",&j);*/



    //@DIVISEUR DE 1 A 100


    /*int i, j, nbtest,z;
    int Tdiviseur[100];
    int Tcheck[100];
    int Sommetest;
    z=0;
    
    nbtest = 1;
    while (nbtest <= 100)
    {

        for ( i = 0; i < 100; i++)
        {
            Tdiviseur[i]=0; 
        }
        
        j = 0;
        Sommetest=0;
        for (i = 1; i <= nbtest; i++)
        {
            if (nbtest % i == 0)
            {
                Tdiviseur[j] = i;
                j++;
            }
        }

        for (i = 0; i < j; i++)
        {

            Sommetest=Tdiviseur[i]+Sommetest;
            if (Sommetest==nbtest)
            {
                Tcheck[z]=nbtest;
                z++;
            }
            
        }
        nbtest++;
    }
for ( i = 0; i < z; i++)
{
        printf("%d\n",&T[z]);
}
*/






    return 0;
}
