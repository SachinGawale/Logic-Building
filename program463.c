#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(no == temp->data)
            {
                printf("Unable to insert as data is already present\n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp ->rchild;
            }
            else if(no < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp ->lchild;
            }
        }
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n", Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\n", Head->data);
        Inorder(Head->lchild);
        Inorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        Inorder(Head->rchild);
        printf("%d\n", Head->data);
    }
}

bool Search(PNODE Head, int no)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return false;
    }

    while(Head != NULL)
    {
        if(no == Head->data)
        {
            flag = true;
            break;
        }
        else if(no > Head->data)
        {
            Head = Head->rchild;
        }
        else if(no < Head->data)
        {
            Head = Head->lchild;
        }
    }   
}

int Count(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int CountLeaf(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if(Head != NULL)
        {
            if((Head->lchild == NULL) && (Head->rchild == NULL))
            {
                iCnt++;
            }
        }
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int CountParent(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if(Head != NULL)
        {
            if((Head->lchild != NULL) || (Head->rchild != NULL))
            {
                iCnt++;
            }
        }
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int Sum(PNODE Head)
{
    static int iCnt = 0, iSum = 0;

    if(Head != NULL)
    {
        iSum = iSum + 
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int CountEven(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if(Head != NULL)
        {
            if((Head->data % 2) == 0)
            {
                iCnt++;
            }
        }
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int CountOdd(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if(Head != NULL)
        {
            if((Head->data % 2) != 0)
            {
                iCnt++;
            }
        }
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int main()
{
    PNODE first = NULL;
    int iValue = 0;
    bool bRet = false;
    int iRet = 0;

    Insert(&first, 21);
    Insert(&first, 11);
    Insert(&first, 17);
    Insert(&first, 45);
    Insert(&first, 10);
    Insert(&first, 78);
    Insert(&first, 30);
    Insert(&first, 5);

    Inorder(first);

    printf("Enter the data that you want to search : ");
    scanf("%d", &iValue);

    bRet = Search(first, iValue);
    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    iRet = CountParent(first);

    printf("Number of parent nodes are : %d\n", iRet);

    return 0;
}