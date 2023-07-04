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
    int centena, dezena, unidade, numero, soma;

    printf("Digite um número:");
    scanf("%d", &numero);

    centena = calcular_centena(numero);
    dezena = calcular_dezena(numero);
    unidade = calcular_unidade(numero);
    soma = centena + dezena + unidade;

    printf("Soma dos algarismos do número %d é: %d\n", numero, soma);

    return 0;
}


