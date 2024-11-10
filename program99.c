#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
   int iCnt = 0;
   int iFrequency = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }    
   }
   return iFrequency;
}

int main()
{
    int iCount = 0, iCnt = 0, iValue = 0;
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
    printf("Enter the element u want to search: \n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iCount, iValue);
    printf("%d occurs %d times\n",iValue, iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated..\n");

    return 0;
}