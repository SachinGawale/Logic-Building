// Write a program which returns addition of all even elements which from singly linear linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int AdditionEven(PNODE Head)
{
    int iSum = 0;
    
    while (Head != NULL)
    {
        if((Head->data) % 2 == 0)
        {
           iSum = iSum + (Head->data);
        }
        Head = Head->next;
    }
   return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    iRet = AdditionEven(First);
    printf("Addition of even elements in linked list is : %d", iRet);

    return 0;
}