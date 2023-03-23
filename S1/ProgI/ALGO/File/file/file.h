#ifndef __PILE_H__
#define __PILE_H__
#include "C:\Users\lucbo\OneDrive\Bureau\CoursInfo\ProgI\ALGO\Pile\pile.h"

//-----------------------------------------------
// Constants
//-----------------------------------------------

//-----------------------------------------------
// New data type
//-----------------------------------------------




struct __s_File {
    int sizeF;
    List ListFrIn;
    List ListFrOut;
};

typedef struct __s_File *File;


//-----------------------------------------------
// Prototypes
//-----------------------------------------------


//----- ADT

File createEmptyFile (void);
bool isEmptyFile(File _File);
File addFileDeb (Data _data, File _File);
File removeFileFin (Data _data, File _File);
Data TopFile(File _File);

#endif