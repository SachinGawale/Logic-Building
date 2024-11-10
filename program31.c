/*
    program to accept value from user and display 1) number is 1 when iNo is larger than 0
                                                  2) number is 0 when iNo is 0
                                                  3) number is -1 when less than 0
*/

/*
    Step1       :   Understand the problem
    Conclusion  :   We are going to use if else condition to get the output
*/

/*
    Step2       :   Write algorithm
                    Start
                        Create variable to store input value
                        Read input from keyboard
                        Create a user-defined function to perform if else condition
                        Display output to the console 
                    Stop
*/

/*
    Step3       :   Decide programming language :   C Programming
*/

/*
    Step4       :   Write a program
*/

#include<stdio.h>

/*
    Function Name   :   DisplayNumber
    Description     :   It is used to perform if else condition 
    Input           :   Integer
    Output          :   Integer
    Author Name     :   Sachin Shantaram Gawale
    Date            :   06/10/2023
*/

void DisplayNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("1");
    }
    else if(iNo == 0)
    {
        printf("0");
    }
    else if(iNo < 0)
    {
        printf("-1");
    }
}

/*
    Entry point function
*/

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", & iValue);

    DisplayNumber(iValue);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   : -10
                                                        Output  : -1

                                        TestCase2   :   Input   : 0 
                                                        Output  : 0

                                        TestCase3   :   Input   : 8
                                                        Output  : 1
*/