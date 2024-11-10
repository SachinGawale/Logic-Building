// Write a program which displays largest digits of all element from singly linear linked list

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

int LargestDigit(int num)
{
    int iLarge = 0, iDigit = 0;

    while (num != 0)
    {
        iDigit = num % 10;

        if(iDigit > iLarge)
        {
            iLarge = iDigit;
        }
        num = num / 10;
    }
    return iLarge;
}

void DisplayLarge(PNODE Head)
{
    PNODE Temp = Head;
    int iLargest = 0;

    printf("Largest digit for each element in the linked list is: ");

    while (Temp != NULL)
    {
        iLargest = LargestDigit(Temp->data);
        printf("%d ", iLargest);

        Temp = Temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 250);
    InsertFirst(&First, 532);
    InsertFirst(&First, 419);

    DisplayLarge(First);
    return 0;
}