//
//  main.c
//  
//
//  Created by Bac Alexandra on 28/10/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

void test ()
{
	Hashtab t = create_empty_hashtab(5) ;
	Gps *c ;
	bool b ;
	char buff[128] ;
	
	c = malloc(sizeof(Gps)) ;
	set_vec3(c->latitude, 43, 17, 47) ;
	set_vec3(c->longitude, 5, 22, 12) ;
	set("Marseille", t, c) ;
	
	c = malloc(sizeof(Gps)) ;
	set_vec3(c->latitude, 43, 31, 34) ;
	set_vec3(c->longitude, 5, 26, 43) ;
	set("Aix", t, c) ;
	
	c = malloc(sizeof(Gps)) ;
	set_vec3(c->latitude, 48, 52, 0) ;
	set_vec3(c->longitude, 2, 19, 59) ;
	set("Paris", t, c) ;
	
	print_tab(t) ;

	set_vec3(c->longitude, 2, 20, 0) ;
	set("Paris", t, c) ;
	
	print_tab(t) ;
	
	printf("Saisir une ville : ") ;
	scanf("%s", buff) ;
	b = get(buff, t, &c) ;
	if (b)
		print_gps(*c), printf("\n") ;
	else
		printf("Ville absente\n") ;

}

int main ()
{
	test() ;
	return 0 ;
}
