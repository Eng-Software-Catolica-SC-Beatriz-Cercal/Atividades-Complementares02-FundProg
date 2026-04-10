#include <stdio.h>
#include <stdlib.h>

int main(void){
	// quais são as variáveis?
	int numero1;
	
	// quais são as entradas de dados?
	printf("Digite 1 numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	
	// qual é o processamento dos dados e saída dos dados?
	if(numero1 > 0){
		printf("O numero  e positivo = %i\n",numero1);
	}else{
		if(numero1 < 0){
			printf("O numero e negativo = %i\n",numero1);
		}else{
			printf("O numero e igual a 0\n");
		}
	}
	
	return 0;
}