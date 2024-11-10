// Write a program which return second maximum element from singly linear linked list

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

int SecMaximum(PPNODE Head)
{
    PNODE Temp = *Head;
    int iMax1 = 0;
    int iMax2 = 0;
    
    while (Temp != NULL)
    {
        if(Temp->data > iMax1)
        {
           iMax2 = iMax1;
           iMax1 = Temp->data;
        }
        else if(Temp->data > iMax2 && Temp->data < iMax1)
        {
            iMax2 = Temp->data;
        }
        Temp = Temp->next;
    }
    return iMax2;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    iRet = SecMaximum(&First);
    printf("second maximum element in linked list is : %d", iRet);

    return 0;
}