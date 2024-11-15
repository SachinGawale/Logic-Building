// Accept n numbers from user and display all such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements which are even & divisible by 5 are: ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter a number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to locate memory..");
        return -1;
    }

    printf("\nEnter %d elements: ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter %d element : ", iCnt +1);
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}