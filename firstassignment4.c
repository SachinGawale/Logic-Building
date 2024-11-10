// ACCEPT NUMBER FROM USER AND CHECK WETHER IT IS DIVISIBLE BY 5 OR NOT

#include<stdio.h>
#include<stdbool.h>

int Divisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iVlaue = 0;
    int iRes = 0;

    printf("Enter a number: ");
    scanf("%d", &iVlaue);

    iRes = Divisible(iVlaue);

    if(iRes == true)
    {
        printf("%d is divisible by 5", iVlaue);
    }
    else
    {
        printf("%d is not divisible by 5", iVlaue);
    }
    return 0;
}