#include <stdio.h>

int dia_valido(int dia){
    return dia <=31 && dia >=1;
}


int mes_valido(int mes){
    return mes <= 12 && mes >= 1;
}


int main(void){
    int dia, mes, ano;

    printf("Digite o dia:");
    scanf("%d", &dia);

    printf("Digite o mês:");
    scanf("%d", &mes);

    printf("Digite o ano:");
    scanf("%d", &ano);

    if(dia_valido(dia) && mes_valido(mes)){
        printf("A data %d/%d/%d é válida!!", dia, mes, ano);
    }else{
        printf("A data %d/%d/%d é inválida!!", dia, mes, ano);
    }

    return 0;
}