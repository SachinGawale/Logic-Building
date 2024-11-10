// Write a program which reverse each elements of singly linked list

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

int ReverseNum(int num)
{
    int iRev = 0;

    while (num != 0)
    {
        iRev = iRev * 10 + num % 10;
        num = num / 10;
    }
    return iRev;
}

void Reverse(PPNODE Head)
{
    PNODE Temp = *Head;

    while (Temp != NULL)
    {
        Temp->data = ReverseNum(Temp->data);
        Temp = Temp->next;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d ", Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 98);

    printf("Original linked list : ");
    Display(First);

    Reverse(&First);

    printf("Reversed linked list is : ");
    Display(First);

    return 0;
}