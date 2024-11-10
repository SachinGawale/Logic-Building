import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void CountEven()
    {
        int i = 0, j = 0;
        int iFrequency = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] % 2 == 0)
                {
                    iFrequency++;
                }
            }
        }
        return iFrequency;
    }
}

class program402
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        int iValue = 0;
        System.out.println("Enter the number that u want to search : ");
        iValue = sobj.nextInt();

        iRet = mobj.CountEven();
        System.out.println("Frequency is : "+iRet);
        
        mobj = null;
        System.gc();
    }
}