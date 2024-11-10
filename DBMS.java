// Customized database management system

class node
{
    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    node next;

    public node(int A, int B, int C, int D)
    {
        Rno = A;
        Name = B;
        City = C;
        Marks = D;
        next = null;
    }
}

class database
{
    private node first;

    public database()
    {
        first = null;
        system.out.println("DBMS initialised succesfully...");
        system.out.println("Student table gets created succesfully...");
    }

    public void InsertIntoTable(int Rno, String Name, String City, int Marks)
    {
        node newn = new node(Rno, Name, City, Marks);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;

            system.out.println("One record gets inserted succesfully...");
        }
    }

    public void SelectStarFrom()
    {
        system.out.println("Data from student table is : ");

        node temp = first;

        system.out.prinln("------------------------------------------------------------------------------------------");
        while(temp != null)
        {
            system.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        system.out.println("----------------------------------------------------------------------------------------");
    }
}

class DBMS
{
    public static void main(String arg[])
    {
        database obj = new database();

        obj.InsertIntoTable(1, "Amit", "Pune", 89);
        obj.InsertIntoTable(2, "Pooja", "Mumbai", 95);
        obj.InsertIntoTable(3, "Rahul", "Satara", 80);
        obj.InsertIntoTable(4, "Neha", "Pune", 78);

        obj.SelectStarFrom();
    }
}