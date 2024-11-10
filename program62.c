// program to display fibbonacci series

#include<stdio.h>

void DisplayFibbonacii()
{
    int iFibbo = 0;
    int iCnt = 0;
    int iNo1 = 0;
    int iNo2 = 1;

    printf("%d %d ", iNo1, iNo2);
    for(iCnt = 1; iCnt <= 15; iCnt++)
    {
        iFibbo = iNo1 + iNo2;
                 iNo1 = iNo2;
                 iNo2 = iFibbo;

        printf("%d ", iFibbo);
    }
}

int main()
{
    DisplayFibbonacii();

    return 0;
}