#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int Count;

    public:
        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no, int ipos);
        void DeleteAtPos(int ipos);
};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructor\n";
    first = NULL;
    Count = 0;
}

void SinglyLL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    Count++;
}

void SinglyLL::InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    PNODE temp = first;

    newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    Count++;
}

void SinglyLL::Display()
{
    PNODE temp = first;

    cout<<"Elements of the linked list are: \n";

    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }
    cout<<"NULL \n";
}

int SinglyLL::CountNode()
{
    return Count;
}

void SinglyLL::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;

        first = first->next;
        delete temp;
    }
    Count--;
}

void SinglyLL::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}

void SinglyLL::InsertAtPos(int no, int ipos)
{
    if((ipos < 1) || (ipos > Count+1))
    {
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == count+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        PNODE temp = first;
        int i = 0;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        Count++;
    }
}

void SinglyLL::DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > Count))
    {
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(no);
    }
    else if(ipos == count)
    {
        DeleteLast(no);
    }
    else
    {
        PNODE temp = first;
        int i = 0;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }

        PNODE targatednode = temp->next;
        temp->next = temp->next->next;
        delete targatednode;

        Count--;
    }
}

int main()
{
    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertFirst(111);
    obj.InsertFirst(121);

    obj.InsertLast(131);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();

    cout<<"Number of elements in the linked list are : "<<obj.CountNode()<<"\n";

    obj.InsertAtPos(105, 5);
    obj.Display();

    cout<<"Number of elements in the linked list are : "<<obj.CountNode()<<"\n";

    obj.DeleteAtPos(5);
    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    cout<<"Number of elements in the linked list are : "<<obj.CountNode()<<"\n";

    return 0;
}