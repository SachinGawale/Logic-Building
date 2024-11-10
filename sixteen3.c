// Accept N numbers from user & return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0, iSmall = 0, iDifference = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[0] < Arr[iCnt])
        {
            iMax = Arr[0] = Arr[iCnt];
        }
        if(Arr[0] > Arr[iCnt])
        {
            iSmall = Arr[0] = Arr[iCnt];
        }
    }
    return iDifference = iMax - iSmall;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocte memory..");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d elements : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    } 

    iRet = Difference(p, iSize);

    printf("Difference is : %d", iRet);

    free(p);

    return 0;
}
