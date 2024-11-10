#include<stio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

typedef Node NODE;
typedef Node* PNODE;
typedef Node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(Node));

    newn->data = No;        // initialisation
    newn->next = NULL;

    if(*Head == NULL)  // LL is empty
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
    // Temporary pointer for linkedlist traversal
    PNODE Temp = *Head;

    PNODE newn = (PNODE)malloc(sizeof(Node));

    newn->data = No;        // initialisation
    newn->next = NULL;

    if(*Head == NULL)  // LL is empty
    {
        *Head = newn;
    }
    else
    {
        // Travel the linked list till last node
        while(Temp->next != NULL)
        {
            Temp = Temp -> next;
        }
        // Add the address of new node at the end of last node
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
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
    else if ((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp -> next);
        Temp -> next = NULL;
    }
    
}

void Display(PNODE Head)
{
    printf("Contents of linked list : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    // Case1 : Invalid position (ex : 11 / -2 / 8)
    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid position\n");
        return;
    }
    // Case1 : First position   (ex : 1)
    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }
    // Case1 : Last position    (ex : 7)
    if(iPos == Size + 1)
    {
        InsertLast(Head, No);
    }
    // Case1 : Position is in between  First & Last
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }

}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targetednode = *Head;
    int i = 0;

    // Case1 : Invalid position (ex : 11 / -2 / 8)
    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid position\n");
        return;
    }
    // Case1 : First position   (ex : 1)
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    // Case1 : Last position    (ex : 6)
    if(iPos == Size)
    {
        DeleteLast(Head);
    }
    // Case1 : Position is in between  First & Last
    else
    {
         for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        targetednode = temp->next;

        temp->next = temp->next->next;
        free(targetednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertFirst(&First, 121);

    InsertAtPos(&First, 105, 5);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&First, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);



    return 0;
}
