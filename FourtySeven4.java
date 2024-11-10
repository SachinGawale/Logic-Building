// Write a program which accept matrix & check whether the matrix is identity matrix or not.

/*  Identity matrix is a sqaure matrix with 1's along the diagonal from upper left to lower right & 0's in all positions.
    If it satisfies the structure as explained before then the matrix is called as identity matrix. 

    input : 1   0   0   0
            0   1   0   0
            0   0   1   0
            0   0   0   1
*/

import java.util.*;

class Matrix
{
    boolean ChkIdentity(int Arr[][], int iRow, int iCol)
    {
        if(iRow != iCol)
        {
            return false;
        }

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if((i == j && Arr[i][j] != 1) || (i != j && Arr[i][j] != 0))
                {
                    return false;
                }
            }
        }
        return true;
    }
}

class FourtySeven4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRows = 0, iCols = 0;
        boolean bRet = false;

        System.out.println("Enter the number of rows : ");
        iRows = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iCols = sobj.nextInt();

        int Arr[][] = new int [iRows][iCols];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        Matrix mobj = new Matrix();
        bRet = mobj.ChkIdentity(Arr, iRows, iCols);

        if(bRet)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}