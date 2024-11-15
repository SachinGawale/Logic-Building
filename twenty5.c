/*  Accept number of rows & columns from user & display below pattern
    Input   : iRow = 4, iCol = 4
    Output  : 
                1   2   3   4
                2   3   4   5
                3   4   5   6
                4   5   6   7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = i; j < i + iCol; j++)
        {
            printf("%d\t", j);
        }
        printf("\n\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & columns: ");
    scanf("%d %d", &iValue1, &iValue2); 

    Pattern(iValue1, iValue2);

    return 0;
}