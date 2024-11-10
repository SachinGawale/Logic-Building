// program to accept number from user display product series of that number

#include<stdio.h>

void DisplayProduct(int iNo)
{
    int iMultiply = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMultiply = iNo * iCnt; 
        printf("%d\n", iMultiply);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number from user: ");
    scanf("%d", &iValue);

    DisplayProduct(iValue);

    return 0;
}