#include<stdio.h>  // printf scanf
#include<stdlib.h> // for malloc & free

void Display(int *Arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int)); // memory allocation

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    /* printf("Your entered elements are: \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }*/

    Display(ptr, iCount);

    return 0;
}