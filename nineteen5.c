/*  Accept number of rows & column from user & display below pattern
    Input   :   iRow = 3, iCol = 4
    Output  :   
                1   2   3   4   
                5   6   7   8
                9   10  11  12
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0, iDigit = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iDigit);
            iDigit++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}