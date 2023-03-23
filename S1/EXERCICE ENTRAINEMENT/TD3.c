#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>




/*float puissance(float x, int elevation)
{
    if(elevation<0)
    {
        return 0;
    }
    if (n==0)
    {
        return 1;
    }
    else
    {
        return x*puissance(x,elevation-1)
    }
    
}*/


int fibonacci(int fibonnacci,int n)
{
    if (n<=1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
void displayarrayrec(int[] T,int taille)
{
    if (n>-1)
    {
        displayarrayrec(T,taille-1);
    }
    printf("%d\n",T[taille]);
    
    


}