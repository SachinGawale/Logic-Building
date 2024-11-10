// 

#include<stdio.h>

int main()
{
    int iId = 0;
    int iPassword = 0;

    printf("Enter a id\t");
    scanf("%d", &iId);

    switch(iId)
    {
        case 7350:
            printf("Enter your password..\t");
            scanf("%d", &iPassword);

                switch (iPassword)
         
                {
                case 1414:
                    printf("Welcome to the SBI India..");
                    break;
                
                default:
                    printf("Wrong password..");
                    break;
                }
        break;

        default:
            printf("Incorrect ID..");
            break;
    }
}