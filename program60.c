// ACCEPT A NUMBER FROM USER AND CHECK WETHER IT IS PALINDROME OR NOT

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iRev = 0;
    int bRes = iNo;

    while (iNo > 0)
    {
        iRev = iRev * 10 + iNo % 10;
        iNo = iNo / 10;
    }
    
    if (iRev == bRes)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool iRes = false;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRes = CheckPalindrome(iValue);

    if(iRes)
    {
        printf("%d is a palindrome number..", iValue);
    }
    else
    {
        printf("%d is not a palindrome number..", iValue);
    }

    return 0;
}