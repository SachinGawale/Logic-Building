// convert string into lower case

#include<stdio.h>

void StrLowerX(char str[])
{

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
           *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    StrLowerX(Arr);

    printf("Updated string is: %s\n", Arr);

    return 0;
}