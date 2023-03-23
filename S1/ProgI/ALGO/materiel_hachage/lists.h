#ifndef __LISTES_H__
#define __LISTES_H__

// Définition des types
typedef Couple Data ;

struct zlink {
	Data elt ;
	struct zlink * next ;
};
typedef struct zlink link, * List ;

// Abstract Data Type
bool is_empty_list (List) ;
List create_empty_list (void) ;
List add (Data, List);
Data head(List) ;
List tail(List) ;

// Memory management
List free_link (List l) ;
void free_list (List l) ;
List copy_list (List l) ;

// Toolbox
void print_list(List) ;

#endif
