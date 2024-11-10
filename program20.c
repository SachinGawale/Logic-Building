/*
    Problem Statement   :   Accept three values from user & display the largest number among them 
*/

/*
    Step1               :   Understand the problem statement
    Conclusion          :   We are going to use conditional statement to get the output
*/

/*
    Step2               :   Write the algorithm
                                Start
                                    Accept three values from user as iValue1, iValue2, iValue3
                                    Create variable as iRet to store the values
                                    Write the condition to check wether the which number is largest
                                    display the result to the user
*/

/*
    Step3               :   Decide programming language :   C Programming language   
*/

/*
    Step4               :   Write the program
*/
#include<stdio.h>

/*
    Function Name       :   Maximum
    Descrition          :   It is used to perform the conditional statement
    Input               :   Integer
    Output              :   Integer
    Author Name         :   Sachin Shantaram Gawale
    Date                :   03/10/2023
*/

int Maximum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

/*
    Entry point function
*/

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    int iRet = 0;

    printf("enter first number: \n");
    scanf("%d", &iValue1);

    printf("enter first number: \n");
    scanf("%d", &iValue2);

    printf("enter first number: \n");
    scanf("%d", &iValue3);

    iRet = Maximum(iValue1, iValue2, iValue3);

    printf("largest is: %d\n", iRet);

    return 0;
}

/*
    Step5                   : Test the code

                              TestCase1 : 
                                            Input   :   45, 50, 60
                                            Output  :   60

                              TestCase2 :   Input   :   20, 10, 75
                                            Output  :   75
                        
*/