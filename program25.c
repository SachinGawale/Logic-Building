/*
    Probem statement    :   Program to check wether the given triangle is equilateral, scalene or isoscale
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use conditional statement i.e if else
*/

/*
    Step2               :   Write the algorithm
                            Start
                                Accept three values from user as iValue1, iVlue2 & iValue3
                                Create variables to store the values
                                Write a conditional statement that if else
                                Display the result
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
    Function Name       :   DispalyTriangle
    Description         :   It is used to perform conditional statement i.e if else
    Input               :   Integer
    Output              :   String
    Author Name         :   Sachin Gawale
    Date                :   04/10/2023
*/

void DisplayTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 == iSide2) && (iSide1 == iSide3))
    {
        printf("It is a Equilateral Triangle..");
    }
    else if((iSide1 != iSide2) && (iSide1 != iSide3))
    {
        printf("It is a Scalene Triangle..");
    }
    else if((iSide1 == iSide2) && (iSide1 != iSide3))
    {
        printf("It is a Isoscale Triangle..");
    }
}

/*
    Entry point function
*/
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter the first side of Triangle: \n");
    scanf("%d", &iValue1);

    printf("Enter the second side of Triangle: \n");
    scanf("%d", &iValue2);

    printf("Enter the third side of Triangle: \n");
    scanf("%d", &iValue3);

    DisplayTriangle(iValue1, iValue2, iValue3);

    return 0;
}

/*
    Step5               :   Test the code   :   TestCase1   :   Input   :   4, 4, 4
                                                                Output  :   Equilateral

                                                TestCase1   :   Input   :   4, 4, 9
                                                                Output  :   Isoscale

                                                TestCase1   :   Input   :   7, 8, 4
                                                                Output  :   Scalene
*/