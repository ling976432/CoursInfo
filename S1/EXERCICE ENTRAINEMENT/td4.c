#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void affichagetableau(int *T, int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("%d  |\n", T[i]);
    }
}

int *createvector(int N)
{
    int *T = malloc(N * sizeof(int));
    return T;
}

void freevector(int *T)
{
    free(T);
}
void fillvector(int *T, int taille, int nbmax)
{
    int i;
    s_rand((NULL));
    for (i = 0; i < taille; i++)
    {
        T[i] = floor((double)rand() / RAND_MAX) * nbmax;
    }
}

void print_vector(double *v, int N);
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d\n | ", v[i]);
    }
}
double **createMat(int C, int L)
{
    int i double **M = malloc(C * sizeof(double));
    for (i = 0; i < C; i++)
    {
        double M[i] = malloc(L * sizeof(double));
    }
    return M;
}

double **produitmatrice(double **M1, double **M2, int I, int J, int K)
{
    double res;
    double **Mres = createMat(I, K);

    for (int i = 0; i < I; i++)
    {
        for (int k = 0; k < K; k++)
        {
            for (int j = 0; j < J; j++)
            {
                Mres[i][k] += M1[i][j] * M2[j][K];
            }
        }
    }
    return Mres;
}

double **computepower(double **M1, int I, int Power)
{

    double **Mres = createMat(I, J);
    identityMat(Mres, I);
    for (i = 0; i < Power; i++)
    {
        Mres = produitmatrice(Mres, M1, I, I, I);
    }
    return Mres;
}
identityMat(double **Mres, int I)
{

    for (int i = 0; i < I; j++)
    {
        for (int j = 0; j < I; j++)
        {
            if (i == j)
            {
                Mres[i][j] = 1;
            }
        }
    }
}

bool is_diagMat(double** M, int I)
{

    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < I; j++)
        {
            if (i==j)
            {
                if (M[i][j]=!1)
                {
                    return false;
                }
                
            }
            
            
        }
        
    }
    return true;
    

}

bool is_symetric(double** M,int I)
{

for(int i=0; i<I;i++)
{

for (int j = 0; j < I; j++)
{
    if (M[i][j]!=M[j][i])
    {
        return false:
    }
    
}


}
return true;

}


int main()
{
}
