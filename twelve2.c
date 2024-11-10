// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURN THE COUNT OF ODD NUMBER

#include<stdio.h>

int CountOdd(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d", iRet);

    return 0;
}