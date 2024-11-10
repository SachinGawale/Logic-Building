// WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND RETURN DIFFERENCE BETWEEN SUMMATION OF ALL ITS FACTORS & N0N-FACTORS

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDifference = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        if (iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
            
    }

    iDifference = iSumFact - iSumNonFact;
    
    return iDifference;
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}