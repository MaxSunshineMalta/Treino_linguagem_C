#include <stdio.h>

int forma_triangulo(int a, int b, int c){
    return a + b + c == 180;
}


int angulos_validos(int a, int b, int c){
    return a > 0 && b > 0 && c > 0;
}


const char* calcular_tipo_de_triangulo(int a, int b, int c){
    if(a < 90 && b < 90 && c < 90){
        return "acutângulo";
    }else if(a == 90 || b == 90 || c == 90){
        return "retângulo";
    }else if(a > 90 || b > 90 || c > 90){
        return "obtusângulo";
    }

    return "desconhecido";
}


int main(void){
    int a, b, c;

    printf("Digite o primeiro ângulo:");
    scanf("%d", &a);

    printf("Digite o segundo ângulo:");
    scanf("%d", &b);

    printf("Digite o terceiro ângulo:");
    scanf("%d", &c);
    
    if(angulos_validos(a, b, c) && (forma_triangulo(a, b, c))){
        const char* tipo;

        tipo = calcular_tipo_de_triangulo(a, b, c);

        printf("O triângulo é %s", tipo);
    }else{
        printf("Não existe triângulo formado!!");
    }

    return 0;
}