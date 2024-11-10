// WRITE A PROGRAM TO FIND FACTORIAL OF A GIVEN NUMBER

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iProduct = 1;

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        iProduct = iProduct * iCnt;
    }

    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter numner: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d\n", iRet);

    return 0;
}

// Time complexity is O[N]