/*  Write a recursive program which accept number from user & display below patterm
    Input    :  5
    Output   :  5   *   4   *   3   *   2   *   1   *
*/

#include<stdio.h>

void Display(int iNo, int iCnt)
{
    if(iCnt > 0)
    {
        printf("%d\t*\t", iCnt);
        Display(iNo, iCnt - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    Display(iValue, iValue);

    return 0;
}