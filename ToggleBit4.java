// Write a java program which accept one number & position from user & toggle that bit. Return modified number.

import java.util.*;

class ToggleBit4
{
    public static int ToggleBit(int iNo, int iPos)
    {
        if (iPos < 1 || iPos > 32) 
        {
            System.out.println("Invalid position...");
            return iNo;
        }

        int iMask = 1 << (iPos - 1);

        return iNo ^ iMask;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iPosition = 0;
        int iRet = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        System.out.println("Enter position : ");
        iPosition = sobj.nextInt();

        iRet = ToggleBit(iNum, iPosition);
        System.out.println("Modified number is : "+iRet);
        
        sobj.close();
    }
}