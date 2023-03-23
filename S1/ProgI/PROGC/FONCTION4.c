#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void draw(int n)
{
    int b=n;
    if (n == 1)
    {
        printf("%d\n",n);
    }
    else
    {
    draw(n - 2);
    printf("%d\n", n);
    /*if (n==b)
    {
        printf("%d\n",n);
        
        
    }*/
    
    }

    


    
}

int main()
{
    draw(3);
}