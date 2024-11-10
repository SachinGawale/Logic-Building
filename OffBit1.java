// Write a program which accept one number from user & off 7th bit of that number if it is on. Return modified number

import java.util.*;

class OffBit1
{
    public static int OffBit(int iNo)
    {
        int iMask = 0x00000040;

        int iResult = iNo & ~iMask;

        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNum = 0, iModifiedNum = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        iModifiedNum = OffBit(iNum);
    
        System.out.println("Modified number after turning off the 7th bit: " + iModifiedNum);

        sobj.close();
    }
}