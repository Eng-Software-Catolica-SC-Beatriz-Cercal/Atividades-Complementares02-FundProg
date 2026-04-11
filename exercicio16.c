#include <stdio.h>
#include <stdlib.h>


int main(void){
    //Variáveis
    int temperatura;

    //Entrada de dados
    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);
    fflush(stdin);


    //Processamento e saída de dados
    if (temperatura >= 1000){
        printf("Valor invalido (deve ser menor que 1000)\n");
    }
    else if (temperatura <= 500){
        printf("Temperatura Invalida\n");
    }else if (temperatura > 780){
        printf("SUPERAQUECIMENTO\n");
    }
    else if (temperatura >= 735){
        printf("Aquecimento Desligado\n");
    }
    else if (temperatura >= 700){
        printf("Aquecimento Ligado em 50%%\n");
    }
    else { 
        printf("Aquecimento Ligado em 100%%\n");
    }

    return 0;
}
    