// Accept N number of elements from user check wether that numbers contain 11 or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFound = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFound = TRUE;
        }
    }
    return bFound;
}

int main()
{
    int iCnt = 0, iSize = 0;
    BOOL bRet = FALSE;
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

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter %d element: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present..");
    }
    else
    {
        printf("11 is not present..");
    }
    
    free(p);

    return 0;
}