#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to the GRR School\n");

    int cont, students;
    float n, total, average;

    total = 0;
    cont = 1;
    printf("Enter with the number of students in your class\n");
    scanf("%d", &students);
    printf("=============================================\n");
    while(cont <= students){
        printf("Enter with the notes: \n");
        scanf("%f", &n);
        total = total + n;
        cont = cont + 1;
    }
    average = total / students;
    printf("=============================================\n");
    printf("The average of the class is: %.2f", average);

    return 0;
}
