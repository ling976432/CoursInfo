#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void compteur_i(int n)
{
    printf("%d | \n",n);
    if ( n>1 )
    {
    return compteur_i(n-1);
    }
    

}
void compteur(int n)
{
    if (n==0)
    {
        
    }
    else
    {
compteur(n-1);
printf("%d", n);
    
    }
    
    
}

int main()

{  
    //compteur_i(10);
    compteur(10);
    return 0;

}