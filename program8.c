/*
    Problem statement: Accept two numbers from user and perform dividation
    Step1:             Understand the problem statement
    Conclusion:        We are going to perform dividation formula
*/

/*
    Step2:             Write the algorithm
                       Start
                            Accept two numbers from user
                            Create varibales as iValue1 & iValue2
                            Calculate the dividation store final output into Fdivide varibale
                            Display the result
                        Stop
*/

/*
    Step3:              Decide programming language: c programming language
*/

/*
    Step4:              Write the program
*/

#include<stdio.h>

/*
    Function name:  CalculateDivide
    Description  :  It is used calculate the dividation between numbers
    Input        :  Integer
    Output       :  Integer
    Author name  :  Sachin Shantaram Gawale
    Date         :  03/10/2023
*/

int CalculateDivide(int value)
{
    int iDiv = 0;

    int iDivide = value / value;
    return iDivide;
}

/*
    Entry point of the function
*/

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the first value: ");
    scanf("%d", &iValue1);

    printf("Enter the first value: ");
    scanf("%d", &iValue2);

    int fDivide = iValue1 / iValue2;
    int mDivide = CalculateDivide(fDivide);

    printf("Dividation of between two numbers is: %d\n", fDivide);
    
    return 0;
}

/*
    Step5:      Test the code:
                                TestCase1: 
                                    Input:  25, 5
                                    Output: 5

                                TestCase2: 
                                    Input:  55, 5
                                    Output: 11
*/