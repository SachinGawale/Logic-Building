/*  Write a recursive program which accept number from user & return summation of its digit
    Input   : 879
    Output  : 24
*/

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;

    if (iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        Sum(iNo/10);
    }
    return  iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d", iRet);

    return 0;
}