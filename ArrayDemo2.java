// Write a java program which accept n numbers from user & display all such elements which are divisible by 5.

import java.util.*;

class ArrayDemo2
{
    public static void Displayy(int Arr[])
    {
        int i = 0;

        System.out.println("Elements which are divisible by 5 are : ");
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] % 5) == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }

    public static void main(String arg[])
    {
        int iSize = 0, i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        int iArr[] = new int [iSize];

        System.out.println("Enter the "+iSize+" elements : ");
        for(i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        Displayy(iArr);

        sobj.close();
    }
}