// ACCEPT ONE CHARACTER FROM USER & CONVERT CASE OF THAT CHARACTER.

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{

    if(toupper(cValue))
    {
        printf("%c", cValue);
    }
    else if(tolower(cValue))
    {
        printf("%c", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}