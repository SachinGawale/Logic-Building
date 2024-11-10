// print n natural numbers and display their sum

#include<stdio.h>

int DisplaySum(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Natural numbers are: \n");
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        printf("%d\n", iCnt);
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("enter a number: ");
    scanf("%d", &iValue);

    iResult = DisplaySum(iValue);

    printf("Sum of first %d natural numbers is %d ", iValue, iResult);

    return 0;    
}