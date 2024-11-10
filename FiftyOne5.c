/*  Write a recursive program which display below pattern
    Output  : a   b    c   d   e   f
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 6)
    {
        printf("%c\t", 'a' + iNo - 1);
        Display(iNo + 1);
    }
}

int main()
{
    int iValue = 1;

    Display(iValue);

    return 0;
}