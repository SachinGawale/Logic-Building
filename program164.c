#include<stdio.h>
#include<conio.h>

int main()
{
    struct student
    {
        int iRollNo;
        char cName[20];
        char cCourse[20];
        float fFees;
    };

    printf("Enter your roll number : ");
    scanf("%d", &student.iRollNo);

    printf("Enter your name : ");
    scanf("%d", &student.cName);

    printf("Enter your stream : ");
    scanf("%d", &student.cCourse);

    printf("Enter your fee : ");
    scanf("%d", &student.fFees);

    printf("--------------------------students details-------------------------\n");
    printf("ur roll number is : %d\n", student.iRollNo);
    printf("ur roll number is : %d\n", student.cName);
    printf("ur roll number is : %d\n", student.cCourse);
    printf("ur roll number is : %d\n", student.fFees);

    return 0;

}
