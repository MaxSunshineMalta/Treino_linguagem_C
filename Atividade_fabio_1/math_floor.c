#include <stdio.h>

int math_floor(int numerador, int denominador){
    int resto, piso;

    resto = numerador % denominador;
    piso = (numerador - resto) / denominador;

    return piso;
}