/*  Write a recursive program which accept number from user & return its reverse number
    Input   : 523
    Output  : 325
*/

#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;

    if(iNo != 0)
    {
        iRev = iRev * 10 + iNo % 10;
        Reverse(iNo/10);
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    printf("%d", iRet);

    return 0;
}