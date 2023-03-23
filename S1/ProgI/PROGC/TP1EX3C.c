#include <stdio.h>
#include <math.h>
#include <assert.h> //gerer les erreurs

int main()
{
    
int i=0;
int b;
int n;
int reste;

printf("Nombre à convertir en Base b\n");
scanf("%d",n);
printf("Base b souhaité\n");
scanf("%d",b);



assert( (b>=2) && (b<=9) ); 


while (n!=0)
{

    printf("bit %d : %d\n", i , n%b);
    n=n/b;
    i++ ;  

}




return 0;
}