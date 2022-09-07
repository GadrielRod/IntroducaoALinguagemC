#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 1;
    srand(time(NULL));

    do{
        printf(" Number %d = %2d\n", num, rand() % 10);
    }while(++num <= 10);
    return 0;
}
