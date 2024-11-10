#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

void FactorsW(int iNo)
{
    int iCnt = 1;

    while (iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
        iCnt++;
    }
}

void FactorsR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
        iCnt++;
        FactorsR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Entger the number : ");
    scanf("%d", &iValue);

    FactorsR(iValue);

    return 0;
}