#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 20


static int intCompare(const void *p1, const void *p2)
{
    int int_a = * ( (int*) p1 );
    int int_b = * ( (int*) p2 );

    if ( int_a == int_b ) return 0;
    else if ( int_a < int_b ) return -1;
    else return 1;
}



int main()
{

time_t t;

int m;
int i;
int x;
int v;
int nbmax;

int T[N];
srand(time(&t));



printf("quelle est le nombre max que vous voulez dans le tableau ?");
scanf("%d",&nbmax);



for ( i = 0; i < N; i++)
{
 T[i]=floor(((double) rand()/RAND_MAX)*nbmax); 

}

qsort(T, N, sizeof(int), intCompare);
for ( i = 0; i < N; i++)
{
    printf("%d\n",T[i]);
    printf(" ");
}



printf(" Selectionner le nombre a trouver dans le tableau \n");
scanf("%d",&x);
/*printf(" Selectionner si vous voulez la première occurence dans le tableau ou la derniere\n");
printf(" si vous voulez la première tapez 1, si vous voulez la dernière tapez 2\n");
scanf("%d",&v);*/



// peu importe l'occurence
m=0;
i=0;
printf("f\n");
while ()
{
    
    if  (  T[  (int) floor((N/2)+m)  ]<x  ) 
    {

       m=(m)+((N)/(2*i));
		  printf("%d\n",T[(int) floor((N/2)+m) ]  );
        if (  T[(int) floor((N/2)+m) ]==x  )
		  {
			/*cond*/
		  }
		  
    }
      
      if ( T[ (int) floor((N/2)+m) ]>x) 
    {
        
		  m=(m)-((N)/(2*i));
		  printf("%d\n",T[(int) floor((N/2)+m) ]  );


    }
    
    
i++;
printf("%d\n",i);
}

return 0;
}




/*
if (v==1)
{
    
    i=0;
    while (x!=T[i] && i<N+1)
    {
        i++;
    }
    printf(" la première occcurence se trouve à la"); printf("  %d",i+1); printf("eme case du tableau");
}
if (v==2)
{
    i=N;
    while (x!=T[i] && i>-1)
    {
        i--;
    }
     printf(" la dernière occcurence se trouve à la"); printf("  %d",i+1); printf("eme case du tableau ");
    
}

if (i==-1 || i==N+1 )
{
    printf(" Le nombre ne se trouve pas dans le tableau ");
}




return 0;


}
*/


    
        

     

        
          






