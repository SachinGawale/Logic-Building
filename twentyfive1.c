/*  Write a program which displays ASCII table. Table contains symbol, 
    Decimal, Hexadecimal & Octal representation of every member from 0 to 255
*/

#include<stdio.h>

void DisplayASCII()
{
    printf("ASCII Taable: \n");
    printf("----------------------------------------------------\n");
    printf("| Symbol | Decimal | Hexadecimal | Octal | \n");
    printf("----------------------------------------------------\n");

    for(int i = 0; i <= 255; i++)
    {
        printf("|   %c  |   %-3d    |   %02x    |   %03o    |\n", i, i, i, i);
    }
    printf("----------------------------------------------------");
}

int main()
{
    DisplayASCII();

    return 0;
}