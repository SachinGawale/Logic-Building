// WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER & COUNT FREQUENCY OF SUCH A DIGITS WHICH ARE LESS THAN 6

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}