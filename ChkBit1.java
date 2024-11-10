// Write a java program which accept one number & position from user & check wether bit at that position is on or off. If bit is one return TRUE 
// otherwise return FALSE

import java.util.*;

class ChkBit1
{
    public static boolean ChkBit(int iNo, int iPos)
    {
        if (iPos < 1 || iPos > 32) 
        {
            System.out.println("Invalid position...");
            return false;
        }

        int iMask = 1 << (iPos - 1);

        return (iNo & iMask) != 0;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iPosition = 0;
        boolean bRet = false;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        System.out.println("Enter position : ");
        iPosition = sobj.nextInt();

        bRet = ChkBit(iNum, iPosition);

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