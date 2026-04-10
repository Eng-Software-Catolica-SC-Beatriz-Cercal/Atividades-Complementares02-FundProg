#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int numero;
    //Quais são as entradas de dados?
    printf("Digite um número:");
    scanf("%i", &numero);
    fflush(stdin);
    //Processamento e saída de dados:
    if (numero%2 == 0){ //Condicional IF
        printf("O numero e par");
    }else{ //If/Else
        printf("O numero e impar");
    }
    return 0;
}