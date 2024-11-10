/*
    Program to check wether triangle can be formed with the given values
*/

/*
    Step1       :   Understand the problem 
    Conclusion  :   First we have to calculate sum then use if else condition  
*/

/*
    Step2       :   Write the algorithm
                    Start
                        Create three variables to store input values from user
                        Read three input values from keyboard
                        Count total of three values
                        Compare total with sum
                        Display result to the console
                    Stop
*/

/*
    Step3       :   Decide programming langauge
                :   We have selected C Programming
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>

/*
    Function Name   : DisplayAngle
    Description     : It is used to calculate total of angle & performs if else condition to angle is valid or not
    Input           : Integer
    Output          : String
    Author Name     : Sachin Shantaram Gawale
    Date            : 06/10/2023  
*/

void DisplayAngle(int iAngle1, int iAngle2, int iAngle3)
{
    int iTotal = iAngle1 + iAngle2 + iAngle3;
    printf("Sum of angle is: %d\n", iTotal);

    if (iTotal == 180)
    {
        printf("Its a valid angle..");
    }
    else
    {
        printf("Its not a valid angle..");
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

    printf("Enter first angle: \n");
    scanf("%d", &iValue1);

    printf("Enter second angle: \n");
    scanf("%d", &iValue2);

    printf("Enter third angle: \n");
    scanf("%d", &iValue3);

    DisplayAngle(iValue1, iValue2, iValue3);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   :   45, 45, 90
                                                        Output  :   total is 180
                                                                :   Its a valid angle

                                        TestCase2   :   Input   :   75, 45, 90
                                                        Output  :   Total is 210
                                                                :   Its not a valid angle
*/