#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int a[SIZE] = {1,2,3,6,4,0,45,66,55,33};
    int pass;
    int noPass;
    int i;
    int hold;

    printf("Items out of order\n");

    for(i = 0;i < SIZE; i++){
        printf("%4d", a[i]);
    }

    for(pass = 1; pass < SIZE; pass++){
        for(i = 0; i < SIZE - 1; i++){
            if(a[i] > a[i + 1]){
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }

    printf("\nItems in ascending order\n");
        for(i = 0; i < SIZE; i++){
            printf("%4d", a[i]);
    }

    for(pass = 1; pass < SIZE; pass++){
        for(i = 0; i < SIZE - 1; i++){
            if(a[i] < a[i + 1]){
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }

    printf("\nItems in descending order\n");
        for(i = 0; i < SIZE; i++){
            printf("%4d", a[i]);
    }
    return 0;
}
