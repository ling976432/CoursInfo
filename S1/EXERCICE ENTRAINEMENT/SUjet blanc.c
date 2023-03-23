#include <stdlib.h>
#include <stdio.h>

int Aleatoire(int N)
{
    srand(time(NULL));
    N = rand() % N;
}

int[] tirage()
{
    int test;
    int a;

    while (j != 6)
    {

        a = Aleatoire(50);

        for (int i = 0; i < 6; i++)
        {
            if (a == T[i])
            {
                test = 1;
            }
        }
        if (test == 0)
        {
            T[j] = a;
            j++;
        }
    }
    return T;
}

int DiffIntBorne(int[] Tab, int size)
{

    int Tres[20];
    int i;
    int j = 0;
    int k;
    int test;

    for (int i = 0; i < size; i++)
    {
        test = 0;
        if (T[i] >= 1 && T[i] <= 20)
        {
            for (j = 0; j < k; j++)
            {
                if (Tres[j] == T[i])
                {
                    test = 1;
                }
            }
            if (test == 0)
            {
                Tres[k] = T[i];
                k++;
            }
        }
    }
}

int DiffInt(int[] Tab, int size)
{

    int *Tres = malloc(size * sizeof(int));
    int i;
    int j = 0;
    int k;
    int test;

    for (int i = 0; i < size; i++)
    {
        test = 0;
        for (j = 0; j < k; j++)
        {
            if (Tres[j] == T[i])
            {
                test = 1;
            }
        }
        if (test == 0)
        {
            Tres[k] = T[i];
            k++;
        }
    }
}

int[] Multiples(int[] T, int size, int a)
{
    int i;
    for (i = 2; i < size; i++)
    {
        if (T[i] % a == 0)
        {
            T[i] = 0;
        }

        else
        {
            T[i] = 1;
        }
    }
    T[a] = 1;
}

int main(){



    
}