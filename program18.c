#include<stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("enter first number: \n");
    scanf("%d", &iValue1);

    printf("enter second number: \n");
    scanf("%d", &iValue2);

    iRet = Minimum(iValue1, iValue2);

    printf("smallest number is: %d\n", iRet);

    return 0;
}