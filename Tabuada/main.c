#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int result;
    printf("Qual é a tabuada: \n");
    scanf("%d", &x);
    for(y = 0;y < 11; y++ ){
        result = y * x;
        printf("%2d x %1d = %2d\n", y, x, result);
    }
    return 0;
}
