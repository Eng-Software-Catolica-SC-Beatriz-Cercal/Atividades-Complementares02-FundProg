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

    printf("Espirros (0-nao / 1-sim): ");
    scanf("%d", &espirro);

    //Processamento e saída
    if (infeccao == 1 && temp == 1){
        printf("Diagnostico: Pneumonia\n");
    }
    else {
        //Processamento
        total = infeccao + temp + coriza + espirro;

        if (total == 1){
            printf("Diagnostico: Resfriado\n");
        }
        else if (total >= 2){
            printf("Diagnostico: Gripe\n");
        }
        else {
            printf("Sem sintomas suficientes\n");
        }
    }

    return 0;
}