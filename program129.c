// Accept character from user wheter check character is capital or small

#include<stdio.h>
#include<stdbool.h>

bool ConvertSmall(char cValue)
{
    return cValue + 32;
}

int mian()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter character: \n");
    scanf("%c", &ch);

    cRet = ConvertSmall(ch);

    printf("Converted small letter is: %c\n", cRet);

    return 0;
}