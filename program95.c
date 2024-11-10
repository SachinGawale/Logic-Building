// accept n elements and return largest element from that element

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
   int iCnt = 0;
   int iMax = Arr[0];

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
   }

   return iMax;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = Maximum(ptr, iCount);
    printf("Maximum is : %d\n", iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated..\n");

    return 0;
}