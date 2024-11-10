// write a program which accept name from user and print that name

#include<stdio.h>

int main()
{
    char fName[30];
    char lName[30];

    printf("Please enter your full name: ");
    scanf("%s %s", &fName, &lName);

    printf("Your name is %s %s", fName, lName);

    return 0;
}


// Time Complexity is O[N]