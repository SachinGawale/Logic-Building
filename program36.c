/*
    Program to check wether character is alphabet, digit or special charater
*/

/*
    Step1       :   Understand the problem statement
    Conclusion  :   We have to use if else statement to check the character
*/

/*
    Step2       :   Write the algorithm
                    Start
                        Create variable to store input from user
                        Read input from keyboard
                        Perform if else condition to check the character
                        Display result to the console
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
    Function Name   :   DisplayResult
    Description     :   It is used to perform if else condition 
    Input           :   Character
    Output          :   String
    Author Name     :   Sachin Shantaram Gawale
    Date            :   07/10/2023
*/

void DisplayResult(char iChar)
{
    
    if(iChar >= '0' && iChar <= '9')
    {
        printf("Its a digit..");
    }
    else if((iChar >= 'a' && iChar <= 'z') || (iChar >= 'A' && iChar <= 'Z'))
    {
        printf("Its a alphabet..");
    }
    else
    {
        printf("Its a special character..");
    }
}

/*
    Entry point function
*/

int main()
{
    char iValue = 0;

    printf("Enter a character: \n");
    scanf("%c", &iValue);

    DisplayResult(iValue);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1    :  Input : 5
                                                        Output: Its a digit

                                        TestCase2    :  Input : f
                                                        Output: Its a alphabet

                                        TestCase3    :  Input : @
                                                        Output: Its a special character
*/