// WRITE A PROGRAM WHICH ACCEPT TEMPERATURE IN FARHENHEIT AND CONVERT IT INTO CELSIUS
// 1 CELSIUS = ((FAHRENHEIT - 32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = ((fTemp - 32) * (5.0 / 9.0));

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in farhenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%lf", dRet);

    return 0;
}

// Time complexity is O[1]