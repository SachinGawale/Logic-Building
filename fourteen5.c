// Accept N numbers from user and accept one another number as NO return frequency of NO form it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFrequency = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if (Arr[iCnt] == iNo)
       {
            iFrequency++;
       }
    }
    return iFrequency;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);

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

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency is: %d", iRet);

    free(p);

    return 0;
}