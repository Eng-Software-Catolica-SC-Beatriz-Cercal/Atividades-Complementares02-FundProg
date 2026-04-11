#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    int ano;

    //Entrada de dados
    printf("Digite um ano: ");
    scanf("%d", &ano);
     fflush(stdin);
     //Processamento e saída
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("Ano bissexto\n");
    } else {
        printf("Nao e bissexto\n");
    }
    return 0;
}