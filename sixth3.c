// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINTS ITS NUMBERS IN LINE

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = (-iNo); iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// Time complexity is O[N]