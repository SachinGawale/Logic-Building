// WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND DISPLAY ITS MAULTIPLICATION OF FACTORS

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iProduct = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}