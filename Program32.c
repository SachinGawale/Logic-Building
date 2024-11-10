/*
    Program to accept coordinates point in an xy co-ordinate system & determine in which quadrant the co-ordinate point lies
*/

/*
    Step1       :   Understand the problem
    Conclusion  :   We have to use if else condition to check where the points lies in xy co-ordinate
*/

/*
    Step2       :   Write the algorithm
                    Start
                        Create two variables to store input from keyboard
                        Read input from keyboard
                        Write if else condition to check where point lies
                        Display output to the console
                    Stop
*/

/*
    Step3       :   Decide programming language
                :   We have selected C Programming langauge
*/

/*
    Step4       :   Write the program
*/

#include<stdio.h>

/*
    Function Name   :   DisplayPoint
    Conclusion      :   It is used to perform if else condition to check where points lies
    Input           :   Integer
    Output          :   String
    Author Name     :   Sachin Shantaram Gawale
    Date            :   06/10/2023
*/

void DisplayPoint(int x, int y)
{
    if(x > 0 && y > 0)
    {
        printf("Points (%d %d) lies in first qudrant..", x, y);
    }
    else if(x < 0 && y > 0)
    {
        printf("Points (%d %d) lies in second qudrant..", x, y);
    }
    else if(x < 0 && y < 0)
    {
        printf("Points (%d %d) lies in third qudrant..", x, y);
    }
    else if(x > 0 && y < 0)
    {
        printf("Points (%d %d) lies in fourth qudrant..", x, y);
    }
    else if(x == 0 && y == 0)
    {
        printf("Points (%d %d) lies on the origin..", x, y);
    }
}

/*
    Entry point function
*/

int main()
{
    int iCo1 = 0;
    int iCo2 = 0;

    printf("Enter the points: ");
    scanf("%d %d", &iCo1, &iCo2);

    DisplayPoint(iCo1, iCo2);

    return 0;
}

/*
    Step5       :   Test the code   :   TestCase1   :   Input   :   7, 5
                                                        Output  :   First quadrant

                                        TestCase2   :   Input   :   4, -3
                                                        Output  :   Second quadrant

                                        TestCase3   :   Input   :   -2, -4
                                                        Output  :   Third Quadrant

                                        TestCase4   :   Input   :   -3, 5
                                                        Output  :   Fourth Quadrant

                                        TestCase5   :   Input   :   0, 0
                                                        Output  :   On the origin 

*/