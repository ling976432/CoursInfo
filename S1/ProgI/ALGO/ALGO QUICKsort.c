#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 10

void my_quicksort(int T[], int deb, int fin) ;
int partition(int T[], int deb, int fin) ;

int main()
{
    int nbmax=15;
    int i=0;
    time_t t;
srand(time(&t));
int T[N];

for ( i = 0; i < N; i++)
{
 T[i]=floor(((double) rand()/RAND_MAX)*nbmax); 

}

//affichage avant trie
for ( i = 0; i < N; i++)
{
    printf("%d |", T[i]);
}
printf("\n");


my_quicksort(T, 0, N-1);

//affichage après trie
for ( i = 0; i < N; i++)
{
    printf("%d |", T[i]);
}
printf("\n");

}








//fonction quicksort
void my_quicksort(int T[], int deb, int fin)
{
   int k;
printf("%d - %d\n", deb, fin) ;
if (fin<=deb)
{
   return;
}
else
{
 
    k=partition(T,deb,fin);
    my_quicksort(T, deb,k-1);
    my_quicksort(T,k+1,fin);

}
}




//fontion Partition
int partition(int T[], int deb, int fin)
{

int temp;
int x=T[deb];
int g=deb+1;
int d=fin;

while (g<=d)
{
    if (T[g]<=x)
    {
        g=g+1;
    }
    else
    {
         temp=T[g];
         T[g]=T[d];
         T[d]=temp;
         d=d-1;
    }
    
}
temp=T[deb];
T[deb]=T[d];
T[d]=temp;
return d;
}
