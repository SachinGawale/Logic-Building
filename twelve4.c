// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER & RETURN MULTIPLICATION OF ALL DIGITS

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iProduct = 1; 

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iProduct = iProduct * iDigit;
        
        iNo = iNo / 10;
    }
    
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}