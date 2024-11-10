// Write a program which accept string from user & toggle the case.

#include<stdio.h>

void Strtoggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            *str = *str + 32;
        }
        else if(*str >= 97 && *str <= 122)
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

    Strtoggle(arr);

    printf("Modified string is %s", arr);

    return 0;
}