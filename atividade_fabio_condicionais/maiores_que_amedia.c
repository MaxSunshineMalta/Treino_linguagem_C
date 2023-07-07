#include <stdio.h>

int calcular_somatorio(int a, int b, int c, int d, int e){
    return a + b + c + d + e;
}


int calcular_media(int somatorio){
    int media; 

    media = somatorio / 5;

    return media;
}


const char* eh_maior_que_a_media(int media, int numero){
    if(numero > media){
        return "é";
    }

    return "não é";
}

int main(void){
    int a, b, c, d, e, somatorio, media;
    const char* situacao_a;
    const char* situacao_b;
    const char* situacao_c;
    const char* situacao_d;
    const char* situacao_e;

    printf("Digite o primeiro número:");
    scanf("%d", &a);

    printf("Digite o segundo número:");
    scanf("%d", &b);

    printf("Digite o terceiro número:");
    scanf("%d", &c);

    printf("Digite o quarto número:");
    scanf("%d", &d);

    printf("Digite o quinto número:");
    scanf("%d", &e);

    somatorio= calcular_somatorio(a, b , c, d, e);
    media = calcular_media(somatorio);
    situacao_a = eh_maior_que_a_media(media, a);
    situacao_b = eh_maior_que_a_media(media, b);
    situacao_c = eh_maior_que_a_media(media, c);
    situacao_d = eh_maior_que_a_media(media, d);
    situacao_e = eh_maior_que_a_media(media, e);

    printf("Média: %d\n", media);
    printf(">> o número %d %s maior que a média!!\n", a, situacao_a);
    printf(">> o número %d %s maior que a média!!\n", b, situacao_b);
    printf(">> o número %d %s maior que a média!!\n", c, situacao_c);
    printf(">> o número %d %s maior que a média!!\n", d, situacao_d);
    printf(">> o número %d %s maior que a média!!\n", e, situacao_e);


    return 0;
}