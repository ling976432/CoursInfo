#include <stdio.h>
#include <math.h>



int main()
{
int n;
int somme=0;
int i;
int produit=1;


printf("Saisir un entier n\n");
scanf("%d",&n);

    for (i=0; i < n; i++)
    {
        printf("%d\n",somme);
    
        somme =somme+n;
        produit=n*produit;
        
    }
    printf("%d\n",somme);
    printf("%d\n,",produit);



    return 0;
}
