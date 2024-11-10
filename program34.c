/*
    Program to read roll no, name, marks of three subject & calculate the total, percentage & division
*/

/*
    Step1       :   Understand the problem
    Conclusion  :   We have to use formula of addition, percentage & division
*/

/*
    Step2       :   Write the algorithm
                    Start
                        Create variables to store input values from keyboard
                        Read input values from keyboard
                        Use Addition, Percentage & Division formula
                        Display output to the console
                    Stop
*/

/*
    Step3       :   Decide programming language
                :   We have selected C Programming
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>

/*
    Function Name   : DisplayResult
    Description     : It is used to calculate total & percentage
    Input           : Integer
    Output          : Float
    Author Name     : Sachin Shantaram Gawale
    Date            : 06/10/2023
*/

float DisplayResult(int iMrk1, int iMrk2, int iMrk3)
{
    float fsum = iMrk1 + iMrk2 + iMrk3;
    printf("Total is: %f\n", fsum);

    float fPercent = (iMrk1 + iMrk2 + iMrk3) / 3;
    printf("Percentage is: %f\n", fPercent);

}

/*
    Entry point function
*/

int main()
{
    int iRollNo = 0;
    char iName [25];
    int iMarks1 = 0;
    int iMarks2 = 0;
    int iMarks3 = 0;

    float fTotal = 0;
    float fPercentage = 0;

    printf("Enter roll number: \n");
    scanf("%d", &iRollNo);

    printf("Enter your name: \n");
    scanf("%s", &iName);

    printf("Enter marks of math: \n");
    scanf("%d", &iMarks1);

    printf("Enter marks of science: \n");
    scanf("%d", &iMarks2);

    printf("Enter marks of history: \n");
    scanf("%d", &iMarks3);

    DisplayResult(iMarks1, iMarks2, iMarks3);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase    :   Input   : Roll No   : 4
                                                                : Name      : Vedant
                                                                : Math      : 85
                                                                : Science   : 94
                                                                : History   : 74

                                                    :   Output  : Roll no   : 4
                                                                : Name      : Vedant
                                                                : Total Mrk : 284.00
                                                                : Percentage: 84.00
*/