/*
    Problem Statement   :   Program to check the sign of a given number
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use conditional statement (if else)
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept the value from user
                                    Create the varibale
                                    write the if else logic in user defined function
                                    Display the result
                                Stop
*/

/*
    Step3               :   Decide programming language : C Programming
*/

/*
    Step4               :   Write the program
*/

#include<stdio.h>

/*
    Function Name       :   DisplayData
    Description         :   It is used to perform conditional statement (if else)
    Input               :   Integer
    Output              :   String
    Author Name         :   Sachin Shantaram Gawale
    Date                :   04/10/2023

*/

void DisplayData(int iData)
{
    if(iData < 0)
    {
        printf("Given number is negative..");
    }
    else
    {
        printf("Given number is positive..");
    }
}

/*
    Entry point function
*/
int main()
{
    int iValue = 0;

    printf("Enter the value: \n");
    scanf("%d", &iValue);

    DisplayData(iValue);

    return 0;
}

/*
    Step5               :   Test the code   :   TestCase1   :   Input   :   -10
                                                                Output  :   Negative number

                                                TestCase1   :   Input   :   15
                                                                Output  :   Posititve number
*/