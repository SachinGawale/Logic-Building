// ACCEPT NUMBER FROM USER AND CHECK WETHER IT IS EVEN OR ODD

#include<stdio.h>

int DisplayOddEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("%d is an even number..", iNo);
    }
    else
    {
        printf("%d is an odd number..", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayOddEven(iValue);

    return 0;
}