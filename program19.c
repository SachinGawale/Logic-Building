/*
    Problem statement   :   Accept the three values from user & display average
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use Average formula
*/

/*
    Step2               :   Write Algorithm
                                    Start
                                        Accept three values from user as iValue1, iValue2, iValue3
                                        Create varibale as fRet to store values
                                        calculate Average formula as (iValue1 + iValue2 + iValue3) / 3
                                        Display the result to the user

*/

/*
    Step3               :   Decide programming language :   C Programming
*/

/*
    Step4               :   Write the program
*/

#include<stdio.h>
/*
    Function Name       : Average
    Dscription          : It is used to calculate the average
    Input               : Integer
    Output              : float
    Author Name         : Sachin Shantaram Gawale
    Date                : 03/10/2023
*/
int Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0f;
    fAns =  ((float)(iNo1 + iNo2 + iNo3) / 3);
    return fAns;
}

/*
    Entry point function
*/

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    float fRet = 0.0f;

    printf("enter first number: \n");
    scanf("%d", &iValue1);

    printf("enter first number: \n");
    scanf("%d", &iValue2);

    printf("enter first number: \n");
    scanf("%d", &iValue3);

    fRet = Average(iValue1, iValue2, iValue3);

    printf("average is: %f\n", fRet);

    return 0;
}

/*
    Step6               : Test the code

                                TestCase1   :   Input   : 15, 25, 30
                                                Output  : 23.33

                                TestCase2   :   Input   : 45, 60, 45
                                                Output  : 50.00
                                
*/