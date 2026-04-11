#include <stdio.h>

int main(void){
    //Variáveis
    int infeccao, temp, coriza, espirro;
    int total;

    //Entrada de dados
    printf("Infeccao nos pulmoes (0-nao / 1-sim): ");
    scanf("%d", &infeccao);

    printf("Temperatura (0-normal / 1-anormal): ");
    scanf("%d", &temp);

    printf("Coriza (0-nao / 1-sim): ");
    scanf("%d", &coriza);

    
    return 0;
}