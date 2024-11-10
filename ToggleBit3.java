// Write a java program which accept one number from user & toggle 7th bit of that number. Return modified number.

import java.util.*;

class ToggleBit3
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0x00000040;

        int iResult = iNo ^ iMask;

        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNum = 0, iModifiedNum = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        iModifiedNum = ToggleBit(iNum);
    
        System.out.println("Modified number after toggled the 7th bit: " + iModifiedNum);

        sobj.close();
    }
}