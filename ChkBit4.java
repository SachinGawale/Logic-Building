// Write a java program whcih accept one number & two positions from user & check whether bit at first or bit at second position is ON or OFF

import java.util.*;

class ChkBit4
{
    public static void ChkBit(int iNo, int iPos1, int iPos2)
    {
        if (iPos1 < 1 || iPos1 > 32 || iPos2 < 1 || iPos2 > 32) 
        {
            System.out.println("Invalid positions...");
            return;
        }

        int iMask1 = 1 << (32 - iPos1);
        int iMask2 = 1 << (32 - iPos2);

        boolean bit1 = (iNo & iMask1) != 0;
        boolean bit2 = (iNo & iMask2) != 0;

        String result1 = bit1 ? "TRUE" : "FALSE";
        String result2 = bit2 ? "TRUE" : "FALSE";

        if(bit1)
        {
            System.out.println("Bit at position " + iPos1 + " is " + result1);
        }

        if(bit2) 
        {
            System.out.println("Bit at position " + iPos2 + " is " + result2);
        }

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iPosition1 = 0;
        int iPosition2 = 0;
       
        System.out.println("Enter the number : ");
        iNum = sobj.nextInt();

        System.out.println("Enter first position : ");
        iPosition1 = sobj.nextInt();

        System.out.println("Enter second position : ");
        iPosition2 = sobj.nextInt();

        ChkBit(iNum, iPosition1, iPosition2);
        
        sobj.close();
    }
}