// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER & RETURN THE COUNT OF DIGITS IN BETWEEN 3 & 7

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > 3 && iDigit < 7)
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}