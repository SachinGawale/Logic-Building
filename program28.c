/*
    ACCEPT THE NUMBER FROM USER & DISPLAY WETHER IT IS A ODD OR EVEN NUMBER
*/

/*
    Step1       :   Understand the problem statement
    Conclusion  :   We are going to use if else statement to check that number is either odd / even
*/

/*
    Step2       :   Write the algorithm
                :   Start
                        Accept number from user
                        Use the formula i.e (iNo % 2 == 0) to check wether the number is odd even
                        Use if else statement to check the condition
                        Display the result
                    Stop
*/

/*
    Step3       :   Decide programming language :   C Programming 
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>
#include<stdbool.h>

/*
    Function Name   : CheckValue
    Description     : It used to perform if else condition to check number is odd or even
    Input           : Integer
    Output          : Integer
    Author Name     : Sachin Shantaram Gawale
    Date            : 06/10/2023
*/

int CheckValue(int iNo)
{
    if((iNo % 2) ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
    Entry point function
*/

int main()
{
    int iValue = 0;
    bool bRes = false;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRes = CheckValue(iValue);

    if (bRes == true)
    {
        printf("is a even number..");
    }
    else
    {
        printf("is a odd number..");
    }
    
    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   : 4
                                                        Output  : Even number

                                        TestCase2   :   Input   : 9
                                                    :   Output  : Odd number
*/