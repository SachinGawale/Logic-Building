// WRITE A PROGRAM WHICH RETURNS DIFFERENCE BETWEEN EVEN FACTORIAL AND ODD FACTORIAL OF A GIVEN NUMBER

#include<stdio.h>

int FactorailDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iEven = 1, iOdd = 1, iDifference = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt;
        }
    } 
    iDifference = iEven - iOdd;

    return iDifference;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactorailDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}

// Time complexity is O[N]