#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))         // LL is empty
    {
        return;
    }
    else if(*Head == *Tail)       // LL contains single node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else         // LL contains more than one node
    {

        *Head = (*Head)->next;
        free((*Tail)->next);        // free((*Head)->next)
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}
void DeletetLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))         // LL is empty
    {
        return;
    }
    else if(*Head == *Tail)       // LL contains single node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else         // LL contains more than one node
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);        // free((*Head)->prev)
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d | <=>", Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if (Head != NULL && Tail != NULL)
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int Size = Count(*Head, *Tail);
    int i = 0;

    PNODE newn = NULL;
    PNODE Temp = *Head;

    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head, Tail, no);
    }
    else if(iPos == Size+1)
    {
        InsertLast(Head, Tail, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }

        newn->next = Temp->next;
        Temp->next->prev = newn;
        Temp->next = newn;
        newn->prev = Temp;
    }

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int Size = Count(*Head, *Tail);
    int i = 0;

    PNODE Temp = *Head;

    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(iPos == Size)
    {
        DeletetLast(Head, Tail);
    }
    else
    {
        for(i = 1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }

        Temp->next = Temp->next->next;
        free(Temp->next->prev);
        Temp->next->prev = Temp;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("\nNumber of nodes in Linked list are : %d\n\n", iRet);


    InsertAtPos(&First, &Last, 105, 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("\nNumber of nodes in Linked list are : %d\n\n", iRet);

    DeleteAtPos(&First, &Last, 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("\nNumber of nodes in Linked list are : %d\n\n", iRet);


    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("\nNumber of nodes in Linked list are : %d\n\n", iRet);

    DeletetLast(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("\nNumber of nodes in Linked list are : %d\n\n", iRet);


    return 0;
}