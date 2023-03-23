//
//  hash_table.h
//  
//
//  Created by Bac Alexandra on 30/10/2022.
//

#ifndef hash_table_h
#define hash_table_h

#include <stdio.h>
#include <string.h>
#include "data_types.h"
#include "lists.h"

// Types

struct zhashtab {
	int size ;
	List *tab ;
} ;
typedef struct zhashtab Hashtab ;

union zhachage {
  int t_int ;
  char t_char[4] ; } ;

// Fonctions publiques

Hashtab create_empty_hashtab (int n) ;

// get: gets the data associated to the key s (similar to t[s])
// 	args:
//		s: key searched
//		t: hash table to search
//		res: pointer used to return t[s]
// 	returns:
//		bool: s is present or not in the hash table

bool get(char *s, Hashtab t, Gps **res) ;

void set(char *s, Hashtab t, Gps *e) ;

void print_tab(Hashtab t) ;

// Fonctions privées

// List raw_access(Hashtab t, char *key) ;
//  returns a pointeur to the link containing the key / or NULL pointer if the key does not belong to the list

// int fonction_hachage (char *s) ;
//  returns a hash value for the key s

// int h_to_ind(int h, int n) ;
//  returns an integer in [0,n-1]

#endif /* hash_table_h */
