// Write a program which displays all elements which are prime from singly linear linked list

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

int Prime(int num)
{
    int iSum = 0, i = 0;

    if(num <= 1)
    {
        return 0;
    }
    for(i = 2; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void DisplayPrime(PPNODE Head)
{
    PNODE Temp = *Head;
    
    printf("Prime numbers are : ");
    
    while (Temp != NULL)
    {
        if(Prime(Temp->data))
        {
           printf("%d ", Temp->data);
        }
        Temp = Temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 22);
    InsertFirst(&First, 89);

    DisplayPrime(&First);  

    return 0;
}