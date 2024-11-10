class node
{
    public int data;
    public node next;
    public node prev; //

    public node(int no)
    {
        data = no;
        next = null;
        prev = null; //
    }
}

class DoublyLL
{
    private node First;
    private int Count;

    public DoublyLL()
    {
        First = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn; //
            First = newn;
        }
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            node temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp; //
        }
        Count++;
    }

    public void DleteFirst()
    {
        if(First == null)
        {
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
            First = First.next;
            First.prev = null; //
        }
        Count--;
    }

    public void DeleteLast()
    {
        if(First == null)
        {
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
            node temp = First;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        Count--;
    }

    public void Display()
    {
        node temp = First;

        System.out.println("Elements of the linked list are : ");

        System.out.print("null <=>");

        while(temp != null)
        {
            System.out.print("| "+ temp.data +" |<=> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return Count;
    }

    public void InsertAtPos(int no, int ipos)
    {
        if(ipos < 1 || ipos > Count + 1)
        {
            System.out.println("Invalid position");
            return;
        }

        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == Count+1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node(no);
            node temp = First;

            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn; //

            temp.next = newn;
            newn.prev = temp; //

            Count++;
        }
    }

    public void DeleteAtPos(int ipos)
    {
        if(ipos < 1 || ipos > Count)
        {
            System.out.println("Invalid position");
            return;
        }
        
        if(ipos == 1)
        {
            DleteFirst();
        }
        else if(ipos == Count+1)
        {
            DeleteLast();
        }
        else
        {
            node temp = First;

            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp; // 

            Count--;
        }
    }
}

class program407
{
    public static void main(String arg[])
    {
        int iRet = 0;
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertLast(61);
        obj.InsertLast(71);
        obj.InsertLast(81);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DleteFirst();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteLast();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertAtPos(105, 3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);        

    }
}