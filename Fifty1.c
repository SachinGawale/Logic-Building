/*  Write a recursive program which accept string from user & count white spaces
    Input    : HE llo WOr lD
    Outout   : 3
*/

#include<stdio.h>

int WhiteSpace(char *Str)
{
    static int iCount = 0;

    if(*Str == ' ')
    {
        iCount++;
    }

    if(*Str == '\0')
    {
        return iCount;
    }
    else
    {
        Str++;
        return WhiteSpace(Str);
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^\n]s", Arr);

    iRet = WhiteSpace(Arr);
    printf("%d", iRet);

    return 0;
}