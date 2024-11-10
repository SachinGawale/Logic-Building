/*  Accept character from user. If it is capital then display all the characters
    from the input characters till Z. if input character is small then print all the
    characters in reverse order till a. In other cases return directly.
*/

#include<stdio.h>

void Display(char ch)
{
    int iCnt =  0;

    for(iCnt = ch; iCnt <= 90; iCnt++)
    {
        if(ch >= 65 && ch <= 90)
        {
            printf(" %c", iCnt);
        }
    }

    for(iCnt = ch; iCnt >= 97; iCnt--)
    {
        if(ch >= 97 && ch <= 122)
        {
            printf(" %c", iCnt);
        }
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}