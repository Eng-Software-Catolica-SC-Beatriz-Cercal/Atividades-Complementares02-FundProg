#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Variáveis
    int numero1, numero2, soma, sub, mult, opc;
    float div;

    // Entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    fflush(stdin);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);
    fflush(stdin);

    system("cls");

    // Menu
    printf("Selecione uma opcao:\n");
    printf("[1] Adicao\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    printf("[5] Fim\n");

    scanf("%d", &opc);
    fflush(stdin);
    system("cls");

    // Processamento
    switch(opc){
        case 1:
            soma = numero1 + numero2;
            printf("Resultado da Soma: %d\n", soma);
            break;

        case 2:
            sub = numero1 - numero2;
            printf("Resultado da Subtracao: %d\n", sub);
            break;

        case 3:
            mult = numero1 * numero2;
            printf("Resultado da Multiplicacao: %d\n", mult);
            break;

        case 4:
            if(numero2 != 0){
                div = (float) numero1 / numero2;
                printf("Resultado da Divisao: %.2f\n", div);
            } else {
                printf("Erro: divisao por zero\n");
            }
            break;

        case 5:
            printf("Programa encerrado.\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}