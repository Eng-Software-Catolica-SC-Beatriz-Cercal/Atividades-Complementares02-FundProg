#include <stdio.h>

int main(void){
    int temperatura;

    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura >= 1000){
        printf("Valor invalido (deve ser menor que 1000)\n");
    }
    else if (temperatura <= 500){
        printf("Temperatura Invalida\n");
    }
    