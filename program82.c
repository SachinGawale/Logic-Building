// pointers

#include<stdio.h>

int main()
{
    int a = 10, b = 9;
    int *p, *q;
    p = &a;
    q = &b;

    printf("value of a: %d\n", a);
    printf("value of a: %d\n", *p);
    printf("adress of a is: %d\n", &p);
    printf("value of b is: %d\n", b);
    printf("value of b is: %d\n", *q);
    printf("adress of b is: %d\n", &q);

    return 0;
}