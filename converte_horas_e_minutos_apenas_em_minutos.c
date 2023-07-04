#include <stdio.h>

int converter_horas_em_minutos(int horas){
    int horas_convertidas;

    horas_convertidas = horas * 60;

    return horas_convertidas;
}


int calcular_minutos_totais(int horas_convertidas, int minutos){
    int minutos_totais;

    minutos_totais = horas_convertidas + minutos;

    return minutos_totais;
}


int main(void){
    int horas, horas_convertidas, minutos, minutos_totais;

    printf("Quantidade de horas:");

    scanf("%d", &horas);

    printf("Quantidade de minutos:");

    scanf("%d", &minutos);

    horas_convertidas = converter_horas_em_minutos(horas);

    minutos_totais = calcular_minutos_totais(horas_convertidas, minutos);


    printf("Quantidade Total de minutos: %d minutos", minutos_totais);

    return 0;
}