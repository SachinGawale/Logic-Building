// Write a program which accept number from user & return the count of odd digits

import java.util.*;

class Digit2
{
    public static int CountOdd(int iNo)
    {
        int Count = 0, iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 != 0)
            {
                Count++;
            }
            iNo = iNo / 10;
        }
        return Count;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iNum = sobj.nextInt();

        int iRet = CountOdd(iNum);

        System.out.println("Frequency of odd numbers in a number is : "+iRet);

        sobj.close();
    }
}