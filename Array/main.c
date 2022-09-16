#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int n[10] = {1,20,300,4000,50000,6000,700,80,9};
    int i;
    int x[SIZE];
    int y;
    printf("%s%13s\n", "Element","Value");
    for(i = 0;i < 10;i++){
        printf("%7d%13d\n", i,n[i]);
    }
    printf("%12s\n","===============///===================");

    for(y = 0;y < SIZE;y++){
        x[y] = 2 + 2 * y;
    }

    printf("%s%13s\n", "Element","Value");

    for(y = 0;y < SIZE;y++){
        printf("%7d%13d\n", y,x[y]);
    }
    return 0;
}
