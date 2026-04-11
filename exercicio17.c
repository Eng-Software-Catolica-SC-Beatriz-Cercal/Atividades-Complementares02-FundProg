//Faça um programa que peça os 3 lados de um triângulo. 
//O programa deverá informar se os valores podem formar um triângulo, ou seja, 
//a soma de dois lados não pode ser menor que o lado restante.
// Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int lado1, lado2, lado3;
    float media;
    //Quais são as entradas de dados?
    printf("Digite o primeiro lado:");
    scanf("%i", &lado1);
    fflush(stdin);
    printf("Digite o segundo lado:");
    scanf("%i", &lado2);
    fflush(stdin);
    printf("Digite o terceiro lado:");
    scanf("%i", &lado3);
    fflush(stdin);
    //Processamento e saída de dados:
    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {

        printf("Forma um triangulo.\n");

        // Classificação
        if (lado1 == lado2 && lado2 == lado3){
            printf("Triangulo Equilatero\n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("Triangulo Isosceles\n");
        }
        else{
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Nao pode formar um triangulo.\n");
    }

    return 0;
}