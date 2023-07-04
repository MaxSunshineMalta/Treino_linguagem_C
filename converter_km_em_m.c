#include <stdio.h>

int converter_velocidade_em_m_por_s(int velocidade){
    float velocidade_convertida;

    velocidade_convertida = velocidade / 3.6;

    return velocidade_convertida;
}


int main(void){
    int velocidade_convertida, velocidade;

    printf("Velocidade em Km/h: ");
    scanf("%d", &velocidade);

    velocidade_convertida = converter_velocidade_em_m_por_s(velocidade);

    printf("A velocidade %d Km/h é equivalente a: %d m/s", velocidade, velocidade_convertida);

    return 0;
}