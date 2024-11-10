/*
    Program to accept two integers and check wether they are equal or not
*/

/*
    Step1       :   Understand the problem statement
    Conclusion  :   We are going to use conditional statement to check that both numbers are equal or not 
*/

/*
    Step2       :   Write algorithm
                    Start
                        Read two integers from keyboard
                        Create variables as iNumber1 & iNumber2 to store input from keyboard
                        Use if else to check both numbers are equal or not
                        Display result to the console
                    Stop

*/

/*
    Step3       :   Decide programming language :   C Programming
*/

/*
    Step4       :   Write a program
*/

#include<stdio.h>

/*
    Function Name   : DisplayResult
    Description     : It is used to perform if else condition to check the numbes are equal or not
    Input           : Integer
    Output          : Integer (String)
*/

void DisplayResult(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        printf("%d %d Both are equal..", iNo1, iNo2);
    }
    else
    {
        printf("%d %d Both are not eqaul..", iNo1, iNo2);
    }
}

/*
    Entry point function
*/

int main()
{
    int iNumber1 = 0;
    int iNumber2 = 0;

    printf("Enter two number: ");
    scanf("%d %d", &iNumber1, &iNumber2);

    DisplayResult(iNumber1, iNumber2);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   :   7 8
                                                        Output  :   Both are not equal

                                        TestCase2   :   Input   :   45 45
                                                        Output  :   Boh are equal

                                        TestCase3   :   Input   :   45 65
                                                        Output  :   Both are not equal
*/