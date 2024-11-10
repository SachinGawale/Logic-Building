// ACCEPT TWO NUMBERS FROM USER AND DISPLAY FIRST NUMBER SECOND NUMBER OF TIMES.

#include<stdio.h>

void DisplayNum(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d ", iNo1);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a first number: ");
    scanf("%d", &iValue1);

    printf("Enter a second number: ");
    scanf("%d", &iValue2);

    DisplayNum(iValue1, iValue2);

    return 0;
}