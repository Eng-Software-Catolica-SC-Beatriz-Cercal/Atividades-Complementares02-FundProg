#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int numero;
    float inteiro;
    //Quais são as entradas de dados?
    printf("Digite um número:");
    scanf("%f", &inteiro);
    fflush(stdin);
    //Processamento e saída de dados:
    numero = (int)inteiro;

    if (inteiro == numero){ //Condicional IF
        printf("O numero e inteiro");
    }else{ //If/Else
        printf("O numero e quebrado");
    }
    return 0;
}