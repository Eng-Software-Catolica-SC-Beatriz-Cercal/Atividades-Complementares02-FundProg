#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Variáveis
    int tipo, opcao1, opcao2;

    // Entrada de dados
    printf("Escolha o tipo:\n");
    printf("1 - Mamiferos;\n");
    printf("1 - Aves;\n");
    printf("1 - Repteis;\n");
    scanf("%d", &tipo);
    fflush(stdin);

    // Entrada de dados
    if (tipo == 1)
    {
        printf("[1] Quadrupede\n");
        printf("[2] Bipede\n");
        printf("[3] Voador\n");
        printf("[4] Aquatico\n");
        scanf("%d", &opcao1);
        fflush(stdin);

        // Processamento e saída de dados
        if (opcao1 == 1)
        {
            printf("[1] Carnivoro\n");
            printf("[2] Herbivoro\n");
            scanf("%d", &opcao2);
            fflush(stdin);

            if (opcao2 == 1)
                printf("Animal: Leao\n");
            else if (opcao2 == 2)
                printf("Animal: Cavalo\n");
        }
        else if (opcao1 == 2)
        {
            printf("[1] Onivoro\n");
            printf("[2] Frutifero\n");
            scanf("%d", &opcao2);
            fflush(stdin);

            if (opcao2 == 1)
                printf("Animal: Homem\n");
            else if (opcao2 == 2)
                printf("Animal: Macaco\n");
        }
        else if (opcao1 == 3)
        {
            printf("Animal: Morcego\n");
        }
        else if (opcao1 == 4)
        {
            printf("Animal: Baleia\n");
        }
        else if (tipo == 2)
        {
            printf("[1] Nao voadoras;\n");
            printf("[2] Nadadoras;\n");
            printf("[3] De rapina.\n");
            scanf("%d", &opcao1);
            fflush(stdin);

            if (opcao1 == 1)
            {
                printf("[1] Tropical\n");
                printf("[2] Polar\n");
                scanf("%d", &opcao2);
                fflush(stdin);

                if (opcao2 == 1)
                    printf("Animal: Avestruz\n");
                else if (opcao2 == 2)
                    printf("Animal: Pinguim\n");
            }
            else if (opcao1 == 2)
            {
                printf("Animal: Pato\n");
            }
            else if (opcao1 == 3)
            {
                printf("Animal: Aguia\n");
            }
        }

        // Processamento e saída de dados
        else if (tipo == 3)
        {
            printf("[1] Com casco;\n");
            printf("[2] Carnivoros\n");
            printf("[3] Sem patas.\n");
            scanf("%d", &opcao1);
            fflush(stdin);

            if (opcao1 == 1)
                printf("Animal: Tartaruga\n");
            else if (opcao1 == 2)
                printf("Animal: Crocodilo\n");
            else if (opcao1 == 3)
                printf("Animal: Cobra\n");
        }

        else
        {
            printf("Opcao invalida!\n");
        }

        return 0;
    }
}