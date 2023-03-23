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

float compostition1(int x,int y){

    return x+y+x*y;
}
float composition2(float x, float y){

    return x+y-x*y;
}
float composition3(float x, float y){

    return x-y-x*y;
}


int R(int n, int m){

    if (n==m || n+1<m)
    {
         return 1;
    }
    else
    return 0;
    
}



int main()
{
int i,j,z,n;
int *T;
for ( i = 0; i < n; i++)
{
  
}





}
