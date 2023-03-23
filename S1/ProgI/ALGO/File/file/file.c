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
 File createEmptyfile (void) {
    File tmp=malloc(sizeof(Pile));
    tmp->size=0;
    tmp->ListFrIn=createEmptyList();
    tmp->ListFrOut=createEmptyList();
    return tmp;
 }

Bool isEmptyfile (File _file) {
    return (_pile == NULL) ? 1 : 0;
}

Data FrInfile(File _file){
    return head(_file->ListFrIn);
}
Data FrOutfile(File _file){
    return head(_file->ListFrOut);
}

void addInFile (Data _data, File _file) {

    _file->sizeF++;
    if(isEmptyfile(_file))
    {
        List tmp=malloc(sizeof(List));
        tmp->element=_data;
        tmp->next_link=NULL;
        _file->ListFrIn=tmp;
        _file->ListFrOut=tmp;


    }
    else
    {
    List tmp=malloc(sizeof(List));
    tmp=_file->ListfrIn;
    _file->ListfrIn->element=_data;
    _file->ListfrIn->next_link=tmp;
    }
    

    
}

void RemoveOutFile (File _file)
{
    assert(isEmptyfile(_file));
    _file->sizeF--;
    List tmp=malloc(sizeof(List));
    tmp->next_link=tail(_file->ListfrIn)->next_link;
    free(_file->ListfrOut);
    _file->ListfrOut=tmp;
    free(tmp);


}








