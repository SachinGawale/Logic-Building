// Accept N numbers from user & accept one another number as NO, return index of last occurence of that NO

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iOcc = 0;

    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            iOcc = iCnt;
            break;
        }
        else if(Arr[iCnt] != iNo)
        {
            iOcc = -1;
        }
    }
    return iOcc;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0, iValue = 0;
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

    printf("Enter element to search occurence: ");
    scanf("%d", &iValue);

    iRet = LastOcc(p, iSize, iValue);
    printf("%d", iRet);

    free(p);

    return 0;
}