#include<stdio.h>

int Display(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;
}

int DisplayR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        DisplayR(Arr, iSize);
    }
    return iSum;
}


int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
    int iRet = DisplayR(Arr, 5);
    printf("%d\n", iRet);

    return 0;
}