// Write java program which accept N numbers from user & display all such elements which are even and divisible by 5

import java.util.*;

class ArrayDemo3
{
    public static void Difference(int Arr[])
    {
        int i = 0;

        System.out.println("Elements which are even & divisible by 5 are : ");
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 == 0 && Arr[i] % 5 == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int iArr[]  = new int[iSize];

        System.out.println("Enter the "+iSize+" elements : ");
        for(i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        Difference(iArr);

        sobj.close();
    }
}