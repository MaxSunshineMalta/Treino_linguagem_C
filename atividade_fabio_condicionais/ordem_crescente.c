#include <stdio.h>

int calcular_maior_valor(int a, int b, int c){
    int maior = a;

    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    
    return maior;
}

int calcular_valor_do_meio(int a, int b, int c){
    int valor_do_meio;

    if ((a > b && a < c) || (a < b && a > c))
        valor_do_meio = a;
    else if ((b > a && b < c) || (b < a && b > c))
        valor_do_meio = b;
    else
        valor_do_meio = c;

    return valor_do_meio;
}

int calcular_menor_valor(int a, int b, int c){
    int menor = a;

    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }

    return menor;
}

int main(void){
    int a, b, c, maior_valor, valor_do_meio, menor_valor;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    printf("Digite o terceiro número:");
    scanf("%d", &c);

    maior_valor = calcular_maior_valor(a, b, c);
    valor_do_meio = calcular_valor_do_meio(a, b, c);
    menor_valor = calcular_menor_valor(a, b, c);

    printf("\nO maior valor é o número %d\n", maior_valor);
    printf("O valor do meio é o número %d\n", valor_do_meio);
    printf("O menor valor é o número %d\n", menor_valor);

    return 0;
}
