// Write a java program whcih accept one number from user & count number of ON bits in it without using % & / operator

import java.util.*;

class CountOnee1
{
    public static int CountOne(int iNo)
    {
        int iCount = 0;

        while (iNo != 0) 
        {            
            iCount = iCount + (iNo & 1);

            iNo >>= 1;
        }

        return iCount;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iRet = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        iRet = CountOne(iNum);
        System.out.println("Number of on bits are : "+iRet);
        
        sobj.close();
    }
}