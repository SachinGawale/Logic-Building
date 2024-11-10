// Write a program which displays all elements which are perfect from singly linear linked list

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

int Perfect(int num)
{
    int iSum = 0, i = 0;

    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum == num;
}

void DisplayPerfect(PPNODE Head)
{
    PNODE Temp = *Head;
    
    printf("Perfect numbers are : ");
    
    while (Temp != NULL)
    {
        if(Perfect(Temp->data))
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
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);

    DisplayPerfect(&First);  

    return 0;
}