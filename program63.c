// PROGRAM TO FIND HIGHEST COMMON FACTOR OF TWO NUMBER

#include<stdio.h>

int DisplayHCF(int iNo1, int iNo2)
{
    //int iCnt = 0;

    int smaller = (iNo1 < iNo2) ? iNo1 : iNo2;
    int hcf = 1;

    for (int i = 1; i <= smaller; i++) 
    {
        if (iNo1 % i == 0 && iNo2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRes = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("enter second number: ");
    scanf("%d", &iValue2);

    iRes = DisplayHCF(iValue1, iValue2);

    printf("HCF of %d and %d is %d", iValue1, iValue2, iRes);

    return 0;
}


