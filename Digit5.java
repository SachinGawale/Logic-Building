// Write a program which accept number from user & return difference between summation of even digits & summation of odd digits

import java.util.*;

class Digit5
{
    public static int CountDiff(int iNo)
    {
        int iEven = 0, iOdd = 0, iDigit = 0, iDiff = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iEven = iEven + iDigit;
            }
            if(iDigit % 2 != 0)
            {
                iOdd = iOdd + iDigit;
            }
            iNo = iNo / 10;
        }
        return iDiff = iEven - iOdd;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iNum = sobj.nextInt();

        int iRet = CountDiff(iNum);
        System.out.println("Output is : "+iRet);

        sobj.close();
    }
}