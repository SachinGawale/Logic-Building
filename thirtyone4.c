// Write a program which display smallest digits of all element from singly linear linked list.

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

int SmallestDigit(int num)
{
    int iSmallest = 9, iDigit = 0;

    while (num != 0)
    {
        iDigit = num % 10;

        if (iDigit < iSmallest)
        {
            iSmallest = iDigit;
        }

        num = num / 10;
    }

    return iSmallest;
}

void DisplaySmall(PNODE Head)
{
    PNODE Temp = Head;

    printf("Smallest digit for each element in the linked list is: ");

    while (Temp != NULL)
    {
        int smallest = SmallestDigit(Temp->data);
        printf("%d ", smallest);

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
    InsertFirst(&First, 415);

    DisplaySmall(First);
    return 0;
}