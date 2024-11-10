// Accept a number from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEven = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 00)
        {
            iEven++;
        }
    }
    return iEven;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory..");
        return -1;
    }

    printf("\nEnter %d elements: ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is : %d", iRet);

    free(p);

    return 0;
}