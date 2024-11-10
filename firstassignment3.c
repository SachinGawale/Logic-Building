// PROGRAM TO PRINT 5 TO 1 ON SCREEN

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt > 0; iCnt--)
    {
        printf("%d\n", iCnt);
    }
} 

int main()
{
    Display();

    return 0;
}