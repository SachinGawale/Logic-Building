import java.util.*;

class program468
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim(); // 1
        
        str = str.replaceAll("\\s","");

        System.out.println("Updated string is : "+str);
    }
}