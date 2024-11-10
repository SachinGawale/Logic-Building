// Write a program which return largest element from singly linear linked list

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

int Maximum(PPNODE Head)
{
    PNODE Temp = *Head;
    int iMax = 0;

    iMax = Temp->data;
    Temp = Temp->next;

    while(Temp != NULL)
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    iRet = Maximum(&First);

    printf("Largest element in the linked list is : %d", iRet);    

    return 0;
}