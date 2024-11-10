// WRITE A PROGRAM WHICH ACCEPT WIDTH & HEIGHT OF A RECTANGLE FROM USER AND CALCULATE ITS AREA
// (Area = WIDTH * HEIGHT)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    double dRet = 0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %f", dRet);

    return 0;
}

// Time complexity is O[1]