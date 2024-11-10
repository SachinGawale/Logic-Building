/*  Write a recursive program which accept string from user & count number of characters
    Input   :  Hello
    Output  :  5
*/

#include<stdio.h>

int Strlen(char *Str)
{
    static int iCount = 0;

    if(*Str != '\0')
    {
        iCount++;
        Str++;
        Strlen(Str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}