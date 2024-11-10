// Write a program which accept string from user & display it in reverse order.

#include<stdio.h>

void Reverse(char *str)
{
    char revStr[20];
    int len = 0, iCnt = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    for(iCnt = 0; iCnt < len; iCnt++)
    {
        revStr[iCnt] = str[len - 1 - iCnt];
    }
    revStr[len] = '\0';
    
    printf("Rverse string is: %s", revStr);
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", &arr);

    Reverse(arr);

    return 0;
}