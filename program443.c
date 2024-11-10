#include<stdio.h>

int EvenCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEven = 0;

    while(iCnt < iSize)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        iCnt++;
    }
    return iEven;
}

int EvenCountR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iEven = 0;

    if(iCnt < iSize)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        iCnt++;
        EvenCountR(Arr, iSize);
    }
    return iEven;
}


int main()
{
    int Arr[5] = {5, 8, 75, 10, 66};

    int iRet = EvenCountR(Arr, 5);
    printf("%d\n", iRet);

    return 0;
}