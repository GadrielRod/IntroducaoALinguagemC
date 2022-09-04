#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    float average;

    printf("Welcome to the American School\n");

    printf("Enter with the N1 \n");
    scanf("%f", &n1);
    printf("Enter with the N2 \n");
    scanf("%f", &n2);
    printf("Enter with the N3 \n");
    scanf("%f", &n3);

    average = (n1 + n2 + n3) / 3;

    if(average >= 9.7){
        printf("Student approved \n A+");
    }else if(average >= 9.3)
    {
        printf("Student approved \n A-");
    }
    else if(average >= 9)
    {
        printf("Student approved \n A");
    }
    else if(average >= 8.7)
    {
        printf("Student approved \n B+");
    }
    else if(average >= 8.3)
    {
        printf("Student approved \n B-");
    }
    else if(average >= 8)
    {
        printf("Student approved \n B");
    }
    else if(average >= 7.7)
    {
        printf("Student approved \n C+");
    }
    else if(average >= 7.3)
    {
        printf("Student approved \n C-");
    }
    else if(average >= 7)
    {
        printf("Student approved \n C");
    }
    else if(average >= 6.7)
    {
        printf("Student approved \n D+");
    }
    else if(average >= 6.3)
    {
        printf("Student approved \n D-");
    }
    else if(average >= 6)
    {
        printf("Student approved \n D");
    }else{
        printf("Student not approved \n F");
    }

    return 0;
}
