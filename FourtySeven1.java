// Write a program which accept matrix from user & display transpose of the matrix.

import java.util.*;

class Matrix
{
    void Transpose(int Arr[][], int iRow, int iCol)
    {
        int iTemp = 0;

        System.out.println("Before transpose : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("After transpose : ");

        for(int j = 0; j < iCol; j++)
        {
            for(int i = 0; i < iCol; i++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}

class FourtySeven1
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

        Matrix mobj = new Matrix();
        mobj.Transpose(Arr, iRows, iCols);
    }
}