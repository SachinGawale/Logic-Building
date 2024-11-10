// Write a java program which accept N numbers from user & display all such elements which are multiples of 11

import java.util.*;

class ArrayDemo5
{
    public static void Display(int Arr[])
    {
        System.out.println("Elements which are multiple of 11 are : ");
        for(int i = 0; i < Arr.length; i++)  
        {
            if(Arr[i] % 11 == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        int iArr[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements");
        for(int i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        Display(iArr);

        sobj.close();
    }
}