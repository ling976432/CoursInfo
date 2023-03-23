#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "lists.h"

// ////////////////////////////////////////////////
// Abstract Data Type
// ////////////////////////////////////////////////

// is_empty_list : tests if l is empty
// return:
//    1 if list is empty
//    0 otherwise
bool is_empty_list (List l)
{
  return (l == NULL) ;
}

// create_empty_list : returns an empty list
// return:
//    empty list structure
List create_empty_list (void)
{
	return NULL ;
}

// add : adds element e to the head of the list
// return:
//    resulting list
List add (Data e, List l)
{
  // Test is there is enough space -> otherwise reallocate
	link * tmp = (link *)malloc(sizeof(link)) ;
	tmp->elt = e ;
	tmp->next = l ;
	return tmp ;
}

// head : get the head of the list
// return:
//    head
Data head(List l)
{
	assert(!is_empty_list(l)) ;
	return l->elt ;
}

// tail : get the tail of the list
// return:
//    tail
List tail(List l)
{
  assert(!is_empty_list(l)) ;
  
  return l->next ;
}

// ////////////////////////////////////////////////
// Memory management
// ////////////////////////////////////////////////

// free_link : frees the head and returns the tail
List free_link (List l)
{
	link * tmp = tail(l) ;
	free(l) ;
	return tmp ;
}

// free_list : frees the full list
void free_list (List l)
{
	link * tmp ;
	while (!is_empty_list(l))
	{
		tmp = tail(l) ;
		free(l) ;
		l = tmp ;
	}
}

// copy_list : creates a fresh copy of a list
List copy_list(List l)
{
	if (is_empty_list(l))
		return create_empty_list() ;
	else
	{
		return add(head(l), copy_list(tail(l))) ;
	}
}

// ////////////////////////////////////////////////
// Toolbox
// ////////////////////////////////////////////////

void print_list(List l)
{
	Data tmp ;
	printf("[") ;
	while (!is_empty_list(l))
	{
		tmp = head(l) ;
		printf("%s -> ", tmp.key) ;
		print_gps(*(tmp.coord)) ;
		printf(" ") ;
		l = tail(l) ;
	}
	printf("]") ;
}
