/*  Accept number of rows & columns from user & display below pattern
    Input   :   iRow = 6, iCol = 6

    Ouptut  :   *   *   *   *   *   *
                *   #   #   #   *   *
                *   #   #   *   $   *
                *   #   *   $   $   *
                *   *   $   $   $   *
                *   *   *   *   *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol)
            {
                printf("*\t");
            }
            else if(j == iRow - i + 1)
            {
                printf("*\t");
            }
            else if(i <= iCol)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
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