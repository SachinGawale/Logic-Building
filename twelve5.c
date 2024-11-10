// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER & RETURN DIFFERENCE BETWEEN SUMMATION OF EVEN DIGITS SUMMATION OF ODD DIGITS.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iSummation = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }

        if (iDigit % 2 != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    iSummation = iSumEven - iSumOdd;

    return iSummation;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}