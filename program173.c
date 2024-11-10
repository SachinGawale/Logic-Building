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


void Enqueue(PPNODE Head, int no) // insertlast
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *Head;

    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL)
    {
        // If the queue is empty
        *Head = newn;
    }
    else
    {
        // Traverse the queue to find the last node
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }

        // Add the new node to the end of the queue
        Temp->next = newn;
    }
}

int Dequeue(PPNODE Head)  // deletefirst
{
    int value = 0;
    PNODE Temp = *Head;

    if(*Head == NULL)
    {
        printf("QUEUE IS EMPTY..\n");
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
    printf("Elements of queue are : \n");

    while (Head != NULL)
    {
        printf("| %d  |\t", Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
     
    Enqueue(&First, 11);
    Enqueue(&First, 21);
    Enqueue(&First, 51);
    Enqueue(&First, 101);
    Enqueue(&First, 111);

    Display(First);

    iRet = Dequeue(&First);
    printf("removed element is : %d\n", iRet);

    iRet = Dequeue(&First);
    printf("removed element is : %d\n", iRet);

    return 0;
}