// Dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNum, iCnt, *ptr;

    printf("Enter a no of values: ");
    scanf("%d", &iNum);

    ptr = (int *)malloc(iNum * sizeof(int));

    printf("Enter the values: ");
    for(iCnt = 0; iCnt < iNum; iCnt++)
    {
        scanf("%d\n", &ptr[iCnt]);
    }

    printf("Entered values are: ");
    for (iCnt = 0; iCnt < iNum; iCnt++)
    {
        printf("%d\t", *(ptr + iCnt));
    }

    free(ptr);
    
}