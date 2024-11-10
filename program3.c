//problem stmt: accept radius from user and calculate area of circle
//step1: understand problem stmt
//conclusion: we are going to use the formula as PI*R*R

//step2: Algorithm
/*
    start
        accept radius from user and store into RADIUS
        create varibale as PI and store value 3.14
        calculate area PI * RADIUS * RADIUS
        Display the value of area to the user
    stop    
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//function name: calculateArea
//description:it is used to calculate area of circle
//input: float
//output:float
//author name:sachin s gawale 
//date: 02/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////

//also we can use user define macro
// #define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto float PI = 3.14f; //use const keyword to make values as constant

    fAns = PI * fValue * fValue;
    return fAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//entry point function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea =  0.0f;

    printf("enter the radius of circle: \n");
    scanf("%f", &fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of circle : %f\n", &fArea);
}