#include <stdio.h>

//Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)

float converte_velocidade(float velocidade){
    float velocidade_convertida;

    velocidade_convertida = velocidade * 3.6;

    return velocidade_convertida;
}


int main(void){
    float velocidade;
    float velocidade_convertida;

    printf("Digite a velocidade em m/s:");

    scanf("%f", &velocidade);

    velocidade_convertida = converte_velocidade(velocidade);

    printf("A velocidade em Km/h é: %f\n", velocidade_convertida);

    return 0;
}