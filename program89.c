
#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int Arr[], int iSize)
{
    int iCnt = 0, iOddCount = 0;

    printf("\nElements of the array are: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 2 != 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iCount = 0, iCnt = 0;
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

    OddDisplay(ptr, iCount);

    free(ptr);

    printf("\nDynamic memory gets deallocated succesfully..\n");
    
    return 0;
}