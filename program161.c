#include<stdio.h>
#include<stdlib.h>

struct node   // structure declaration
{
    int data;   // 4 bytes
    struct node *next;  // 8 bytes
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // step1 : allocate memory
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); // new node is created dynamically using malloc

    // step2 : initialise the node
    newn->data = No;
    newn->next = NULL;

    //step3 : check wether ll is empty or not
    if(*Head == NULL)      // LL is empty
    {
        *Head = newn;
    }
    else  // LL contains 1 node in it
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != 0)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }

    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);

    printf("Number of nodes are: %d\n", iRet);

    return 0;
}