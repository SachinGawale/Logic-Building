/*  Write a recursive program which accept number from user & return its product of digits
    Input   : 523
    Output  : 30
*/

#include<stdio.h>

int Mult(int iNo)
{
    static int iProduct = 1;

    if(iNo != 0)
    {
        iProduct = iProduct * (iNo % 10);
        Mult(iNo / 10);
    }
    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);
    printf("%d", iRet);

    return 0;
}