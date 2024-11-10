/*
    Program to read the age of candidate & determine he is eligible or not for voting
*/

/*
    Step1       :   Understand the problem statement
    Conclusion  :   We use if else condition to check th person is eligible or not for voting
*/

/*
    Step2       :   Write the algorithm
                    Start
                        Create variable to store input value
                        Read input from keyboard
                        Use if else condition to check that person is eligible or not 
                        Display result to the console
                    Stop
*/

/*
    Step3       :   Decide programming language     :   C Programming
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>

/*
    Function Name   :   DisplayAge
    Description     :   It is used to perform if else condition to check person is eligible or not
    Input           :   Integer
    Output          :   String
    Author Name     :   Sachin Shantaram Gawale
    Date            :   06/10/2023
*/

void DisplayAge(int iNo)
{ 
    if(iNo < 0 || iNo > 120)
    {
        printf("Invalid input..");

        return;
    }

    if(iNo >= 18)
    {
        printf("You are eligible to vote..\n");
    }
    else if(iNo < 18)
    {
        printf("You are not eligible to vote..\n");
    }

}

/*
    Entry point function
*/

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", & iAge);

    DisplayAge(iAge);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   : 7
                                                        Output  : Not eligible

                                        TestCase2   :   Input   : 25
                                                        Output  : Eligible

                                        TestCase3   :   Input   : -1
                                                        Output  : Invalid input
*/