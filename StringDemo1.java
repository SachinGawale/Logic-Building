// Write a java program which accepts 2 strings from user & concat N characters of second string after first string. Value of N should be accepted from user.

import java.util.*;

class StringDemo1
{
    public static void StrCatx(String src, String dest, int iCnt)
    {
        String sRes = "";
        String sConcat = "";
        int i = 0;

        if(iCnt > dest.length())
        {
            sRes = src +  dest;
            System.out.println("Concatenated string is : " + sRes);
        }
        else
        {
            for(i = 0; i < iCnt; i++)
            {
                sConcat = sConcat + dest.charAt(i);
            }
            sRes = src + sConcat;
            System.out.println("Concatenated string is : " + sRes);
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter the second string : ");
        String str2 = sobj.nextLine();

        System.out.println("Enter the number upto which you want to concat the string : ");
        int iNum = sobj.nextInt();

        StrCatx(str1, str2, iNum);

        sobj.close();
    }
}