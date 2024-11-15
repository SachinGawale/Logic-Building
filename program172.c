// Stack

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// void insertfirst(ppnode head, int no)
void Push(PPNODE Head, int no)
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
// void DeleteFirst(ppnode head)
int Pop(PPNODE Head)
{
    int value = 0;
    PNODE Temp = *Head;

    if(*Head == NULL)
    {
        printf("STACK IS EMPTY..\n");
        return value;
    }
    else
    {
        value = (*Head)->data;
        *Head = (*Head)->next;
        free(Temp);
    }
    return value;
}

void Display(PNODE Head)
{
    printf("Elements of stack are : \n");

    while (Head != NULL)
    {
        printf("| %d  |\n", Head->data);
        Head = Head->next;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
     
    Push(&First, 101);
    Push(&First, 51);
    Push(&First, 21);
    Push(&First, 11);

    Display(First);

    iRet = Pop(&First);
    printf("Popped element is : %d\n", iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n", iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n", iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n", iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n", iRet);

    return 0;
}