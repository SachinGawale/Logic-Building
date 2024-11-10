// Write a program which accept string from user & return difference between frequency of small characters & capital characters

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0, strCap = 0, strSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            strCap++;
        }

        if(*str >= 97 && *str <= 122)
        {
           strSmall++;
        }
        
        str++;
    }

    return iCnt = strSmall - strCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}