// Write a program which accept string from user & accept one character. Return frequency of that character.

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;  
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}