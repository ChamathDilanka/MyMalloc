#include <stdio.h>
#define memory_size 20000

/* This char array will be used as the memroy space by MyMalloc and MyFree functions.*/
unsigned char memory[memory_size];

void * MyMalloc(int size);
void MyFree(void * indx_pointer);


