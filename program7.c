//problem statement: accept two values from user and display their product value
//step1: understand the problem
//conlcusion: we are going to use multiplication formula

//step2: write algorithm

/*      start
            accept two values from user and store them into varibales imulti1, imulti2
            create varibales
            calculate the multiplication formula to get product
            store the product of imulti1 & imulti2 into iproduct variable
*/

/*
//step3: deciding programming language : c programming language
*/

/*
//step4: write the program    
*/

#include<stdio.h>

/*
    function name:  CalculateProduct 
    description  :  it is used to calculate the product
    input        :  integer
    output       :  integer
    author name  :  sachin shantaram gawale
    date         :  03/10/2023
*/

int CalculateProduct(int Value)
{
    int iValue = 0;

    int iProduct = Value * Value;
    return iProduct;
}

/*
    entry point function
*/

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the first value: ");
    scanf("%d", &iValue1);

    printf("Enter the first value: ");
    scanf("%d", &iValue2);

    int mProduct = iValue1 * iValue2;
    int fProduct = CalculateProduct(mProduct);

    printf("Product of two values is: %d\n", mProduct);

    return 0;
}

/*
    step5:  test the code: 
                            testcase1: 
                                        input  : 5, 3
                                        output : 15

                            testcase1: 
                                        input  : 15, 5
                                        output : 75
*/