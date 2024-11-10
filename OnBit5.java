// Write a program which accept one number from user & on its first 4 bits. Return modified number

import java.util.*;

class OnBit5
{
    public static int OnBit(int iNo)
    {
        int iMask = 0x0000000F;

        int iResult = iNo | iMask;

        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNum = 0, iModifiedNum = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        iModifiedNum = OnBit(iNum);
    
        System.out.println("Modified number is : " + iModifiedNum);

        sobj.close();
    }
}