#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int soma, subtracao, multiplicacao, divisao, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    resto = num1 % num2;

    printf("A soma dos valores �: %d \n" , soma);
    printf("A subtra��o dos valores �:  %d \n", subtracao);
    printf("A multiplica��o dos valores �: %d \n", multiplicacao);
    printf("A divis�o dos valores �: %d \n", divisao);
    printf("O resto da divis�o �: %d \n", resto);

    if(num1 == num2){
        printf("%d � igual a %d \n", num1, num2);
    }
    if(num1 != num2){
        printf("%d n�o � igual a %d \n", num1, num2);
    }
    if(num1 < num2){
        printf("%d � menor a %d \n", num1, num2);
    }
    if(num1 > num2){
        printf("%d � maior a %d \n", num1, num2);
    }
    if(num1 <= num2){
        printf("%d � menor ou igual a %d \n", num1, num2);
    }
    if(num1 >= num2){
        printf("%d � maior ou igual a %d \n", num1, num2);
    }

    return 0;
}
