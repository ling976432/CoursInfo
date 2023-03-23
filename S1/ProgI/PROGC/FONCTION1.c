#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>



float minf(float a, float b,float c)
{
    float T[3];
    T[0]=a;
    T[1]=b;
    T[2]=c;
    float d=RAND_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (T[i]<d)
        {
            d=T[i];
        }
        
    }
    return d;
    
}

float maxf(float a, float b, float c)
{
    float T[3];
    T[0]=a;
    T[1]=b;
    T[2]=c;
    float d=-RAND_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (T[i]>d)
        {
            d=T[i];
        }
        
    }
    return d;
    
    

    
}

int main()
{

    time_t t;
    //seed rand

    srand(time(&t));

    float a=(float) rand();
    float b=(float) rand();
    float c=(float) rand();

    float minimum;
    float maximum;
    
    printf(" a: %f\n", a );
    printf(" b: %f\n", b );
    printf(" c: %f\n", c );


    /*printf(" Veuillez rentrer le float a\n");
    scanf("%f",&a);
    printf("veuillez rentrer le float b\n");
    scanf("%f",&b);*/

    
    minimum=minf(a,b,c);
    maximum=maxf(a,b,c);

    printf("minimum :%f\n", minimum);

    printf("maximum :%f\n", maximum);



    
     


}