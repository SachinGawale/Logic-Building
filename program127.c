// 
#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character: \n");
    scanf("%c", &ch);

    printf("ASCII value of the character in decimal: %d\n", ch);
    printf("ASCII value of the character in octal: %o\n", ch);
    printf("ASCII value of the character in hexa decimal: %x\n", ch);

    return 0;
}