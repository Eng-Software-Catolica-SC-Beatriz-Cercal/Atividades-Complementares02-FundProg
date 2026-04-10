#include <stdio.h>
#include <stdlib.h>

int main(void){
	//Variáveis
	char letra;
	
	//Entrada
	printf("Digite uma letra:");
	scanf("%c", &letra);
	fflush(stdin);
	
	//Processamento e Saída
	if (letra == 'a' || letra == 'e' || letra == 'i'|| letra == 'o'|| letra == 'u' || 
        letra == 'A' || letra == 'E'|| letra == 'I'|| letra == 'O'|| letra == 'U'){
		printf("Vogal");
	}else{
		printf("Consoante");
	}
	return 0;
}