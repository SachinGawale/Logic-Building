#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf(" %d ", iCnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("enter of time u want to display no..:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}