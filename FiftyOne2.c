/*  Write a recursive program which display below pattern
    Output  : 1    2    3   4   5
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 5)
    {
        printf("%d\t", iNo);
        Display(iNo + 1);
    }
}

int main()
{
    int iValue = 1;

    Display(iValue);

    return 0;
}