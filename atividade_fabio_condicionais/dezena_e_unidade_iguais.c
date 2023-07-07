#include <stdio.h>

int math_floor(int numerador, int denominador){
    int resto, piso;

    resto = numerador % denominador;
    piso = (numerador - resto) / denominador;

    return piso;
}

int calcular_dezena(int numero){
    int dezena;

    dezena = math_floor(numero, 10);

    return dezena;
}


int calcular_unidade(int numero){
    int unidade;

    unidade = numero % 10;

    return unidade;
}


const char* verificar_situacao(int unidade, int dezena){
    if(unidade == dezena){
        return "iguais";
    }else{
        return "diferentes";
    }
}



int main(void){
    int numero, dezena, unidade;
    const char* situacao;

    printf("Digite o número:");
    scanf("%d", &numero);

    unidade = calcular_unidade(numero);
    dezena = calcular_dezena(numero);
    situacao = verificar_situacao(unidade, dezena);

    printf("As dezenas e unidades do número %d são %s", numero, situacao);

    return 0;
}