// program to check number is armstrong or not

#include<stdio.h>

int Armstrong(int iNo)
{
    int iDigit = 0, iArm = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iArm = iArm + (iDigit * iDigit * iDigit);

        iNo = iNo / 10;
    }

    return iArm;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Armstrong(iValue);

    if(iRet == iValue)
    {
        printf("Its an armstrong number..");
    }
    else
    {
        printf("Its not an armstrong number..");
    }

    return 0;
}