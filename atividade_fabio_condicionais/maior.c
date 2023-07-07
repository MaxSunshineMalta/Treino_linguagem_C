#include <stdio.h>

int calcular_maior(int a, int b, int c){
    int maior;

    if((a > b && a > c) || (a == b && a > c) || (a == c && a > b)){
        maior = a;
        return maior;
    }else if((b > a && b > c) || (b == c && b > a)){
        maior = b;
        return maior;
    }else if(c > a && c > b){
        maior = c;
        return maior;
    }else if(a == b && a == c){
        maior = a; 
        return a;
    }

    return 0;
}


int main(void){
    int a, b, c, maior;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    printf("Digite o terceiro número:");
    scanf("%d", &c);

    maior = calcular_maior(a, b, c);

    printf("O maior número é o %d", maior);

    return 0;
}