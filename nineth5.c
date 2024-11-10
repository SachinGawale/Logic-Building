// WRITE A PROGRAM WHICH ACCEPT AREA IN SQUARE FEET & CONVERT IT INTO SQUARE METER
// 1 SQ FT = 0.0929 SQ.MTR

#include<stdio.h>

double SquareMeter(float iValue)
{
    double dSqaureMtr = 0.0;

    dSqaureMtr = iValue * 0.0929;

    return dSqaureMtr;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in sq.ft: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    printf("%f", dRet);

    return 0;
}

// Time complexity is O[1]