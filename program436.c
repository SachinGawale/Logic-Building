#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

void DisplayDigitsR(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
        DisplayDigitsR
    }
}

int main()
{
    int iValue = 0;

    printf("Entger the number : ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}