//
//  hash_table.c
//  
//
//  Created by Bac Alexandra on 30/10/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_table.h"
 
// Private functions

int fonction_hachage (char *s)
{
	int n = strlen(s) ;//Clé ?
	int i, j, code = 0, tmp = 1 ;
	union zhachage d ;
	for (i=0; i< n/4 ; i++)
	{
		for (j=0; j<4; j++)
			d.t_char[j] = s[4*i+j] ;
		tmp = 5*d.t_int+1 ;
		code = code ^ tmp ;
	}
	if (n % 4 != 0)
		d.t_int = 0 ;
	for (j=0; j<n%4; j++)
		d.t_char[j] = s[4*i+j] ;
	tmp = 5*d.t_int+1 ;
	code = code ^ tmp ;
	return code ;
}

int h_to_ind(int h, int n)
{
	return h%n ; //maniere de retrouver l'indice de ou est notre information dans la table de hachage a partir de la clé
}

List raw_access(Hashtab t, char *key)
{
	int h = fonction_hachage(key) ;
	int ind = h_to_ind(h, t.size) ;
	List tmp = t.tab[ind] ;
	while ((tmp != NULL) && (strcmp(head(tmp).key,key) != 0))
	{
		tmp = tail(tmp) ;
	}
	return tmp ;
}

// Public functions

Hashtab create_empty_hashtab (int n)
{
	int i ;
	Hashtab t ;
	t.size = n ;
	t.tab = (List *)malloc(n * sizeof(List)) ;
	for (i=0; i<n; i++)
		t.tab[i] = create_empty_list() ;
	return t ;
}

bool get(char *s, Hashtab t, Gps **res)
{
/*premiere essaie*/
	// int h = fonction_hachage(s) ;//accède à la case de de la table de hachage souhaiter.
	// int ind = h_to_ind(h, t.size) ;
	
	// if (t.tab[ind] != NULL)//verife
	// {
	// 	*res=t->tab[ind]->;//retourne le pointeur dans res
	// 	return true;
	// }else{
	// 	res=NULL;
	// 	return false;
	// }
	
	list tmp =raw_access(t,s);
	if (tmp!=NULL)
	{
		**res=&tmp;
		return res;
	}
	
}

void set(char *s, Hashtab t, Gps *e)
{
   list tmp=raw_access(t,s);
	tmp.elt=e;

}

void print_tab(Hashtab t)
{
	int n = t.size, i ;
	
	for (i=0; i<n; i++)
	{
		printf("%d ==> ", i) ;
		print_list(t.tab[i]) ;
		printf("\n") ;
	}
}
