// WRITE A PROGRAM WHICH ACCEPT RANGE FROM USER AND RETURN ADDITION OF ALL NUMBERS IN BETWEEN THAT RANGE
// RANGE SHOULD CONTAINS POSITIVE NUMBERS ONLY

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iAdd = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iStart < 0 || iStart > iEnd)
        {
            printf("Invalid range\n");
            break;
        }
        iAdd = iAdd + iCnt;
    }

    return iAdd;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter a starting point: ");
    scanf("%d", &iValue1);

    printf("Enter a ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is %d", iRet);

    return 0;
}

// Time complexity is 0[N]