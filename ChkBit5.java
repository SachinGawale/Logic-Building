// Write a java program whcih checks whether first & last bit is on or off. First bit means bit number 1 & last bit means bit number 32

import java.util.*;

class ChkBit5
{
    public static boolean CheckBit(int iNo)
    {
        int iMask1 = 0x00000001;
        int iResult1 = iNo & iMask1;

        
        int iMask32 = 0x80000000;
        int iResult32 = iNo & iMask32;

        if((iResult1 != 0) && (iResult32 != 0))
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
            System.out.println("7th, 8th, and 9th bits are ON");
        }
        else
        {
            System.out.println("7th, 8th, and 9th bits are OFF");
        }
    }
}