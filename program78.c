// accept a number from user and print reverse of that bumber

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while (iNo != 0)
    {
        iRev = iRev * 10 + iNo % 10;
        iNo = iNo / 10;
    }
    
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    printf("Reverse number is : %d\n", iRet);

    return 0;
}