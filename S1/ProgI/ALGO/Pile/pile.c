#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "pile.h"



//-----------------------------------------------
// Abstract Data Type functions
//-----------------------------------------------


/**
 * Creates an empty list (pointer to nothing)
 * 
 * @returns The NULL pointer
 */
 Pile createEmptyPile (void) {
    Pile tmp=malloc(sizeof(Pile));
    tmp->size=0;
    tmp->ListPtop=createEmptyList();
    return tmp;
 }

Bool isEmptyPile (Pile _pile) {
    return (_pile == NULL) ? 1 : 0;
}

Data TopPile(Pile _pile){
    return head(_pile->ListPtop);
}

void addPile (Data _data, Pile _pile) {
    _pile->size++;
    _pile->ListPtop=add(_data,_pile->ListPtop);
    
}

Data RemoveTopPile (Pile _pile)
{
    Data e=head(_pile->ListPtop);
    maillon* tmp=s->ListPtop;
    _pile->SizeP--;
    s->ListPtop=tail(s->top);
    free(tmp);
    return e;


}








