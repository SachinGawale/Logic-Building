// WRITE A PROGRAM TO FIND EVEN FACTORIAL OF A GIVEN NUMBER & CALCULATE ITS MULTIPLICATION

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0, iProduct = 1;

    for(iCnt = 1; iCnt <=  iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iProduct = iProduct * iCnt;
        }
    }

    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d", iRet);

    return  0;
}

// Time complexity is O[N]