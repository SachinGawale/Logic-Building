#include<stdio.h>

void Summation(int *iNo1, int *iNo2)
{
    *iNo1 = *iNo1 + *iNo2;
}

int main()
{
    int iValue1 = 10;
    int iValue2 = 20;

    Summation(&iValue1, &iValue2);

    printf("Result is : %d, %d", iValue1, iValue2);

    return 0;
}