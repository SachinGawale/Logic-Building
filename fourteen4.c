// Accept N numbers from user and return frequency of 11 in it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iFrequency++;
        }   
    }
    return iFrequency;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0; 
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

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);
    printf("frequency of 11 is : %d", iRet);

    free(p);

    return 0;
}