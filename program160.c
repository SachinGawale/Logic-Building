#include<stdio.h>
#include<stdlib.h>

struct Node   // structure declaration
{
    int data;   // 4 bytes
    struct node *next;  // 8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // step1 : allocate memory
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    // step2 : initialise the node
    newn->data = No;
    newn->next = NULL;
    //step3 : check wether ll is empty or not
    if(*Head == NULL)      // LL is empty
    {
        *Head == newn;
    }
    else  // LL contains 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    return 0;
}