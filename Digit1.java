// Write a java program which accept number from user & return the count of even digits

import java.util.*;

class Digit1
{
    public static int CountEven(int iNo)
    {
        int iCount = 0, iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iNum = sobj.nextInt();

        int iRet = CountEven(iNum);

        System.out.println("Number of even digits in a number: "+iRet);

        sobj.close();
    }
}
