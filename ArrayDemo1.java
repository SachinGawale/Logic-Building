// Write a java program which accept N numbers from user & return difference between summation of even & summation odd elements

import java.util.*;

class ArrayDemo1
{
    public static int Difference(int Arr[])
    {
        int i = 0, iEvenSum = 0, iOddSum = 0, iDiffrence = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iEvenSum = iEvenSum + Arr[i];
            }
            else
            {
                iOddSum = iOddSum + Arr[i];
            }
        }
        return iDiffrence = iEvenSum - iOddSum;
    }

    public static void main(String arg[])
    {
        int iSize = 0, i = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        int iArr[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements: ");
        for(i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        iRet = Difference(iArr);
        System.out.println("Diffrence is : "+iRet);

        sobj.close();
    }
}