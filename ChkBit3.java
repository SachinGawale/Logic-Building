// Write a java program which accept one number from user & check whether 9th or 12th bit is on or off.

import java.util.*;

class ChkBit3
{
    public static boolean ChkBit(int iNo)
    {
        int iPos = 9;

        if (iPos < 1 || iPos > 32) 
        {
            System.out.println("Invalid position...");
            return false;
        }

        int iMask = 1 << (32 - 1);

        return (iNo & iMask) != 0;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        boolean bRet = false;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        bRet = ChkBit(iNum);

        if(bRet)
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