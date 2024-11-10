/*
    Problem statement   :   Program to check wether the character is alphabet or not
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use conditional statement i.e if else
*/

/*
    Step2               :   Write the algorithm
                            Start
                                Accept the value from user
                                Create the variable to store the value
                                Write the if else logic to identify alphabet or not
                                Display the result
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
    Function Name       :   DisplayAlphabet
    Description         :   It is used to perform conditional statement inside it
    Input               :   Character
    Output              :   String
    Author Name         :   Sachin Shnataram Gawale
    Date                :   04/10/2023
*/

void DisplayAlphabet(char iChar)
{
    if((iChar >= 'a' && iChar <= 'z') || (iChar >= 'A' && iChar <= 'z'))
    {
        printf("It is an Alphabet..");
    }
    else if((iChar != 'a' && iChar <= 'z') || (iChar != 'A' && iChar <= 'z'))
    {
        printf("It is not an Alphabet..");
    }
}

/*
    Entry point function
*/
 
int main ()
{
    char cAlpha;

    printf("Enter a character: \n");
    scanf("%c", &cAlpha);

    DisplayAlphabet(cAlpha);

    return 0;
}

/*
    Step5               :   Test the code   :   TestCase1   :   Input   :   s
                                                                Output  :   It's an alphabet

                                                TestCase2   :   Input   :   7
                                                                Output  :   It's not an alphabet
*/