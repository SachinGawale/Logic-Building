#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //int iNo = 8;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue = 0;
    printf("enter no of times u want to display jay ganesh..: ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}