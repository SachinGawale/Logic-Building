// Write a java program which accept N numbers from user & accept one another number as NO, check wether NO is present or not

import java.util.*;

class Number1
{
    public static boolean Check(int Arr[], int iNo)
    {
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(iNo == Arr[i])
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int i = 0, iSize =0, iNum = 0;
        boolean bRet = false; 

        System.out.println("Enter a number of elements : ");
        iSize = sobj.nextInt();

        int iArr[] = new int[iSize];

        System.out.println("Enter the "+iSize+" elements : ");
        for(i = 0; i < iSize; i++)
        {
            iArr[i] = sobj.nextInt();
        }

        System.out.println("Enter the number : ");
        iNum = sobj.nextInt();

        bRet = Check(iArr, iNum);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}