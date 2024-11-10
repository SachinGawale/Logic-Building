/*
    Problem Statement: Accept two numbers from user and perform substraction
*/

/*
    Step1     :     Understand the problem statement
    Conclusion:     We are going to use substraction formula
*/

/*
    Step2:          Write the algorithm
                    Start
                        Accept two numbers from user store them into varibale ivalue1 & ivalue2
                        Create the varibales as iValue1 & iValue2
                        Perform substraction between those two value
                        display the result
                    Stop         
*/

/*
    Step3:          Decide programming language: C Programming language       
*/

/*
    step4:          Write the program
*/

#include<stdio.h>

/*
    Function Name:  CalculateSub
    Description  :  It is used to perform substraction
    Input        :  Integer
    Output       :  Integer
    Author Name  :  Sachin Shantaram Gawale
    Date         :  03/10/2023
*/

int CalculateSub(int iValue)
{
    int iSubstract = 0;

    int iSub = iValue - iValue;
    return iSub;
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

    printf("Enter the second value: ");
    scanf("%d", &iValue2);

    int iSub = iValue1 - iValue2;
    int fSub = CalculateSub(iSub);

    printf("Substraction of two values is: %d\n", iSub);

    return 0;
}