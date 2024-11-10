// Write a program which accept string from user & reverse that string.

#include<stdio.h>

void StrRevx(char *str)
{
    int iRevstr = 0;

    while (str[iRevstr] != '\0')
    {
        iRevstr++;
    }

    int iStart = 0;
    int iEnd = iRevstr - 1;
    char temp = '\0';

    while (iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        
        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    StrRevx(arr);

    printf("Modified string is %s", arr);

    return 0;
}