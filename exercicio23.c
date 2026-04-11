#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    int valor;
    int n100, n50, n10, n5, n1;
    int resto;

    //Entrada de dados
    printf("Digite o valor do saque (10 a 600): ");
    scanf("%d", &valor);
    fflush(stdin);

    // Processamento e saída de dados
    if(valor < 10 || valor > 600){
        printf("Valor invalido!\n");
        return 0;
    }

    

    return 0;
}