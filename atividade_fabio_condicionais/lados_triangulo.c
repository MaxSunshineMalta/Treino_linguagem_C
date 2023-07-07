#include <stdio.h>

int forma_triangulo(int a, int b, int c){
    return a + b >= c && a + c >= b && b + c >= a;
}


int lados_validos(int a, int b, int c){
    return a != 0 && b != 0 && c != 0;
}


const char* calcular_tipo_de_triangulo(int a, int b, int c){
    if(a == b && a == c){
        return "equilátero";
    }else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
        return "isósceles";
    }else if(a != b && a != c){
        return "escaleno";
    }

    return "desconhecido";
}


int main(void){
    int a, b, c;

    printf("Digite o primeiro lado:");
    scanf("%d", &a);

    printf("Digite o segundo lado:");
    scanf("%d", &b);

    printf("Digite o terceiro lado:");
    scanf("%d", &c);
    
    if(lados_validos(a, b, c) && (forma_triangulo(a, b, c))){
        const char* tipo;

        tipo = calcular_tipo_de_triangulo(a, b, c);

        printf("O triângulo é %s", tipo);
    }else{
        printf("Não existe triângulo formado!!");
    }

    return 0;
}