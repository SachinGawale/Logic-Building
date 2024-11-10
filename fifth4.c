// WRITE A PROGRAM WHICH ACCEPTS THREE NUMBERS FROM USER AND PRINTS ITS MULTIPLICAATION

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iProdcut = 0;

    if(iNo1 == 0)
    {
        iProdcut = iNo2 * iNo3;   
    }
    else if(iNo2 == 0)
    {
        iProdcut = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iProdcut = iNo1 * iNo2;
    }
    else
    {
        iProdcut = iNo1 * iNo2 * iNo3;
    }

    return iProdcut;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("please enter the numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d", iRet);

    return 0;
}

// Time complexity is O[1]