// WRITE A PROGRAM WHICH ACCEPT RADIUS OF A CIRCLE FROM USER AND CALCULATE ITS AREA.
// CONSIDER VALUE OF PI 3.14

#include<stdio.h>

double CircleArea(float iNo)
{
    float fPI = 3.14;
    double fArea = 0;

    fArea = fPI * iNo * iNo;

    return fArea; 
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter a radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is %f", dRet);

    return 0;
}

// Time complexity is O[1]