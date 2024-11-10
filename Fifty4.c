/*  Write a recursive program which accept number from user & return smallest digit
    Input   : 87983
    Output  : 3
*/

#include<stdio.h>

int Min(int iNo)
{
    int iMin = 0, iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMin)
        {
            iMin = iDigit;
        }
        Min(iNo / 10);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet =  0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Min(iValue);
    printf("%d", iRet);

    return 0;
}