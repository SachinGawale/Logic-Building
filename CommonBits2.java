// Write a java program whcih accept two numbers from user & display position of common ON bits from that two numbers

import java.util.*;

class CommonBits2
{
    public static void CommonBits(int iNo1, int iNo2)
    {
        int iCommonBits = 0, iPosition = 1;
        
        iCommonBits = iNo1 & iNo2;

        if (iCommonBits == 0) 
        {
            System.out.println("There are no common ON bits.");
            return;
        }

        System.out.print("Common ON bits are at positions: ");

        while (iCommonBits > 0) 
        {
            if ((iCommonBits & 1) == 1) 
            {
                System.out.print(iPosition + " ");
            }

            iCommonBits >>= 1;
            iPosition++;
        }
        System.out.println();
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum1 = 0;
        int iNum2 = 0;
       
        System.out.println("Enter first number : ");
        iNum1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNum2 = sobj.nextInt();

        CommonBits(iNum1, iNum2);
        
        sobj.close();
    }
}