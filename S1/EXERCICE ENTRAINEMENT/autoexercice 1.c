#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int factorielle(int n)
{
    if (n==1)
    {
      return 1;  
    }
    else
    {   
        
         return n*factorielle(n-1);


    }
    
}
int fibonnacci(int n)
{
if(n==0)
{
    return 0;
}
else{

    return n+fibonnacci(n-1);
}


}



void affichagetableau(int* T, int taille)
{
int i;
for ( i = 0; i < taille; i++)
{
printf("%d  |\n",T[i]);
}

}



int main()
{
int i,j,z,n;
n=5;
j=factorielle(n);
printf("%d\n",j);
j=fibonnacci(n);
printf("%d\n",j);





}
