//
//  data_types.h
//  
//
//  Created by Bac Alexandra on 30/10/2022.
//

#ifndef data_types_h
#define data_types_h

typedef int bool ;

struct zgps {
	int latitude[3], longitude[3] ;
} ;
typedef struct zgps Gps ;

struct zcouple {
	char *key ;
	Gps *coord ;
} ;
typedef struct zcouple Couple ;

// Inline functions

static inline void print_gps(Gps c)
{
	printf("(%d %d %d N, %d %d %d E)", c.latitude[0], c.latitude[1], c.latitude[2], c.longitude[0], c.longitude[1], c.longitude[2]) ;
}

static inline void set_vec3(int *v, int x, int y, int z)
{
	v[0] = x ;
	v[1] = y ;
	v[2] = z ;
}


#endif /* data_types_h */
