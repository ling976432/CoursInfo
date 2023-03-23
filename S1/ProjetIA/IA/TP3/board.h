#include "list.h"

//#define RANDINIT()  srand(time(NULL))
//#define RANDOM()  ((float)rand() / (float)RAND_MAX)
#define RANDMAX(x)  (int)((float)(x)*rand()/(RAND_MAX+1.0))

#define MAX_BOARD 9 //9
#define WH_BOARD 3//3


#define MAX_VECTOR 4
typedef struct {
 int len;
 unsigned int valid[MAX_VECTOR];
} move_t;



Item *initGame();

void initBoard(Item *node, char *board);

Item *getChildBoard( Item *node, int pos );

double evaluateBoard( Item *node );
	
void printBoard( Item *board );
