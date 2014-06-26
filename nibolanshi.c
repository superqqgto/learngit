#include <stdio.h>
#include <stype.h>
#include <stdlib.h>

#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10
#define MAXBUFFER 10

typedef double Elemtype;
typedef struct
{
    Elemtype *base;
    Elemtype *top;
    int stackSize;
}sqStack;

void InitStack()
