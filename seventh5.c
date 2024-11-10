// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER & DISPLAY ITS TABLE IN REVERSE ORDER

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iProduct = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iProduct = iNo * iCnt;

        printf("%d ", iProduct);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

// Time complexity is O[N]