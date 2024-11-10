// WRITE A PROGRAM WHICH ACCEPT RANGE FROM USER & RETURN ADDITION OF ALL EVEN NUMBERS IN BETWEEN THAT RANGE
// RANGE SHOULD CONTAIN ALL POSITIVE NUMBERS ONLY

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iAdd = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iStart < 0 || iStart > iEnd)
        {
            printf("Invalid range\n");
            break;
        }
        if(iCnt % 2 == 0)
        {
            iAdd = iAdd + iCnt;
        }
    }
    return iAdd;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);
    printf("%d", iRet);

    return 0;
}

// Time complexity is O[N]