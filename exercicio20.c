#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    int dia, mes, ano;
    int bissexto = 0;
    int diasNoMes;

    //Entrada de dados
    printf("Digite a data: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    fflush(stdin);

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

    // Define dias do mês
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
        mes == 8 || mes == 10 || mes == 12){
        diasNoMes = 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        diasNoMes = 30;
    }
    else { // fevereiro
        if (bissexto)
            diasNoMes = 29;
        else
            diasNoMes = 28;
    }

    // Validação do dia
    if (dia < 1 || dia > diasNoMes){
        printf("Data invalida\n");
    } else {
        printf("Data valida\n");
    }

    return 0;
}