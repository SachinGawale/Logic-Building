/*  Accept number of rows & columns & display below pattern
    Input   :   iRow = 4, iCol = 5
    Output  :   
                2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iDigit = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            iDigit = 1;
        }
        else
        {
            iDigit = 2;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iDigit);
            iDigit = iDigit + 2;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & column: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}