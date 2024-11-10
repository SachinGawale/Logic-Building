#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

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

void InsertLast(PPNODE Head, int no)
{
    PNODE temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
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
    PNODE temp = *Head;

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
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

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
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int size = Count(*Head);
    int i = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    if(ipos < 1 || ipos >size+1)
    {
        printf("Invalid position");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(ipos == size+1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for (i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int size = Count(*Head);
    int i = 0;
    PNODE temp = *Head;
    PNODE targatednode = NULL;

    if(ipos < 1 || ipos >size)
    {
        printf("Invalid position");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        for (i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        targatednode = temp->next;

        temp->next = temp->next->next;
        free(targatednode);
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 55);
    InsertFirst(&first, 45);
    InsertFirst(&first, 35);
    InsertFirst(&first, 25);
    InsertFirst(&first, 15);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);    

    InsertLast(&first, 999);
    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);    

    DeleteFirst(&first);
    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);    

    DeleteLast(&first);
    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);    

    InsertAtPos(&first, 888, 2);
    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);    

    DeleteAtPos(&first, 4);
    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);    

    return 0;
}
