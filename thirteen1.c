// Accept n numbers from user and return difference between summation of even numbers and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int ilength)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDifference = 0;

    for (iCnt = 0; iCnt < ilength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        if (Arr[iCnt] % 2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    
    return iDifference = iSumEven - iSumOdd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *P = NULL;

    printf("Enter the elements u want: ");
    scanf("%d", &iSize);

    P = (int *)malloc(iSize * sizeof(int));

    if (P == NULL)
    {
        printf("Unable to locate memory: ");
        return -1;
    }

    printf("\nEnter %d elements : ", iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d : ", iCnt+1);
        scanf("%d", &P[iCnt]);
    }

    iRet = Difference(P, iSize);

    printf("\nResult is : %d", iRet);

    free(P);

    return 0;
}