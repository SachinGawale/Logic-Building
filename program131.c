#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter the string: \n");
    //scanf("%s", Arr);
    gets(Arr);

    printf("Entered string is : %s\n", Arr);

    return 0;
}