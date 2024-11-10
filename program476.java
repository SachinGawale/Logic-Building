import java.util.*;

class program476
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        StringBuffer sboj = new StringBuffer(str);

        sboj = sboj.reverse();

        System.out.println("Updated string is : "+sobj);
    }
}