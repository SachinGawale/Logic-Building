/*  Accept character from user. If character is small display its
    corresponding capital character, & if it is small then display its
    corresponding capital. in other cases display as it is.
*/

#include<stdio.h>

void Display(char ch)
{
    char cChar = '\0';

    if(ch >= 65 && ch <= 90)
    {
        cChar = ch + (97 - 65);

        printf("%c\n", cChar);
    }
    else if(ch >= 97 && ch <= 122)
    {
        cChar = ch - (97 - 65);

        printf("%c\n", cChar);
    }
    else if(ch != (ch >= 65 && ch <= 90) || ((ch >= 97 && ch <= 122)))
    {
        cChar = ch;
        printf("%c\n", cChar);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}