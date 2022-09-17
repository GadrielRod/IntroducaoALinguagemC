#include <stdio.h>
#include <stdlib.h>
#define SIZE 12
int main()
{
    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int i;
    int total = 0;

    for(i = 0;i < SIZE; i++){
        total += a[i];
    }

    printf("Total values of elements array is %d\n", total);

    total = 0;
    for(i = 0;i < SIZE; i++){
        total -= a[i];
    }
    printf("Total values of elements array is %d\n", total);

    total = 1;
    for(i = 0;i < SIZE; i++){
        total *= a[i];
    }
    printf("Total values of elements array is %d\n", total);

    return 0;
}
