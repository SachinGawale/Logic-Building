// accept number from user and display no count of even
#include<stdio.h>
#include<stdlib.h>

int OddDisplay(int Arr[], int iSize)
{
    int iCnt = 0;
    int iOddCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 2 != 0)
        {
            iOddCnt++;
        }
    }
    return iOddCnt;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter the no of elements u want to enter: \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    
    printf("Dynamic memory allocated successfully for %d elements\n",iCount);

    printf("\nEnter the %d values: \n", iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the element no %d : ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = OddDisplay(ptr, iCount);

    printf("Number of Odd elements are: %d", iRet);

    free(ptr);

    printf("\nDynamic memory gets deallocated succesfully..\n");
    
    return 0;
}