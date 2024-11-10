// Write a java program which accept N numbers from user & return product of all odd elements

import java.util.*;

class Number5
{
    public static int Product(int Arr[])
    {
        int i = 0, iMult = 1;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 != 0)
            {
                iMult = iMult * Arr[i];
            }
        }
        return iMult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        int iArr[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements");
        for(int  i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        int iRet = Product(iArr);
        System.out.println("Product of all the elements is : "+ iRet);

        sobj.close();
    }
}