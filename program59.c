// ACCEPT NUMBER FROM USER AND REVERSE THAT NUMBER

#include<stdio.h>

int CheckPalindrome(int iNo)
{
    int iRev = 0;

    while(iNo > 0)
    {
        iRev = iRev * 10 + iNo % 10;
        iNo = iNo / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRes = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRes = CheckPalindrome(iValue);
    printf("%d", iRes);

    return 0;
}