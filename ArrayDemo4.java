// Write a java program which accept N numbers of from user & display all such elements which are divisible by 3 & 5

import java.util.*;

class ArrayDemo4
{
    public static void Display(int Arr[])
    {
        System.out.println("Elements which are divisible by 3 & 5 are : ");
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 3 == 0 && Arr[i] % 5 == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the the number of elements: ");
        int iSize = sobj.nextInt();

        int iArr[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements : ");
        for(int i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        Display(iArr);

        sobj.close();
    }
}