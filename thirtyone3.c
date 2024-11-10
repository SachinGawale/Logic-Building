// Write a program which display product of all digits of all element from singly linear linked list. Dont consider 0.

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

int Product(int num)
{
    int iProduct = 1, iDigit = 0;

    while (num != 0)
    {
        iDigit = num % 10;

        if(iDigit != 0)
        {
            iProduct = iProduct * iDigit;
        }
        num = num / 10;
    }
    return iProduct;
}

void DisplayProduct(PNODE Head)
{
    PNODE Temp = Head;

    printf("Product of digits for each element in the linked list are : ");

    while (Temp != NULL)
    {
        int product = Product(Temp->data);
        printf("%d ", product);

        Temp = Temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    DisplayProduct(First);
    return 0;
}