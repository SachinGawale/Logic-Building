// Write a program to read temperature in centigrade and display suitable message according to temperature state

/*
    Step1       :   Understand problem statement
    Conclusion  :   We have to use if else condition to check the temperature
*/

/*
    Step2       :   Write algorithm
                    Start
                        Create variable to store input from keyboard
                        Read input from keyboard
                        Create user-defined function
                        Write if else logic in user defined function
                        Display output
                    Stop
*/

/*
    Step3       :   Decide programming language
                :   C Programming
*/

/*
    Step4       :   Write the programming
*/

#include<stdio.h>

/*
    Function Name   :   DisplayTemp
    Description     :   It is used to perform if else condition to check the temperature
    Input           :   Integer
    Output          :   String
    Author Name     :   Sachin Shantaram Gawale
    Date            :   07/10/2023
*/

void DisplayTemp(int iNo)
{
    if(iNo < 0)
    {
        printf("its a freezing weather..");
    }
    else if(iNo >= 0 && iNo < 10)
    {
        printf("Very cold temperature..");
    }
    else if(iNo >= 10 && iNo < 20)
    {
        printf("Cold temperature..");
    }
    else if(iNo >= 20 && iNo < 30)
    {
        printf("Normal temperature..");
    }
    else if(iNo >= 30 && iNo <= 40)
    {
        printf("Hot temperature..");
    }
    else
    {
        printf("OOPS, its a wrong input..");
    }
}

/*
    Entry point function
*/

int main()
{
    int iValue = 0;

    printf("Enter a temperature: ");
    scanf("%d", &iValue);

    DisplayTemp(iValue);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   :   1
                                                    :   Output  :   Very cold temperature

                                        TestCase2   :   Input   :   15
                                                    :   Output  :   Cold temperature
*/                                        