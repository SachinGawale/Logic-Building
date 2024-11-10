// program to check perfect number

#include<stdio.h>

int PerfectNumber(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = PerfectNumber(iValue);

    if(iRet == iValue)
    {
        printf("%d is a perfect number.", iValue);
    }
    else
    {
        printf("%d is not a perfect number.", iValue);
    }

    return 0;
}