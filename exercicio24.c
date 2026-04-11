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

    return 0;
}