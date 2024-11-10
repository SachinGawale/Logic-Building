/*  Accept number of rows & column & display below pattern
    Input   :   iRow = 4, iCol = 4
    Output  :   
                A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch + j-1);
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