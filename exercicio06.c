#include <stdio.h>
#include <stdlib.h>

int main(void){
	//Variáveis
	char sexo;
	
	//Entrada
	printf("Digite o sexo (f/m):");
	scanf("%c", &sexo);
	fflush(stdin);
	
	//Processamento e Saída
	if (sexo == 'f' || sexo == 'F'){
		printf("Feminino\n");
		
	}else if(sexo == 'm' || sexo == 'M'){
		printf("Masculino\n");
	}else{
		printf("Sexo invalido\n");
	}
	return 0;
}