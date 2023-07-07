#include <stdio.h>

const char* eh_primo(int numero){
    if(numero == 2 || numero == 3 || numero == 5 || numero == 7){
        return "é";
    }else if(numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0 && numero % 7 != 0){
        return "é";
    }else if(numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0){
        return "não é";
    }

    return "";
}


int main(void){
    int numero;
    const char* classificacao;

    printf("Digite o número:");
    scanf("%d", &numero);

    classificacao = eh_primo(numero);

    printf("O número %d %s primo!!", numero, classificacao);

    return 0;
}