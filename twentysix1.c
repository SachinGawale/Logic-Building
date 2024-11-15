//  Write a program which accept string from user & count number of capital characters.

#include<stdio.h>

int CountCapital(char *str)
{   
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}