// Write a program which accept number from user & return multiplication of all digits

import java.util.*;

class Digit4
{
    public static int iMultiply(int iNo)
    {
        int iMult = 1, iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 0)
            {
                iDigit = 1;
            }
            
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int iNum = sobj.nextInt();

        int iRet = iMultiply(iNum);
        System.out.println("Multplication of all digits in a given number is : "+iRet);

        sobj.close();
    }
}