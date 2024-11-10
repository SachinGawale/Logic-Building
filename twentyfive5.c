//  Accept character from user & display its ASCII value in decimal, octal & hexdecimal format

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("Decimal     : %d\n", ch);
        printf("Octal       : %o\n", ch);
        printf("Hexadecimal : %X\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}