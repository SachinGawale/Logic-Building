// PROGRAM TO CHECK ARMSTRONG NUMBER

#include<stdio.h>

int Armstrong(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iTemp = iNo;
    
    while(iTemp != 0)
    {
        int digit = iTemp % 10;
        iDigit = iDigit + (digit * digit * digit);
        iTemp = iTemp / 10;
    }

    return iDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = Armstrong(iValue);

    if(iRet == iValue)
    {
        printf("%d Is a armstrong number..", iValue);
    }
    else
    {
        printf("%d Is not a armstrong number..", iValue);
    }

    return 0;
}