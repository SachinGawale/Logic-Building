#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
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

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
    Temp->next = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while (Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE Temp = *Head;

    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }
    else if(iPos == Size+1)
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE Temp = *Head;
    PNODE Targatednode = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(i = 1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }
        Targatednode = Temp->next;
        Temp->next = Temp->next->next;
        
        free(Targatednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 105);
    InsertFirst(&First, 999);
    InsertFirst(&First, 201);
    InsertFirst(&First, 312);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&First, 1000);
    InsertLast(&First, 2000);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&First, 255, 3);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&First, 4);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}