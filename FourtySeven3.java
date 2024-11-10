// Write a program which accept matrix & reverse the content of each column.

import java.util.*;

class Reverse
{
    void ReverseColumn(int Arr[][], int iRow, int iCol)
    {
        System.out.println("Matrix before reverse the content : ");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
        
        System.out.println("Matrix after reverse the content : ");

        int iTemp = 0;
        for(int j = 0; j < iCol; j++)
        {
            for(int i = 0; i < iRow / 2; i++)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[iRow - 1 - i][j];
                Arr[iRow - 1 - i][j] = iTemp;
            }

            for(int i = 0; i < iRow; i++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}

class FourtySeven3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRows = 0, iCols = 0;

        System.out.println("Enter the number of rows : ");
        iRows = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iCols = sobj.nextInt();

        int Arr[][] = new int[iRows][iCols];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        Reverse robj = new Reverse();
        robj.ReverseColumn(Arr, iRows, iCols);
    }
}