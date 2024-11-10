// Write a program which display all palindrome elements of singly linked list

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

int Palindrome(int num)
{
    int iOriginalNum = num;
    int iReverse = 0;

    while (num != 0)
    {
        iReverse = iReverse * 10 + num % 10;
        num = num / 10;
    }
    return (iOriginalNum == iReverse);
}

void DisplayPalindrome(PNODE Head)
{
    PNODE Temp = Head;

    printf("Palindrom elements in the linked list are : ");

    while (Temp != NULL)
    {
        if(Palindrome(Temp->data))
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
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 414);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);

    DisplayPalindrome(First);
    return 0;
}