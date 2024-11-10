// program to count occurence of any number

#include<stdio.h>

int Occurence(int iNo1, int iNo2)
{
    int iDigit = 0, iCount = 0;

    while (iNo1 != 0)
    {
        iDigit = iNo1 %  10;

        if (iDigit == iNo2)
        {
            iCount ++;
        }
        
        iNo1 = iNo1 / 10;
    }
    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue1);

    printf("Enter a number of which u want occurence: ");
    scanf("%d", &iValue2);

    iRet = Occurence(iValue1, iValue2);

    printf("%d", iRet);

    return 0;
}