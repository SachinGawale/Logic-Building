/*
    Problem statement   :   Program to find wether the given year is leap year or not
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use conditional statement
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept a year from user
                                    Create varibale to input
                                    Write the conditional statement(if else)
                                    display the year whether it is leap or not a leap year
                                Stop 
*/

/*
    Step3               :   Decide programming language :   C Programming
*/

/*
    Step4               :   Write the program
*/

#include<stdio.h>

/*
    Function Name       :   DisplayLeapYear
    Description         :   It is used to perform conditional statement
    Input               :   Integer
    Output              :   String
    Author Name         :   Sachin Shantaram Gawale
    Date                :   04/10/2023
*/

void DisplayLeapYear(int iYr)
{
    if((iYr % 2 == 0) || (iYr % 4 == 0) || (iYr % 100 == 0))
    {
        printf("The year you entered is leap year..\n");
    }
    else
    {
        printf("The year you entered is not a leap year..\n");
    }
}

/*
    Entry point function
*/

int main()
{
    int iYear = 0;

    printf("Enter the year: \n");
    scanf("%d", &iYear);

    DisplayLeapYear(iYear);

    return 0;
}

/*
    Step5               :   Test the code   :   TestCase1   :   Input   :   2000  
                                                                Output  :   Leap year

                                                TestCase2   :   Input   :   2001  
                                                                Output  :   Not a leap year

                                                TestCase3   :   Input   :   2002  
                                                                Output  :   Leap year

                                                TestCase4   :   Input   :   2003  
                                                                Output  :   Not a leap year

*/

