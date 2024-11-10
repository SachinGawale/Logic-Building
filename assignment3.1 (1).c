// WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USER & PRINT THAT NUMBER OF EVEN NUMBERS ON SCREEN

#include<stdio.h>

void PrintEven(int iNo)
{
    int iEven = 0;
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    
} 

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}