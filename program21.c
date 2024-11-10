/*
    Problem statement   :   Accept the ticket class from user display ticket prices
*/

/*
    Step1               :   Understand problem statement
    Conclusion          :   we are going to use conditional statement
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept the type of class from the user 
                                    Create the varibales
                                    write a conditional statement
                                    display prices
*/

/*
    Step3               :   Decide programming language :   C Programming
*/

/*
    Step4               :   Write the program
*/

#include<stdio.h>

/*
    Function Name       :   DispalyPrice
    Description         :   It is used to perform conditional statement
    Input               :   Integer
    Output              :   String
    Author Name         :   Sachin Shantaram Gawale
    Date                :   04/10/2023
*/

void DisplayPrice(int tClass)
{
    if((tClass < 0) || (tClass > 100))
    {
        printf("Invalid Input..\n");
    }
    else if((tClass >= 0) && (tClass < 35))
    {
        printf("Ordinary class..\n");
    }
    else if((tClass >= 35) && (tClass < 50))
    {
        printf("Secondary class..\n");
    }
    else if((tClass >= 50) && (tClass < 75))
    {
        printf("Primary class..\n");
    }
    else if((tClass >= 75) && (tClass <= 100))
    {
        printf("Supreme class..\n");
    }

}

/*
    Entry point function
*/

int main()
{
    int tNumber = 0;

    printf("Enter the ticket class: \n");
    scanf("%d", &tNumber);

    DisplayPrice(tNumber);

    return 0;
}

/*
Step5               :   Test the code   :   TestCase1   :   Input   :   88
                                                            Output  :   Supreme class

                                            TestCase2   :   Input   :   71
                                                            Output  :   Primary class

                                            TestCase3   :   Input   :   103
                                                            Output  :   Invalid Input
*/