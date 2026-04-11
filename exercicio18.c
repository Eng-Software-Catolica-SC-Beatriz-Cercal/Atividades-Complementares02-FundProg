#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Biblioteca utilizada para o cálculo de raízes quadradas

int main(void){
    //Variáveis
    float a,b,c;
    float delta, x1, x2;


    //Entrada de dados
    printf("Equacao: a2 +bx + c");
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    fflush(stdin);

    if(a == 0){
        printf("Erro\n");
        return 0;
    }
     printf("Digite o valor de B: ");
    scanf("%f", &b);
     fflush(stdin);
     printf("Digite o valor de c: ");
    scanf("%f", &c);
     fflush(stdin);
     //Processamento e saída
    delta = (b * b) - (4 * a * c);
    printf("\nDelta = %.2f\n", delta);

     if(delta > 0){
        printf("Delta positivo: duas raizes reais\n");

       // x1 = (-b + sqrt(delta)) / (2 * a); //SQRT é responsável pelo cálculo de raiz quadrada
       // x2 = (-b - sqrt(delta)) / (2 * a);
    return 0;
}