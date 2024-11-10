// Accept N numbers from user and return smallest number

#include<stdio.h>
#include<stdlib.h>

int Smaller(int Arr[], int iLength)
{
    int iCnt = 0, iSmall = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[0] > Arr[iCnt])
        {
            iSmall = Arr[0] = Arr[iCnt];
        }
    }
    return iSmall;
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
        printf("Unable to allocate memory..");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Smaller(p, iSize);

    printf("Smallest number is : %d", iRet);

    free(p);

    return 0;
}