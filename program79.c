// 
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iCopy = iNo;
    int iDigit = 0;
    int iRev = 0;

    while (iNo != 0)
    {
        iRev = iRev * 10 + iNo % 10;
        iNo = iNo / 10;
    }
    
    return(iRev == iCopy);
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("its a palindrome");
    }
    else
    {
        printf("its not a palindrome");
    }

    return 0;
}