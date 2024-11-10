// Accept string from user and reverse the content of that string by toggling the case

import java.util.*;

class StringDemo4
{
    public static void StrRevTog(String str)
    {
        int i = 0;
        String revStr = "";

        for (i = str.length() - 1; i >= 0; i--)
        {
            if ((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                revStr = revStr + (char)(str.charAt(i) + ('a' - 'A'));
            }
            else if ((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
            {
                revStr = revStr + (char)(str.charAt(i) - ('a' - 'A'));
            }
            else
            {
                revStr = revStr + str.charAt(i);
            }
        }
        System.out.println("Reversed and Toggled Case String is : " + revStr);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String strng = sobj.nextLine();

        StrRevTog(strng);

        sobj.close();
    }
}
