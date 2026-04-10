#include <stdio.h>

int main(void){
    //Variáveis
    int numero;
    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%i", &numero);
     fflush(stdin);
    //Processamento e saída de dados
    if (numero % 2 == 0){
        printf("O numero era par: %i\n", numero);
        printf("Agora ele e impar: %i\n", numero + 1);
    } else {
        printf("O numero era impar: %i\n", numero);
        printf("Agora ele e par: %i\n", numero - 1);
    }

    return 0;
}