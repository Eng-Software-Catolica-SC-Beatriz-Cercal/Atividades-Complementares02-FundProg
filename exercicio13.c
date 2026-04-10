#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char turno;
	
	// entrada
	printf("Digite o turno que voce estuda (M/V/N): ");
	scanf("%c",&turno);
	fflush(stdin);
	
	// processamento e saída
	switch(turno){
		case 'm': case 'M':
			printf("Bom dia!\n");
			break;
		case 'v':
		case 'V':
			printf("Boa tarde!\n");
			break;
			case 'n': case 'N':
			printf("Boa noite!\n");
			break;
			default:
				printf("Valor invalido!\n");
	}
	
	return 0;
}