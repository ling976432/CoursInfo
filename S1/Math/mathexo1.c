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

int length_of_string(char* ch)
{
    int i=0;
while (ch[i]!=("\0"))
{
    i++;
}
return i;

}
 int nb_occ_in_string(char c, char * ch)
 {
    int i=0;
    int nbocc=0;
    while (ch[i]!=("\0"))
    {
        if (ch[i]==(c))
        {
        nbocc++;
        }
    
        i++;
    }
    return nbocc;

 }

char* concatenation(char* c, char* a)
{
    int i;
char* b;
int lgC;
int lgA;
 lgC=length_of_string(c);
 lgA=length_of_string(a);
 b=malloc((lgA+lgC+1)*sizeof(char));
 b=c;
 for ( i = 0; i < lgA; i++)
 {
    b[i]=a[i];
 }
 for (int i = 0; i < lgC; i++)
 {
    b[lgA+i]=b[i];
 }
 
 *(b+lgC+lgA)=("\0");
}



int main()
{
int i,j,z,n;
int *T;
for ( i = 0; i < n; i++)
{
  
}





}
