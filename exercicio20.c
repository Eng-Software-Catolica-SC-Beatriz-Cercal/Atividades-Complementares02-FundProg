#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dia, mes, ano;
    int bissexto = 0;
    int diasNoMes;

    printf("Digite a data: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    //Processamento
    if (ano <= 0){
        printf("Data invalida\n");
        return 0;
    }

    if (mes < 1 || mes > 12){
        printf("Data invalida\n");
        return 0;
    }

    //ano bissexto
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        bissexto = 1;
    }

   
    return 0;
}