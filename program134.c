// Accept string from user & count length of that string

#include<stdio.h>

int strLenX(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = strLenX(Arr);

    printf("length of string is: %d\n", iRet);

    return 0;
}