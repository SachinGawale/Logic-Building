// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND DISPLAY ITS TABLE

#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0, iProdcut = 0;

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iProdcut = iNo * iCnt;

        printf("%d ", iProdcut);
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

// Time complexity is O[N]
