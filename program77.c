// program to check wether a given number is neon or not

#include<stdio.h>

int Neon(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iSquare = iNo * iNo;

    while (iSquare != 0)
    {
        iDigit = iSquare % 10;
        iSum = iSum + iDigit;
        iSquare = iSquare / 10; 
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRes = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRes = Neon(iValue);

    if(iRes == iValue)
    {
        printf("%d is a neon number", iValue);
    }
    else
    {
        printf("%d is not a neon number", iValue);
    }

    return 0;
}