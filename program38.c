// program to read any day number in integer and display the day name in word format

/*
    Step1       :   Understand the problem statement
    Conclusion  :   We are going to use switch case statement
*/

/*
    Step2       :   Write the algorithm 
                    Start
                        Create a variable to store in input 
                        Read input data from keyboard
                        Use switch case statement to get the output
                        Display result
                    Stop
*/

/*
    Step3       :   Decide programming language
                :   C Programming
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>

int main()
{
    int iDay = 0;

    printf("Enter day number: ");
    scanf("%d", &iDay);

    switch(iDay)
    {

        case 1:
            printf("Monday");
            break;

        case 2: 
            printf("Tuesday");
            break;

        case 3: 
            printf("Wednesday");
            break;

        case 4: 
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day number");
            break;
    }
}

/*
        Test the code   :   TestCase1   : Input : 1
                                        : Output: Monday

                            TestCase2   : Input : 9
                                        : Output: Invalid day number
*/
