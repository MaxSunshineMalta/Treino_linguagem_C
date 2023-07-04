#include <stdio.h>

float converter_dolar_para_real(float valor_do_dolar, float valor_em_dolar){
    float dolar_convertido;

    dolar_convertido = valor_do_dolar * valor_em_dolar;

    return dolar_convertido;
}


int main(void){
    float valor_do_dolar, valor_em_dolar, valor_em_reais;

    printf("Digite o valor do dólar:");
    scanf("%f", &valor_do_dolar);

    printf("Digite o valor em dólar:");
    scanf("%f", &valor_em_dolar);

    valor_em_reais = converter_dolar_para_real(valor_do_dolar, valor_em_dolar);

    printf("Valor: R$ %f", valor_em_reais);

    return 0;
}