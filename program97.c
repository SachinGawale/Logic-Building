// maximum and minimum

#include<stdio.h>
#include<stdlib.h>

void Maxmin(int Arr[], int iSize)
{
   int iCnt = 0;
   int iMax = Arr[0];
   int iMin = Arr[0];

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
             iMin = Arr[iCnt];
        }
   }

   printf("maximum element is : %d\n", iMax);
   printf("minimum element is : %d\n", iMin);

}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;

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

    Maxmin(ptr, iCount);

    free(ptr);
    printf("Dynamic memory gets deallocated..\n");

    return 0;
}