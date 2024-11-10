#include<stdio.h>

void DisplayDigitsR(int iNo)
{
    //static int iCnt = 1;

    if(iNo >= 1)
    {
        DisplayDigitsR(iNo-1);
        printf("%d\n", iNo);
    }
}

int main()
{
    DisplayDigitsR(5);

    return 0;
}
