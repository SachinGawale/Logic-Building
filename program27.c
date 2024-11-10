/*
    Problem statement:   program to check wether the given character is vowel or consonant
*/

/*
    Step1           :   Understand the problem statement
    Conclusion      :   We are goint to use conditional statement
*/

/*
    Step2           :   Write the algorithm
                        Start
                            Accept the character from the user
                            Create variable to store the input character
                            Write the if else logic to get the output
                            Display the result to the console
*/

/*
    Step3           :   Deciding Programming language   :   C Programming
*/

/*
    Step            :   Write the program
*/
#include<stdio.h>

/*
    Function Name   :   DisplayVowel
    Description     :   It used to perform conditional statement
    Input           :   Character
    Output          :   String
    Author          :   Sachin Shantaram Gawale
    Date            :   04/10/2023
*/

void DisplayVowel(char iChar)
{
    if((iChar < 'a' || iChar > 'z') && (iChar < 'A' || iChar > 'Z'))
    {
        printf("Invalid input..\n");

        return;
    }

    if (iChar == 'a' || iChar == 'e' || iChar == 'i' || iChar == 'o' || iChar == 'u' || iChar == 'A' || iChar == 'E' || iChar == 'I' || iChar == 'O'|| iChar == 'U')
    {
        printf("It is a Vowel...\n");
    }
    else
    {
        printf("It is a consonat..\n");
    }
}

/*
    Entry point function
*/

int main()
{
    char iCharacter;

    printf("Enter the character: ");
    scanf("%c", &iCharacter);

    DisplayVowel(iCharacter);

    return 0;
}

/*
    Step5           :   Test the code   :   TestCase1   :   Input   :   y
                                                            Output  :   Its a consonant..
                                            
                                            TestCase2   :   Input   :   i
                                                            Output  :   Its a vowel..
                                            
                                            TestCase3   :   Input   :   $
                                                            Output  :   Invalid input
*/
