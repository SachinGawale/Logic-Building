/*
    iRow = 5
    iCol = 5

    $   *   *   *   *
    *   $   1   1   *
    *   0   $   1   *
    *   0   0   $   *
    *   *   *   *   $
*/
#include<iostream>
using namespace std;


class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Pattern(int x, int y)
        {
            iRow = x;
            iCol = y;
        }

        void Display()
        {
            int iCnt = 0, i = 0, j = 0;

            for(iCnt = 1; iCnt <= i; iCnt++)
            {
                for(iCnt = 1; iCnt <= j; iCnt++)
                {
                    if(i == j)
                    {
                        cout<<"$\t";
                    }
                    else if((i == 1) || (i == iRow) || (j == i) || j == iCol)
                    {
                        cout<<"*\t";
                    }
                    else if(i > j)
                    {
                        cout<<"0\t";
                    }
                    else if(i < j)
                    {
                        cout<<"1\t";
                    }
                }
                cout<<endl;
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number of rows: "<<endl;
    cin>>iValue1;

    cout<<"Enter number of columns: "<<endl;
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);

    pobj->Display(iValue1, iValue2);

    delete pobj;

    return 0;
}