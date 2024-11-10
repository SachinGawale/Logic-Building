// Accept N numbers from user & accept one another number as NO, return index of first occurence of that number

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFound = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFound = iCnt;
        }
        else if (Arr[iCnt] != iNo)
        {
            iFound = -1;
        }  
    }
    return iFound;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory..");
        return -1;
    }

    printf("Enter %d elements: ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter %d element: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter element to check occurence: ");
    scanf("%d", &iValue);

    iRet = FirstOcc(p, iSize, iValue);

    printf("%d", iRet);

    free(p);

    return 0;
}