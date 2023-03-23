
#include <stdbool.h>

void bulle(int* T ,int taille)
{

    int temp;
    for (for int i = taille-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (T[j]>T[j+1])
            {
                temp=T[j];
                T[j]=T[j+1];
                T[j+1]=T[j];
            }
            
        }
        
    }
        

}