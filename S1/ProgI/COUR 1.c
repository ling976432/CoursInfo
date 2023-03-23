/* C, C++, Swift etc langage impératif + langage compilé
Html PHP JS, lanagage web

langage compilé : transforme le fichier .C en fichier  .txt puis en fichier .exe pour la machine

Python, java etc : langage non compilé,  logiciel interprete donc pas de .exe le logiciel interprete se charge de le transformer 
lui même en langage machine.

Etape ecriture Programme:

langage humain -> algo-> langage de code (c c++)-> .txt-> .exe en langage machine*/



//Base syntaxique :

/* entête : liste librarie.  -#input <nom> , -#input "nom" ( si fait par nous même)*/

// Stdio.h
//math.h

/* Déclaration de cste : #define nomcste value : #define N 10 */

//Programme principale

int name()
{

   //code
   return 0;

}

/* différent type : Int(entier), Char(charactère), Double/float (Reel)*/


int main()
{

int a; short int e; long int r;
char b;
double c;
float d;

 return 0;
}

 // déclarer -> alloué espace mémoire


 // Différent opérateur logique :

int main()
{

int a; short int e; long int r;
char b;
double c;
float d;
a=2; //affectation valeur

if (a==e) //test si les deux valeur sont égale
{
    /* code */
}
 if (a==e && a==r) // le ET
 {
    /* code */
 }
 
 if (a==e || a==r) // le OU
 {
    /* code */
 }

 if (a!=e) // le différent
 {
    /* code */
 }

 

 return 0;
}

//structure de controle
int main()
{

if (/* condition */)
{
    /* code */
}

while (/* condition */)
{
    /* code */
}

for (/*initialisation premiere valeur de i */ int i = 0; i < int count=5/* condition d'arret*/; /*incrémentation*/i++)
{
    /* code */
}

// affichage :

printf("LD.zlqqzd");
int i=6;
printf("resultat %d\n",i); //int -> %d, double->g, char->%c, chaine de char->%s, float->%f

scanf("%d",&i);
/*input  %d to accept input of integers.

%f to accept input of real number.

%c to accept input of character types.

%s to accept input of a string.

*/

 