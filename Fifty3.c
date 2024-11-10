/*  Write a recursivr program which accept string from user & count number of small characters
    Input   : HElloWOrlD
    Output  : 5
*/

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if((*str >= 'a') && (*str <= 'z'))
    {
        iCount++;
    }

    if(*str == '\0')
    {
        return iCount;
    }
    else
    {
        return Small(str + 1);
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^\n]s", Arr);

    iRet = Small(Arr);
    printf("%d", iRet);

    return 0;
}