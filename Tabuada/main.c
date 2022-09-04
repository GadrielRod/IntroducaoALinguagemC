#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int result;
    printf("Enter with a valor to the m \n");
    scanf("%d", &x);
    for(y = 0;y < 11; y++ ){
        result = y * x;
        printf("valor %d\n", result);
    }
    return 0;
}
