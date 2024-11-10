// Write a java program which accept N numbers from user & accept one another number as NO, return index of first occurence of that NO.

import java.util.*;

class Number2
{
    public static int FirstOcc(int Arr[], int iNo)
    {
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(iNo == Arr[i])
            {
                return i;
            }
        }
        return -1;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0, iSize = 0, iNum = 0, iRet = 0;

        System.out.println("Enter a number of elements : ");
        iSize = sobj.nextInt();

        int Array[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements : ");
        for(i = 0; i < iSize; i++)
        {
            Array[i] = sobj.nextInt();
        }

        System.out.println("Enter the element to search its frequency : ");
        iNum = sobj.nextInt();

        iRet = FirstOcc(Array, iNum);
        if(iRet != -1)
        {
            System.out.println("Ocuurence of given number is : "+iRet);
        }
        else
        {
            System.out.println("Given element is not found..");
        }

        sobj.close();
    }
}