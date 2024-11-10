/*
    Problem statement   :   Ask the standard to student in which he studying and display exam time to that student
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use conditional statment (selection stmt) switch case
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept the std from student as iStd
                                    Pass that iStd to the DisplayExamTime function
                                    Write the switch case statement 
                                    Display the output to the student
                                Stop
*/

#include<stdio.h>

/*
    Function Name       :   DisplayExamTime
    Description         :   It is used to perform conditional statement : switch case
    Input               :   Integer
    Output              :   Integer
    Author Name         :   Sachin Shnataram Gawale
    Date                :   03/10/2023
*/

void DisplayExamTime(int iStandard)
{
    switch (iStandard)
    {
        case 1:
            printf("ur exam time is 8\n");
            break;
        case 2:
            printf("ur exam time is 9\n");
            break;
        case 3:
            printf("ur exam time 10");
            break;
        case 4:
            printf("ur exm time is 11");
            break;
        case 5:
            printf("ur exam time is 12 noon");
            break;
        default:
            printf("wrong input..\n");
    }
}

/*
    Entry point function
*/
 
int main()
{
    int iStd = 0;

    printf("Enter your standard: \n");
    scanf("%d", &iStd);

    DisplayExamTime(iStd);

    return 0;
}

/*
    Step5               :   Test the code   :   TestCase1   :   Input   :   4
                                                                Output  :   11 am

                                                TestCase2   :   Input   :   8
                                                            :   Output  :   Wrong input...

*/