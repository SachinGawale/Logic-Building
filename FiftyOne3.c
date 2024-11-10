/*  Write a recursive program which display below pattern
    Output  : 5   4   3   2   1
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo != 0)
    {
        printf("%d\t", iNo);
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 5;

    Display(iValue);

    return 0;
}