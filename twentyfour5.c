/*  Accept division of student from user & depends on the division display exam timing.
    There are four divisions in school as A,B,C,D. Exam of division A at 7AM, B at 8.30AM,
    C at 9.20AM & D at 10.30AM.
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM");
            break;
        
        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM");
            break;
        
        default:
            printf("Invalid input..");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}