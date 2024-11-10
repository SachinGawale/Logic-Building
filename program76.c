// program to print reverse a number

#include<stdio.h>

int ReverseNumber(int iNum)
{
    int iRev = 0;

    while(iNum != 0)
    {
        iRev = iRev * 10 + iNum % 10;
        iNum = iNum / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRes = 0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRes = ReverseNumber(iValue);

    if(iRes == iValue)
    {
        printf("%d is a palindrome number.", iValue);
    }
    else
    {
        printf("%d is not a palindrome number.", iValue);
    }

    return 0;
}