#include <stdio.h>

int main()
{
    int inteiro1;
    int inteiro2;
    int soma;
    int subtracao;

    printf("Digite o primeiro valor inteiro \n");
    scanf("%d", &inteiro1);

    printf("Digite o segundo valor inteiro \n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;
    subtracao = inteiro1 - inteiro2;

    printf("A soma � %d \n", soma);
    printf("A subtra��o � %d \n", subtracao);

    return 0;
}
