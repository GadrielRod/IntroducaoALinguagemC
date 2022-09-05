#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello to the system of sales bonus\n");
    printf("The sales target is 60 per cent\n");
    int metGoal = 0;
    int unfulfilledGoal = 0;
    int sellers, qnt, goal, result;

    printf("What is the number of sellers: \n");
    scanf("%d", &sellers);
    goal = sellers * 60/100;
    printf("The goal is greater than: %d \n", goal);
    printf("===========================================\n");

    while(qnt < sellers){

    printf("Type (1) to approved or (2) to not approved: \n");
    scanf("%d", &result);

    if(result == 1){
        metGoal = metGoal + 1;
    }else{
        unfulfilledGoal = unfulfilledGoal + 1;
    }
    qnt = qnt + 1;
    }
    printf("=============================================\n");
    printf("Met the goal: %d \n", metGoal);
    printf("Did not the goal: %d \n", unfulfilledGoal);

    if(metGoal > goal){
        printf("Bonus for sellers");
    }else{
        printf("No bonus for sellers");
    }
    return 0;
}
