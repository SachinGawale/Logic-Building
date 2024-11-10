// WRITE A PROGRAM WHICH ACCEPTS TOTAL MARKS & OBTAINED MARKS FROM USER & CALCULATE PERCENTAGE

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float iPercentage = 0.0f;

    iPercentage = ((float) iNo1 / iNo2) * 100;

    return iPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("please enter obtained marks: ");
    scanf("%d", &iValue1);

    printf("please enter total marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %f", fRet);

    return 0;
}

// Time complexity is O[1]