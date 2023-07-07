#include <stdio.h>

float calcular_maior(float a, float b){
    float maior;
    
    maior = a > b ? a : b;

    return maior;
}


int calcular_menor(int a, int b){
    int menor;
    
    menor = a < b ? a : b;

    return menor;
}


int main(void){
    int a, b, maior, menor;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    maior = calcular_maior(a, b);
    menor = calcular_menor(a, b);

    printf("O maior número é o %d\n", maior);
    printf("O menor número é o %d\n", menor);

    return 0;
}



