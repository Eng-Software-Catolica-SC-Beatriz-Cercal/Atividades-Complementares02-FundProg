#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Variáveis
    float area, ret, tri, circulo, quadrado, trap, base, altura, raio, lado, lado_maior,
    lado_menor;
    int opc;

    // Menu
    printf("Selecione uma opcao:\n");
    printf("[1] Area do retangulo\n");
    printf("[2] Area do triangulo\n");
    printf("[3] Area do circulo\n");
    printf("[4] Area do quadrado\n");
    printf("[5] Area do trapezio\n");
    printf("[6] Sair\n");

    scanf("%d", &opc);
    fflush(stdin);
    system("cls");

    // Processamento
    switch(opc){
        case 1:
            printf("Digite o valor da base: ");
            scanf("%f", &base);
            fflush(stdin);
            printf("Digite o valor da altura: ");
            scanf("%f", &altura);
            fflush(stdin);
            area = base * altura;
            printf ("Area do retangulo: %f/n" ,area);
            break;

        case 2:
            printf("Digite o valor da base: ");
            scanf("%f", &base);
            fflush(stdin);
            printf("Digite o valor da altura: ");
            scanf("%f", &altura);
            fflush(stdin);
            area = (base * altura)/2;
            printf ("Area do triangulo: %f/n" ,area);
            break;

        case 3:
            printf("Digite o valor do raio: ");
            scanf("%f", &raio);
            fflush(stdin);
            area = 2*3.14*raio*raio;
            printf ("Area do circulo: %f/n" ,area);
            break;

        case 4:
            printf("Digite o valor do lado: ");
            scanf("%f", &lado);
            fflush(stdin);
            area = lado * lado;
            printf ("Area do quadrado: %f/n" ,area);
            break;

        case 5:
           printf("Digite o valor da altura: ");
            scanf("%f", &altura);
            fflush(stdin);
            printf("Digite o valor do lado maior: ");
            scanf("%f", &lado_maior);
            fflush(stdin);
            printf("Digite o valor do lado menor: ");
            scanf("%f", &lado_menor);
            fflush(stdin);
            area = (lado_maior + lado_menor)* (altura/2);
            printf ("Area do trapezio: %f/n" ,area);
            break;

        case 6:
        printf("Programa encerrado.\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}