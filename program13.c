#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >= 0) && (fMarks < 35.00))
    {
        printf("You are fail..\n");
    }
    else if ((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("You class is passclass..\n");
    }
    else if ((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("You class is first class..\n");
    }
    else if ((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is distinction..\n");
    }
    
    
    
}

int main()
{
    float fValue = 0.0f;

    printf("Enter your percentage: \n");
    scanf("%f", &fValue);

    DisplayClass(fValue);

    return 0;
}