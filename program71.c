// Program to check prime number.

#include<stdio.h>
#include<stdbool.h>

bool PrimeNum(int iNo)
{
    int iCnt = 0;
    bool bRet = false;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    bRet = PrimeNum(iValue);

    if(bRet == true)
    {
        printf("its a prime number..");
    }
    else
    {
        printf("its not a prime number..");
    }

    return 0;
}