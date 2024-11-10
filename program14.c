/*
    Problem statement   :   Accept the marks and total marks from the user and display class
*/

/*
    Step1               :   Understand the problem
    Conclusion          :   We are going to used conditional statement (if else)
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept marks & total marks from the user
                                    create variable
                                    write the if else condition
                                    display the class
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
    Function Name       :   DisplayClass
    Description         :   It is used to perform conditional statement
    Input               :   float
    Output              :   float
    Author Name         :   Sachin Shantaram Gawale
    Date                :   03/10/2023
*/

void DisplayClass(float fMarks)
{
    if((fMarks < 0.00) || (fMarks > 100.00))
    {
        printf("Invalid input");
    }
    else if((fMarks >= 0) && (fMarks < 35.00))
    {
        printf("You are fail..\n");
    }
    else if ((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("You class is Pass class..\n");
    }
    else if ((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("You class is Second class..\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is first class..");
    }
    else if ((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is first class with distinction..\n");
    }
    
    
    
}

/*
    Entry point function
*/

int main()
{
    float fValue = 0.0f;

    printf("Enter your percentage: \n");
    scanf("%f", &fValue);

    DisplayClass(fValue);

    return 0;
}

/*
    Step5               : Test the code :   TestCase1   :   Input   : 35
                                                            Output  : pass class

                                            TestCase2   :   Input   : 85
                                                            Output  : First class with distinction
*/