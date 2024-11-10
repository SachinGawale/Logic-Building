// Write a program which accept string from user & convert it into upper case.

#include<stdio.h>

void Strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            *str = *str - 32;
        }
        str++;
    }
    printf(" %s", str);
}

int main()
{
    char arr[20];

    printf("Enter a string : ");
    scanf("%[^'\n']s", arr);

    Strlwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}