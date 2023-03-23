void echange(int[] T, int n)
{

int minI=0;
int min=T[0]
int nb=0;
int temp;


for (int i = 0; i < n-1; i++)
{
    for (int j = nb; j < n; j++)
    {
        
        if (T[j]<min)
        {
            min=T[j]
            minI=j;
        }
        
    }
temp=T[nb];
T[nb]=T[minI]; 
T[minI]=temp;
nb++;
}


}