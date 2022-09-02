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

    printf("A soma dos valores é: %d \n" , soma);
    printf("A subtração dos valores é:  %d \n", subtracao);
    printf("A multiplicação dos valores é: %d \n", multiplicacao);
    printf("A divisão dos valores é: %d \n", divisao);
    printf("O resto da divisão é: %d \n", resto);

    if(num1 == num2){
        printf("%d é igual a %d \n", num1, num2);
    }
    if(num1 != num2){
        printf("%d não é igual a %d \n", num1, num2);
    }
    if(num1 < num2){
        printf("%d é menor a %d \n", num1, num2);
    }
    if(num1 > num2){
        printf("%d é maior a %d \n", num1, num2);
    }
    if(num1 <= num2){
        printf("%d é menor ou igual a %d \n", num1, num2);
    }
    if(num1 >= num2){
        printf("%d é maior ou igual a %d \n", num1, num2);
    }

    return 0;
}
