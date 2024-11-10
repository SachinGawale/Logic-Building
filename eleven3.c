// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER & COUNT FREQUENCY OF 2 IN IT.


#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
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
    int bRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CountTwo(iValue);

    printf("%d", bRet);

    return 0;
}