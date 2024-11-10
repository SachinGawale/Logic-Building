// Write a program which accept string from user & accept one character. Return index of first occurence of that character.

#include<stdio.h>

int FisrtChar(char *str, char ch)
{
    int iFrequency = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            return iFrequency;
        }
        str++;
        iFrequency++;
    }

    return -1;  
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

    iRet = FisrtChar(arr, cValue);

    printf("Character loaction is %d", iRet);

    return 0;
}