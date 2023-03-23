
#include <iostream>
#include <cmath>

#define pi 3.14
using namespace std;

  enum FIGURE { rond, carre, triangle };


int* ask(string question, string answers[], int* size)
 {
    
    int a,b,c;
   
    cout<<question<<endl;
    int i=0;
    while (answers[i])
    {
        cout<<i<<") "<<answers[i]<<endl;
        i++;
    }
     cin>>i;
    if (i==3)
    {
        cout<<"vous avez choisi"<<answers[i]<<endl;
    cout<<"Veuillez renseigner la taille du coté a"<<endl;
        cin>>size[0];
         cout<<"Veuillez renseigner la taille du coté b"<<endl;
         cin>>size[1];
        cout<<"Veuillez renseigner la taille du coté c"<<endl;
        cin>>[2];
    }
    
    

    cout<<"vous avez choisi"<<answers[i]<<endl;
    cout<<"Veuillez renseigner la taille"<<endl;
    int cote;
    cin>>cote;
    return;

 }
  


int surface(int taille, int choice)
{
if (choice==1)
    {
        return pi*taille*taille;
    }
    if (choice==2)
    {
        return taille*taille;
    }
    if(choice==3)
    {
      return 
    }

}

int perimetre(int taille,int choice )
{

    if (choice==1)
    {
        return
    }
    if (choice==2)
    {
        return
    }
    if(choice==3)
    {
        return
    }

}
int main()
{

    ask("Veuillez chosir Un rond, un triangle ou un carre\n",)
//     int a,b,c,t;
// cout<<"Veuillez chosir Un rond(1), un triangle(2), un caré(3)";
// cin>>a;

// if (a==1)
// {
//     cout<<"veuillez indiquer le rayon du cercle";
//     cin>>b;
//     a=2*pi*b;
//     c=pi*pow(b,2);
//     cout<<"voici le périmetre :"<<a;
//     cout<<"voici la surface :"<<c;

// }
// else if (a==2)
// {
    
// }
// else
// {
// }


}
