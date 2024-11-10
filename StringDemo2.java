// Write a program which accepts 2 strings from user & check wether contents of two strings are equal or not

import java.util.*;

class StringDemo2
{
    public static boolean StrCmpx(String src, String dest)
    {
        int i = 0;

        for(i = 0; i < src.length(); i++)
        {
            if(src.charAt(i) == dest.charAt(i))
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter the second string : ");
        String str2 = sobj.nextLine();

        boolean bRet = StrCmpx(str1, str2);

        if(bRet == true)
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