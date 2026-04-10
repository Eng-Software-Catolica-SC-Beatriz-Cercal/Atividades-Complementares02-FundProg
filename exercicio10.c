#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int idade01, idade02, idade03, idade04;
    float media;
    //Quais são as entradas de dados?
    printf("Digite a primeira idade:");
    scanf("%i", &idade01);
    fflush(stdin);
    printf("Digite a segunda idade:");
    scanf("%i", &idade02);
    fflush(stdin);
    printf("Digite a terceira idade:");
    scanf("%i", &idade03);
    fflush(stdin);
    printf("Digite a quarta idade:");
    scanf("%i", &idade04);
    fflush(stdin);
    //Processamento e saída de dados:
    media = (float) (idade01+idade02+idade03+idade04)/4;
    if (media < 25){ //Condicional IF
        printf("Turma Jovem\n");
    }else if (media >= 25 && media<40){ //If/Else
        printf("Turma Adulta\n");
    }else{
            printf("Turma Idosa\n");
    }
    return 0;
}