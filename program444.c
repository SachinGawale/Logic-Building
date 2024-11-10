#include<stdio.h>

int StrLenxR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrLenxR(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    int iRet = StrLenxR(Arr);

    printf("Length of string is : %d\n", iRet);

    return 0;
}