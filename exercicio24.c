#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    int num;
    int c, d, u;
    int resto;

    //Entrada de dados
    printf("Digite um numero menor que 1000: ");
    scanf("%d", &num);
    fflush(stdin);

    // Processamento e saída de dados
    if(num < 0 || num >= 1000){
        printf("Numero invalido!\n");
        return 0;
    }

    // Processamento
    c = num / 100;
    resto = num % 100;

    d = resto / 10;
    u = resto % 10;

    // Saída de dados
    printf("\n%d centenas, %d dezenas e %d unidades\n", c, d, u);

    return 0;
}