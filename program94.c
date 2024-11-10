#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    float fAverage = 0.0f;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    fAverage = ((float)iSum/(float)iSize);

    return fAverage;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

    printf("Enter number of elements u want: \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocation succesfully..\n ");

    printf("Enter the elements: \n");
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the no of element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    fRet = Average(ptr, iCount);
    printf("Average is : %f\n", fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated..\n");

    return 0;
}