#include <stdio.h>

int calcular_soma(int valor1, int valor2){
    int soma;

    soma = valor1 + valor2;

    return soma;
}


int calcular_diferenca(int valor1, int valor2){
    int diferenca;

    diferenca = valor1 - valor2;

    return diferenca;
}


int calcular_divisao(int valor1, int valor2){
    float divisao;

    divisao = valor1 / valor2;

    return divisao;
}


int main(void){
    int num1, num2, soma, diferenca;
    float divisao;

    printf("Primeiro número:");
    scanf("%d", &num1);

    printf("Segundo número:");
    scanf("%d", &num2);

    soma = calcular_soma(num1, num2);
    diferenca = calcular_diferenca(num1, num2);
    divisao = calcular_divisao(soma, diferenca);

    printf(" A divisão da soma %3.2d pela diferença %3.2d é: %3.2f\n", soma, diferenca, divisao);

    return 0;
}