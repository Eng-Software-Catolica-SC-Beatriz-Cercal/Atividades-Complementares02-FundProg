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
    n100 = valor / 100;
    resto = valor % 100;

    n50 = resto / 50;
    resto = resto % 50;

    n10 = resto / 10;
    resto = resto % 10;

    n5 = resto / 5;
    resto = resto % 5;

    n1 = resto;

    // Saída de dados
    printf("\nNotas fornecidas:\n");

    if(n100 > 0)
        printf("%d notas de 100\n", n100);

    if(n50 > 0)
        printf("%d notas de 50\n", n50);

    if(n10 > 0)
        printf("%d notas de 10\n", n10);

    if(n5 > 0)
        printf("%d notas de 5\n", n5);

    if(n1 > 0)
        printf("%d notas de 1\n", n1);
        
    return 0;
}