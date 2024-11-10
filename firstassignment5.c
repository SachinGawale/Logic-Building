// ACCEPT NUMBER FROM USER AND PRINT THAT NUMBER OF * ON SCREEN

#include<stdio.h>

void DisplayStar(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* "); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayStar(iValue);
    
    return 0;
}