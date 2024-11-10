// Write a program which displays addition of digits of element from singly linear linked list

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

int SumDigit(PPNODE Head)
{
    PNODE Temp = *Head;
    int iSum = 0, iNum = 0;

    while(Temp != NULL)
    {
        iNum = Temp->data;
        while(iNum != 0)
        {
            iSum = iSum + iNum % 10;
            iNum = iNum / 10;
        }
        Temp = Temp->next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);

    iRet = SumDigit(&First);
    printf("Sum of digits of elements in linked list is : %d", iRet);

    return 0;
}