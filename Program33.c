/*
    Program to find largest of three numbers
*/

/*
    Step1       :   Understand the problem
    Conclusion  :   We have to use if else statement to find largest of three
*/

/*
    Step2       :   Write the algorithm   
                    Start
                        Create varibales to store input from keyboard
                        Read input from keyboard
                        Create user-defined function to perform if else condition
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
    Function Name   :   DisplayLarge
    Description     :   It is used to perform if else statement to find the largest number
    Input           :   Integer
    Output          :   String
    Author Name     :   Sachin Shantaram Gawale
    Date            :   06/10/2023
*/

void DisplayLarge(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        printf("Number first is largest..");
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        printf("Number second is largest..");
    }
    else if((iNo3 > iNo1) && (iNo3 > iNo2))
    {
        printf("Number third is largest..");
    }
}

/*
    Entry point function
*/

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iNum3 = 0;

    printf("Enter first numbers: ");
    scanf("%d", &iNum1);

    printf("Enter second numbers: ");
    scanf("%d", &iNum2);

    printf("Enter third numbers: ");
    scanf("%d", &iNum3);

    DisplayLarge(iNum1, iNum2, iNum3);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1    :  Input   :   75, 80, 90
                                                        Output  :   Third number is largest

                                        TestCase 2   :  Input   :   100, 45, 65
                                                        Output  :   First number is largest

                                        TestCase3    :  Input   :   10, 50, 40
                                                        Output  :   Second number is largest
*/