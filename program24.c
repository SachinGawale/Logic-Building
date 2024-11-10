/*
    Problem Statement   :   Program to check wether the given number is odd or even
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are goint to use conditional statement (if else)
*/

/*
    Step2               :   Write the algorithm
                            Start
                                Accept the number from user
                                Create variable to store the number
                                Write a if else condition to check that number is odd or even
                                Display result to the console
                            Stop
*/

/*
    Step3               :   Decide the programming language :   C Programming
*/

/*
    Step4               :   Write the program
*/

#include<stdio.h>

/*
    Function Name       :   DisplayResult
    Description         :   It is used to perform conditional statement i.e if else
    Input               :   Integer
    Output              :   String
    Author Name         :   Sachin Shantaram Gawale
    Date                :   04/10/2023
*/

void DisplayResult(int iNo)
{
    if(iNo % 2 ==0)
    {
        printf("Given number is EVEN..");
    }
    else if(iNo % 2 != 0)
    {
        printf("Given number is ODD..");
    }
}

/*
    Entry point function
*/

int main()
{
    int iNumber = 0;

    printf("Enter a number: \n");
    scanf("%d", &iNumber);

    DisplayResult(iNumber);

    return 0;
}

/*
    Step5               :   Test the code   :   TestCase1   :   Input   :   3  
                                                                Output  :   ODD

                                                TestCase1   :   Input   :   4
                                                                Output  :   EVEN
*/