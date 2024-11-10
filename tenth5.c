// WRITE A PROGRAM WHICH ACCEPTS RANGE FROM USER & DISPLAY ALL NUMBERS IN BETWEEN THAT RANGE IN REVERSE ORDER

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter staring point: ");
    scanf("%d", &iValue1);

    printf("Enter staring point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

// Time complexity is O[N]