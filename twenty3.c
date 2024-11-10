/*  Accept number of rows & columns from user & display below pattern
    Input   : iRow = 4, iCol = 5
    Output  : 
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
                1   2   3   4   5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iDigit = 0;
    char ch = 'a';

    for(i = 1; i <= (iRow/2); i++)
    {
        if(i % 2 == 0)
        {
            ch = 'a';
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n\n");

        if(i % 2 != 0)
        {
            iDigit = 1;
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iDigit);
            iDigit++;
            if(iDigit > 5)
            {
                iDigit = 1;
            }
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