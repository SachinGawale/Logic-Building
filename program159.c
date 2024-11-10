#include<stdio.h>
#include<stdlib.h>

struct Node   // structure declaration
{
    int data;   // 4 bytes
    struct node *next;  // 8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    struct node *First = NULL;

    return 0;
}