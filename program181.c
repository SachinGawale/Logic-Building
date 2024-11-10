// Singly linear linked list

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

    if (*Head == NULL)
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

    if (*Head == NULL)
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
    printf("Elements of linked list are: \n");

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

    if(*Head == NULL)   // when ll is empty
    {
        return;
    }
    else if((*Head)->next == NULL)  // ll has one node
    {
        free(*Head);
        *Head = NULL;
    }
    else    // when ll has more than one node
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   // when ll is empty
    {
        return;
    }
    else if((*Head)->next == NULL)  // ll has one node
    {
        free(*Head);
        *Head = NULL;
    }
    else    // when ll has more than one node
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 51);
    InsertFirst(&first, 41);
    InsertFirst(&first, 31);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in a linked list are : %d\n\n", iRet);

    InsertLast(&first, 61);
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

    return 0;
}
