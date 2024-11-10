#include<stdio.h>

int main()
{
    char card_name[3];

    puts("Enter a two-character caed name : ");
    scanf("%2s", card_name);

    printf("You entered: %s\n", card_name);

    return 0;
}