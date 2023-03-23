#include <stdio.h>
#include <math.h>
#include <assert.h>

int main()

{

  int temp;
  const int n;
  
    printf("taille du tableau\n");
    printf("a");
    scanf("%d",n);
    printf("b");

    int t[n];
    int tt[n];

    for (int i = 0; i < n; i++)
    {
        printf("Inserer la");
        printf("%d\n",i+1);
        printf("case du tableau\n");
        scanf("%d",temp);
        t[i]=temp;

    }
    

    for (int i = n; i < 0; i--)
    {
       tt[i]=t[n];
    }
    if (tt==t)
    {
       printf("les deux suites déléments sont des palindrome");

    }
    else    
    {
        printf("les deux suites ne sont pas des palindromes");
    }
    
    




}