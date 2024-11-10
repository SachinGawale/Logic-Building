// Write a program which accept number from user & return the count of digits in between 3 & 7

import java.util.*;

class Digit3
{
    public static int CountRange(int iNo)
    {
        int Count = 0, iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit > 3) && (iDigit < 7))
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

        System.out.println("Enter the number : ");
        int iNum = sobj.nextInt();

        int iRet = CountRange(iNum);
        System.out.println("Range is : "+iRet);

        sobj.close();
    }
}