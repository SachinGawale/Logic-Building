/* WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER & IF NUMBER IS LESS THAN 50 THEN PRIINT SMALL
 & IF IT IS GREATER THAN 50 & LESS THAN 100 THEN PRINT MEDIUM, IF IT IS GREATER THAN 100
 THEN PRINT LARGE 
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Samll");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

// Time complexity is O[1]