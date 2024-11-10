// Write a java program which accept N numbers from user & accept one another number as NO, return index of last occurence of that NO.

import java.util.*;

class Number3
{
    public static int LastOcc(int Arr[], int iNo)
    {
        int i = 0;

        for(i = Arr.length - 1; i >= 0 ; i--)
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

        int iSize = 0, i = 0, iNum = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int iArray[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements");
        for(i = 0; i < iSize; i++)
        {
            iArray[i] = sobj.nextInt();
        }

        System.out.println("Enter the number to search its occurence : ");
        iNum = sobj.nextInt();

        iRet = LastOcc(iArray, iNum);

        if(iRet != -1)
        {
            System.out.println("Occurence of given number is : "+iRet);
        }
        else
        {
            System.out.println("Ocurrence of given number is not found");
        }

        sobj.close();
    }
}