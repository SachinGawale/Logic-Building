// Write a java program which checks whether 5th & 18th bit is ON or OFF.

import java.util.*;

class ChkBit2
{
    public static boolean CheckBit(int iNo)
    {
        int iMask5 = 0x00000020;
        int iResult5 = iNo & iMask5;

        int iMask18 = 0x00020000;
        int iResult18 = iNo & iMask18;

        if((iResult5 != 0) && (iResult18 != 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
    
        if(bRet == true)
        {
            System.out.println("5th & 18th bit is ON");
        }
        else
        {
            System.out.println("5th & 18th bit is OFF");
        }
    }
}