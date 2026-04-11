#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Variáveis
    float a,b,c;
    float delta, x1, x2;


    //Entrada de dados
    printf("Equacao: a2 +bx + c");
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    if(a == 0){
        printf("Erro\n");
        return 0;
    }
     fflush(stdin);
     printf("Digite o valor de B: ");
    scanf("%f", &b);
     fflush(stdin);
     printf("Digite o valor de c: ");
    scanf("%f", &c);
     fflush(stdin);
     //Processamento e saída
    delta = (b * b) - (4 * a * c);
    printf("\nDelta = %.2f\n", delta);

    return 0;
}