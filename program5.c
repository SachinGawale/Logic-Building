//accept a number from user check wether the number is odd or even
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter a number: \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is an even number\n, iValue");
    }
    else
    {
        printf("");
    }
    return 0;
}