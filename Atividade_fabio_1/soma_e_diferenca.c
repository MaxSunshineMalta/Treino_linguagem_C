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


int main(void){
    int num1, num2, num3, soma, diferenca;

    printf("Primeiro número:");
    scanf("%d", &num1);

    printf("Segundo número:");
    scanf("%d", &num2);

    printf("Terceiro número:");
    scanf("%d", &num3);

    soma = calcular_soma(num1, num2);
    diferenca = calcular_diferenca(num2, num3);

    printf("Os número são: %d, %d e %d\n", num1, num2, num3);
    printf("A soma dos dois primeiros é: %d.Enquanto a diferença é: %d", soma, diferenca);
    
    return 0;
}