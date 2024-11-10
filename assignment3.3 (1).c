// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINT EVEN FACTORS OF THAT NUMBER

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 2; i <= (iNo / 2); i++)
    {
        if(iNo % i == 0 && iNo % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}