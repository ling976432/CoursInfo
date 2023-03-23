#ifndef __PILE_H__
#define __PILE_H__
#include "C:\Users\lucbo\OneDrive\Bureau\CoursInfo\ProgI\ALGO\tab_liste\linklst.h"

//-----------------------------------------------
// Constants
//-----------------------------------------------


#define __LINK_SIZE__ sizeof(struct __s_List)


//-----------------------------------------------
// New data type
//-----------------------------------------------




struct __s_Pile {
    int SizeP;
    List ListPtop;
};

typedef struct __s_Pile * Pile;


//-----------------------------------------------
// Prototypes
//-----------------------------------------------


//----- ADT

Pile createEmptyPile (void);
bool isEmptyPile(Pile _pile);
Pile addPile (Data _data, Pile _pile);
Data RemoveTopPile (Pile _pile);
Data TopPile(Pile _pile);

#endif