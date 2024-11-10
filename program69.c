// ACCEPT NUMBER FROM USER & CALCULATE SUM & PRODUCT OF ALL DIGITS

#include<stdio.h>

void SumProduct(int iNo)
{
    int iDigit = 0, iSum = 0, iProduct = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
         
        iProduct = iProduct * iDigit;

        iNo = iNo / 10;
    }
    printf("%d\n", iSum);
    printf("%d\n", iProduct);
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    SumProduct(iValue);

    return 0;
}