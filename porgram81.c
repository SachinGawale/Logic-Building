// pointers concept

#include<stdio.h>

int main()
{
    int i = 4;

    printf("adress of i is: %u\n", &i);
    printf("value of i is : %d\n", i);
    printf("by pointer value at adress is: %d", *(&i));

    return 0;
}