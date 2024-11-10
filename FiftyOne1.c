/*  Write a recursive program which display below pattern
    Output  : *   *   *   *   *
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo != 0)
    {
        printf("*\t");
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 5;

    Display(iValue);

    return 0;
}