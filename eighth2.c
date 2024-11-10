// ACCEPT AMOUNT IN US DOLLAR AND RETURN ITS CORRESPONDING VALUE IN INDIAN CURRENCY
// CONSIDER 1$ AS 70

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d", iRet);

    return 0;
}

// Time complexity is O[1]