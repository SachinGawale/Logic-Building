// WRITE A PROGRAM WHICH ACCEPT N AND PRINT FIRST 5 MULTIPLES OF N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0, iProduct = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iProduct = iNo * iCnt;

        printf("%d\t", iProduct);   
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

// Time complexity is O[N]