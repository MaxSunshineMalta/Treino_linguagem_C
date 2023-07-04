#include <stdio.h>

int math_floor(int numerador, int denominador){
    int resto, piso;

    resto = numerador % denominador;
    piso = (numerador - resto) / denominador;

    return piso;
}


int calcular_quociente(int numerador, int denominador){
    int quociente;

    quociente = math_floor(numerador, denominador);

    return quociente;
}


int calcular_resto(int numerador, int denominador){
    int resto;

    resto = numerador % denominador;

    return resto;
}


int main(void){
    int num1, num2;
    float quociente, resto;

    printf("Primeiro número:");
    scanf("%d", &num1);

    printf("Segundo número:");
    scanf("%d", &num2);

    quociente = calcular_quociente(num1, num2);
    resto = calcular_resto(num1, num2);

    printf("O Quociente é igual a: %3.2f. E o resto é igual a: %3.2f", quociente, resto);

    return 0;
}