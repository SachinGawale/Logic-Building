/*
    Problem statement   :   Accept a standard from student and display him exam time
*/

/*
    Step1               :   Understand the problem
    Conclusion          :   We are going to use selection statment (if else)
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept the value from the user as iStd
                                    Pass the parameter iStd to the DisplayTime function
                                    Write the conditional statement (selection statement)
                                    Display the time to the student
                                Stop
*/

#include<stdio.h>

/*
    Function Name       :   DisplayExamTime
    Description         :   It is used to perform conditional statement
    Input               :   Integer
    Output              :   Integer
    Author Name         :   Sachin Shantaram Gawale
    Date                :   03/10/2023
*/

void DisplayExamTime(int iStandard)
{
    if(iStandard == 1)
    {
        printf("ur exam at 8 am\n");
    }
    else if(iStandard == 2)
    {
        printf("ur exam at 9am\n");
    }
    else if(iStandard == 3)
    {
        printf("ur exam at 10am\n");
    }
    else if(iStandard == 4)
    {
        printf("ur exam at 11am\n");
    }
    else if(iStandard == 5)
    {
        printf("ur exam at 12pm\n");
    }
}

/*
    Entry point function
*/

int main()
{
    int iStd = 0;

    printf("Enter the standard in which u r studying: \n");
    scanf("%d", &iStd);

    DisplayExamTime(iStd);

    return 0;
}

/*
    Step5               :   Test the code   : TestCase1 :   Input   :   4
                                                            Output  :   11 am

                                            : TestCase2 :   Input   :   5
                                                            Output  :   12 pm
*/