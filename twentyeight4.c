// Write a program which accept string from user & accept one character. Return index of last occurence of that character.

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iLastIndex = -1;
    int iFirstIndex = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iFirstIndex;
        }
        str++;
        iFirstIndex++;
    }
    
    return iLastIndex;  
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

    iRet = LastChar(arr, cValue);

    printf("Character loaction is %d", iRet);

    return 0;
}