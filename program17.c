/*
    Problem statement   :   Accept two values from user and display the maximum
*/

/*
    Step1               :   Understand the problem
    Conclusion          :   We are going to use conditional statement (selection paradigm)
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept two values from user as iValue1 and iValue2
                                    Create variable as iRet to store the values
                                    Write the conditional statement (selection)
                                    Display the result to the user
*/

#include<stdio.h>

/*
    Fumction Name       :   Maximum
    Description         :   It is used to perform selction statement
    Input               :   Integer
    Output              :   Integer
    Author Name         :   Sachin Shnataram Gawale
    Date                :   03/10/2023
*/

int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

/*
    Entry Point Function
*/

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("enter first number: \n");
    scanf("%d", &iValue1);

    printf("enter second number: \n");
    scanf("%d", &iValue2);

    iRet = Maximum(iValue1, iValue2);

    printf("largest number is: %d\n", iRet);

    return 0;
}

/*
    Step5               :   Test the code   :
                                            TestCase    :   Input   :   45, 20
                                                            Output  :   45

                                            TestCase    :   Input   :   10, 50
                                                        :   Output  :   50                
*/