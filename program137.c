// accept string nd return small letters in that

#include<stdio.h>

int CountSmall(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z' )
        {
            iCnt++;
        }
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

    //printf("Enter the character for frequency calculation: \n");
    //scanf(" %c", &cValue);

    iRet = CountSmall(Arr);

    printf("Count of a letter is: %d\n", iRet);

    return 0;
}