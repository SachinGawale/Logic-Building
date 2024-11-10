// WRITE A PROGRAM WHICH ACCEPTS DISTANCE IN KILOMETRE & CONVERT IT INTO METER.(1 KILOMETRE = 1000 METER)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("%d", iRet);

    return 0;
}

// Time complexity is O[1]