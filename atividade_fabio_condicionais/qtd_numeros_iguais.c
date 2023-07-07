#include <stdio.h>

int calcular_qtd_de_numeros_iguais(int a, int b, int c){
    if((a == b && a != c)|| (a == c && a != b) || (b == c && b != a)){
        return 2;
    }else if (a == b && a == c){
        return 3;
    }else{
        return 0;
    }
}


int main(void){
    int a, b, c, qtd_de_numeros_iguais;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    printf("Digite o terceiro número:");
    scanf("%d", &c);

    qtd_de_numeros_iguais = calcular_qtd_de_numeros_iguais(a, b, c);

    printf("Existem %d números iguais!!", qtd_de_numeros_iguais);

    return 0;
}