#include <stdio.h>
#include "listes.h"

int main ()
{
	List l = create_empty_list(), l2,l3 ;
	l = add(3, add(2, add(1, l))) ;
	print_list(l);
	
	l2 = add(4, tail(l)) ;
	print_list(l2);
	
	l2 = add(head(l2),l2) ;
	print_list(l2) ;
	
	l2 = add(head(add(3,l2)), l2);
	print_list(l2) ;

	l2=l3;

	l3= add(tail_share(l2),l2);
	print_list(l3);

	l2=add(tail(l2),l2);
	print_list(l2);

	return 0 ;
}
