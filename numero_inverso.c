#include <stdio.h>

int math_floor(int numerador, int denominador){
    int resto, piso;

    resto = numerador % denominador;
    piso = (numerador - resto) / denominador;

    return piso;
}


int calcular_unidade(int numero){
    int unidade;

    unidade = numero % 10;

    return unidade;
}


int calcular_centena(int numero){
    int centena;

    centena = math_floor(numero, 100);

    return centena;
}


int calcular_dezena(int numero){
    int centena, dezena;

    centena = calcular_centena(numero);
    dezena = math_floor((numero - centena * 100), 10);

    return dezena;
}


int main(void){
    int centena, dezena, unidade, numero, numero_inverso;

    printf("Digite um número:");
    scanf("%d", &numero);

    unidade = calcular_centena(numero);
    dezena = calcular_dezena(numero);
    centena = calcular_unidade(numero);
    numero_inverso = 100 * centena + 10 * dezena + unidade;

    printf("O inverso do número %d é o número: %d", numero, numero_inverso);

    return 0;
}