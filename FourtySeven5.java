/*  Write a pogram which accept matrix & check wether the matrix is sparse matrix or not
    sparse matrix is a matrix with the majority of its elements equal to zero.

    input : 1   0   3   0
            0   6   0   0
            0   0   1   0   
            9   0   0   9
 */

 import java.util.*;

 class Sparse
 {
    boolean ChkSparse(int Arr[][], int iRow, int iCol)
    {
        int Count = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                {
                    Count++;
                }
            }
        }

        return Count;
    }
 }

 class FourtySeven5
 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRows = 0, iCols = 0;
        boolean bRet = false;

        System.out.println("Enter the number of rows : ");
        iRows = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iCols = sobj.nextInt();

        int Arr[][] = new int[iRows][iCols];

        System.out.println("Enter the number of elements : ");
        for(int i = 0; i < iRows; i++)
        {
            for(int j = 0; j < iCols; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        bRet = ChkSparse(Arr, iRows, iCols);

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