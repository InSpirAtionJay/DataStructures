/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/****************************************************************************** */
#define SUCCESS (0)
#define FAILURE (-1)
#define NUM_ENTRIES(a)    ((sizeof (a)) / (sizeof (a[0])))
#define DEBUG
/****************************************************************************** */
typedef struct nODE
{
    int data;
    struct nODE *next;
}NODE;
typedef struct bUCKET
{
    NODE *head;
    NODE *rear;
}BUCKET;
