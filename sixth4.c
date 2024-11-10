// WRITE A PROGRAM WHICH ACCEPTS N FROM USER AND PRINT ALL ODD NUMBERS UPTO N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

// Time complexity is O[N]