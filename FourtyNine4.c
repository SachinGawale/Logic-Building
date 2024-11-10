/*  Write a recursive program which accept number from user & return its factorial
    Input   : 5
    Output  : 120
*/

#include<stdio.h>

int Fact(int iNo, int iCnt)
{
    static int iFactorial = 1;

    if(iCnt > 0)
    {
        iFactorial = iFactorial * iCnt;
        Fact(iNo, iCnt-1);
    }
    return iFactorial;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue, iValue);
    printf("%d", iRet);

    return 0;
}