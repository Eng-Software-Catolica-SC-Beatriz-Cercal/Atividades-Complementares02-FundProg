#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    int tipo, opcao1, opcao2;

    //Entrada de dados
    printf("Escolha o tipo:\n");
    printf("1 - Mamiferos;\n");
    printf("1 - Aves;\n");
    printf("1 - Repteis;\n");
    scanf("%d", &tipo);
    fflush(stdin);

    //Entrada de dados
    if(tipo == 1){
        printf("[1] Quadrupede\n");
        printf("[2] Bipede\n");
        printf("[3] Voador\n");
        printf("[4] Aquatico\n");
        scanf("%d", &opcao1);
        fflush(stdin);

        //Processamento e saída de dados
        if(opcao1 == 1){
            printf("[1] Carnivoro\n");
            printf("[2] Herbivoro\n");
            scanf("%d", &opcao2);
            fflush(stdin);

            if(opcao2 == 1)
                printf("Animal: Leao\n");
            else if(opcao2 == 2)
                printf("Animal: Cavalo\n");
        }
        else if(opcao1 == 2){
            printf("[1] Onivoro\n");
            printf("[2] Frutifero\n");
            scanf("%d", &opcao2);
            fflush(stdin);

            if(opcao2 == 1)
                printf("Animal: Homem\n");
            else if(opcao2 == 2)
                printf("Animal: Macaco\n");
        }
        else if(opcao1 == 3){
            printf("Animal: Morcego\n");
        }
        else if(opcao1 == 4){
            printf("Animal: Baleia\n");
        }
    }

  
    return 0;
}