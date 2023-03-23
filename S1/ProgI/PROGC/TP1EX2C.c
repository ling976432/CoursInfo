#include <stdio.h>
#include <math.h>

int main()
{

float a;
float b;
float c;
float delta;
float s1;
float s2;

printf("Saisir le polynome ax^2 + bx +c\n");
printf("Saisir le coefficient a\n");
scanf("%g",&a);
printf("Saisir le coefficient b\n");
scanf("%g",&b);
printf("Saisir le coefficient c\n");
scanf("%g",&c);

delta=(b*b)-(4*a*c);

if (delta<0)
    {
        printf("la solution n'est pas réel\n");
    }
else
    {

    s1=(-b)-sqrt(delta);
    s1=(s1)/(2*a);
    printf("S1  %f\n",s1);
    s2=(-b)+sqrt(delta);
    s2=(s2)/(2*a);

}



return 0;
}
