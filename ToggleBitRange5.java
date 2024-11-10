// Write a java program which accept one number from user & range of positions from user. Toggle all bits from that range

import java.util.*;

class ToggleBitRange5
{
    public static int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        if (iStart < 1 || iStart > 32 || iEnd < 1 || iEnd > 32 || iStart > iEnd)
        {
            System.out.println("Invalid range...");
            return iNo;
        }

        int mask = ((1 << (iEnd - iStart + 1)) - 1) << (32 - iEnd);

        return iNo ^ mask;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iStartRange = 0, iEndRange = 0;
        int iRet = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        System.out.println("Enter starting range : ");
        iStartRange = sobj.nextInt();

        System.out.println("Enter ending range : ");
        iEndRange = sobj.nextInt();

        iRet = ToggleBitRange(iNum, iStartRange, iEndRange);
        System.out.println("Modified number is : "+iRet);
        
        sobj.close();
    }
}