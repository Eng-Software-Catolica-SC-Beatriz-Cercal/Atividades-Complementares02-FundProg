#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    int opcao;
    float valor, resultado;

    //Entrada de dados
    printf("Escolha a conversao:\n");
    printf("[1] metros para cm\n");
    printf("[2] cm para metros\n");
    printf("[3] dias para horas\n");
    printf("[4] horas para dias\n");
    printf("[5] km/h para milhas/h\n");
    printf("[6] milhas/h para km/h\n");
    printf("[7] Celsius para Fahrenheit\n");
    printf("[8] Fahrenheit para Celsius\n");
    printf("[9] Kg para arroba\n");
    printf("[10] arroba para Kg\n");
    printf("[11] polegada para cm\n");
    printf("[12] cm para polegada\n");
    printf("[13] palmo para cm\n");
    printf("[14] cm para palmo\n");
    printf("[15] pe para cm\n");
    printf("[16] cm para pe\n");
    printf("[17] no para km/h\n");
    printf("[18] km/h para no\n");
    printf("[19] covado para cm\n");
    printf("[20] cm para covado\n");
    scanf("%d", &opcao);
    fflush(stdin);

    //Entrada de dados
    printf("Digite o valor: ");
    scanf("%f", &valor);
    fflush(stdin);

    switch(opcao){

        //Processamento
        case 1: resultado = valor * 100; break;
        case 2: resultado = valor / 100; break;
        case 3: resultado = valor * 24; break;
        case 4: resultado = valor / 24; break;
        case 5: resultado = valor / 1.684; break;
        case 6: resultado = valor * 1.684; break;
        case 7: resultado = (valor * 9/5) + 32; break;
        case 8: resultado = (valor - 32) * 5/9; break;
        case 9: resultado = valor / 15; break;
        case 10: resultado = valor * 15; break;
        case 11: resultado = valor * 2.75; break;
        case 12: resultado = valor / 2.75; break;
        case 13: resultado = valor * 22; break;
        case 14: resultado = valor / 22; break;
        case 15: resultado = valor * 33; break;
        case 16: resultado = valor / 33; break;
        case 17: resultado = valor * 1.852; break;
        case 18: resultado = valor / 1.852; break;
        case 19: resultado = valor * 66; break;
        case 20: resultado = valor / 66; break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    //Saída de dados
    printf("Resultado: %.2f\n", resultado);

    return 0;
}