// Write a program which accept matrix and reverse the contents of each row.

import java.util.*;

class Reverse
{
    void ReverseRow(int Arr[][], int iRow, int iCol)
    {
        System.out.println("Matrix before the reverse content : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("Matrix after the reverse content : ");

        int iTemp = 0;
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol / 2; j++)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i][iCol - 1 - j];
                Arr[i][iCol - 1 - j] = iTemp;
            }

            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}

class FourtySeven2
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
        robj.ReverseRow(Arr, iRows, iCols);
    }
}