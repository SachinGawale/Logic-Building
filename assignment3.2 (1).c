// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINT EVEN FACTORS OF THAT NUMBER

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= (iNo / 2); i++)
    {
        if(iNo % i == 0)
        {
            printf("%d ", i);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}