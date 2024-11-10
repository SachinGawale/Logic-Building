// Accept string from user & check whether the string is palindrome or not without considering its case

import java.util.*;

class StringDemo5
{
    public static boolean StrPalindrome(String str)
    {
        int i = 0;
        String rev = "";

        for(i = str.length() - 1; i >= 0; i--)
        {
            rev = rev + str.charAt(i);
        }
        return str.equalsIgnoreCase(rev);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        boolean orgStr = StrPalindrome(str);

        if(orgStr)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}