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
return i+1;

}
 int nb_occ_in_string(char c, char *ch)
 {
    int i=0;
    int nbocc=0;
    while (ch[i]!=("\0"))
    {
        if (ch[i]==c)
        {
        nbocc++;
        }
    
        i++;
    }
    return nbocc;

 }



int main()
{
int i,j,z,n;


char *T=NULL;
T=(char*)malloc(sizeof(char)*5);
T[0]="a";
T[1]="a";
T[2]="a";
T[3]="b";
j=nb_occ_in_string('a',T);
printf("%d\n",&j);



return 0;


}
