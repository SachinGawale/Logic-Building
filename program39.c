// Write a C program for reading a college code and displaying the college name.

/*
    Step1       :   Understand the problem statement
    Conclusion  :   We are going to use switch case statement
*/

/*
    Step2       :   Write the algorithm
                    Start
                        Create varibale to store input data from user
                        Read input data from keyboard
                        Use switch case statement 
                        Display the output
                    Stop
*/

/*
    Step3       :   Decide programming langauge
                :   C Programming
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>

int main()
{
    int iCollege = 0;

    printf("Enter a college code..");
    scanf("%d", &iCollege);

    switch(iCollege)
    {
        case 10:
                printf("S.P.JMIR");
                break;

        case 20:
                printf("IIM Ahmedabad");
                break;

        case 30:
                printf("IIM Banglore");
                break;

        case 40: 
                printf("IIM Culcutta");
                break;

        case 50:
                printf("IIM Roorkie");
                break;

        default:
                printf("Invalid code..");
                break;
    }
}

/*
    Step5       :   Test the code   TestCase1   : Input :   20
                                                : Output:   IIM Ahmedabad

                                    TestCase2   : Input :   60
                                                : Output:   Invalid input
*/