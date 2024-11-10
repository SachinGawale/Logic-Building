// Program to calculate factor of a number number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("factors of %d are : \n", iNo);
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
        printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("enter a number: ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);
    
    return 0;
}