#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int numero1, numero2, numero3, ordem;
    //Quais são as entradas de dados?
    printf("Digite um numero inteiro:");
    scanf("%d", &numero1);
    fflush(stdin);
     printf("Digite outro numero inteiro:");
    scanf("%d", &numero2);
    fflush(stdin);
     printf("Digite o ultimo numero inteiro:");
    scanf("%d", &numero3);
    fflush(stdin);
    //Processamento e saída de dados:
    if (numero1 > numero2){ //Condicional If
        ordem = numero1;
        numero1 = numero2;
        numero2 = ordem; //Mudança para ordem crescente
    }

    if (numero1 > numero3){//Conidicional If
        ordem = numero1;
        numero1 = numero3;
        numero3 = ordem;
    }

    if (numero2 > numero3){//Condicional if
        ordem = numero2;
        numero2 = numero3;
        numero3 = ordem;
    }
    printf("Ordem crescente: %d %d %d\n",numero1, numero2, numero3);


    return 0;
}