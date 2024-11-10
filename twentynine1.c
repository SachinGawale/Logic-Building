// Write a program which search first occurence of particular element from singly linear linked list. Function should return position at which element is found

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

int SearchFirstOcc(PPNODE Head, int no)
{
    PNODE Temp = *Head;
    int iPos = 0;

    while (Temp != NULL)
    {
        if(Temp->data == no)
        {
           return iPos;
        }
        Temp = Temp->next;
        iPos++;
    }
    return -1;
}

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 70);

    printf("Enter a element to search : ");
    scanf("%d", &iValue);

    iRet = SearchFirstOcc(&First, iValue);

    if(iRet != -1)
    {
        printf("Position of element is found at : %d", iRet);
    }
    else
    {
        printf("Position of element is not found..");
    }

    return 0;
}