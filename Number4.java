// Write a java program which accept N numbers from user & accept range, Display all elements from that range

import java.util.*;

class Number4
{
    public static void Display(int Arr[], int iStart, int iEnd)
    {
        int i = 0;

        System.out.println("Numbers in the range are : ");
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] > iStart && Arr[i] < iEnd)
            {
                System.out.println(Arr[i]);
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum1 = 0, iNum2 = 0, iSize = 0, i = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int iArray[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements");
        for(i = 0; i < iSize; i++)
        {
            iArray[i] = sobj.nextInt();
        }

        System.out.println("Enter the start of the range : ");
        iNum1 = sobj.nextInt();

        System.out.println("Enter the end of the range : ");
        iNum2 = sobj.nextInt();

        Display(iArray, iNum1, iNum2);

        sobj.close();
    }
}

