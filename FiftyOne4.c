/*  Write a recursive program which display below pattern
    Output  :  A    B   C   D   E   F
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 6)
    {
        printf("%c\t", 'A' + iNo - 1);
        Display(iNo + 1);
    }
}

int main()
{
    int iValue = 1;

    Display(iValue);

    return 0;
}