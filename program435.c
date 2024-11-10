#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 1;
    int iSum = 0;

    while (iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }

    return iSum;
}

int SumFactorsR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactorsR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Entger the number : ");
    scanf("%d", &iValue);

    iRet = SumFactorsR(iValue);

    printf("Addition is : %d", iRet);

    return 0;
}