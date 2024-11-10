#include<stdio.h>

void Display(int irow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           if(i == j)
           {
                printf("#\t");
           }
           else
           {
                printf("*\t");
           }
        }
        printf("\n\n");
    }

}

int main()
{   
    int iNo1 = 0, iNo2 = 0; 

    printf("Enter no of rows: \n");
    scanf("%d", &iNo1);

    printf("Enter no of rows: \n");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);

    return 0;
}