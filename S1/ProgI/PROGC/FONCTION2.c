#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

double puissance(a,b)
{
int x=1;
int i;
    for ( i = 0; i < b; i++)
    {
        x=a*x;
    }
    
   
return x;

}

int main()
{

    float a,b,c;

    printf("Nombre a eleve a la puissance");
    scanf("%f",&a);

    printf("puissance a eleve");
    scanf("%f",&b);

    c=puissance(a,b);

    printf("Le nombre eleve %f\n",c);


}