#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void trieinsertion(int *T, int n)
{
 int j;
 int tmp;
    for (int i = 2; i < n ; i++)
    {
        tmp = T[i];
         j = i ;
        

        while ((j > 0) && (T[j-1] > tmp))
        {
           
            T[j]=T[j-1];
             j--;

        }
        T[j] = tmp;
    }
    return;
}




void bulle(int* T ,int taille)
{
    int temp;

    for (int i= taille-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (T[j]>T[j+1])
            {
                temp=T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }   
        }
    }
        return;

}
int main()
{

    int *T = malloc(sizeof(int) * 5);
    T[0] = 5;
    T[1] = 3;
    T[2] = 1;
    T[3] = 6;
    T[4] = 0;
    trieinsertion(T, 5);
    //bulle(T,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",T[i]);
    }
    
}