#include <stdio.h>

int calcular_minutos_restantes(int minutos){
    int minutos_restantes;

    minutos_restantes = minutos % 60;

    return minutos_restantes;
}


int converter_minutos_em_horas(int minutos){
    int minutos_convertidos, minutos_restantes;

    minutos_restantes = calcular_minutos_restantes(minutos);
    minutos_convertidos = (minutos - minutos_restantes) / 60;

    return minutos_convertidos;
}


int main(void){
    int minutos, horas, minutos_restantes;

    printf("Quantidade de minutos:");

    scanf("%d", &minutos);

    horas = converter_minutos_em_horas(minutos);
    minutos_restantes = calcular_minutos_restantes(minutos);

    printf("Em %d minutos, há %d horas e %d minutos\n", minutos, horas, minutos_restantes);

    return 0;
}