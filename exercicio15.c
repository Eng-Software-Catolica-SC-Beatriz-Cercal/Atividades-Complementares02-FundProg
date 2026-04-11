#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Variáveis
    float preco_custo;
    int opc;
    
    //Entrada de Dados
    printf("Digite o preco de custo: ");
    scanf("%f", &preco_custo);
    fflush(stdin);

    // Menu
    printf("Selecione a procedencia do produto:\n");
    printf("[1] Sul\n");
    printf("[2] Norte\n");
    printf("[3] Leste\n");
    printf("[4] Oeste\n");
    printf("[5] Nordeste\n");
    printf("[6] Nordeste\n");
    printf("[7] Centro-Oeste\n");
    printf("[8] Centro-Oeste\n");

    scanf("%d", &opc);
    fflush(stdin);
    system("cls");

    // Processamento
    switch(opc){
        case 1:
            printf("Preco:%.2f\n ",preco_custo);
            printf("Procedencia: Sul ");
            break;

        case 2:
            printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Norte ");
            break;

        case 3:
           printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Leste ");
            break;

        case 4:
            printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Oeste ");
            break;

        case 5:
           printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Nordeste ");
            break;

        case 6:
        printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Nordeste ");
            break;

        case 7:
        printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Centro-Oeste ");
            break;
        
         case 8:
        printf("Preco: %.2f\n ",preco_custo);
            printf("Procedencia: Centro-Oeste ");
            break;

        default:
            printf("Produto Importado.\n");
             printf("Preco: %.2f\n",preco_custo);
    }

    return 0;
}