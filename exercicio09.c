#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float n1, n2, n3, m;
	
	// entrada
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	// processamento
	m = (n1+n2+n3)/3;
	
	// saída
	if(m==10){
		printf("Aprovado com disticao com a media %.2f\n",m);
	}else if(m>=7){
		printf("Aprovado com media %.2f\n",m);
	}else{
		printf("Reprovado com a media %.2f\n",m);
	}

	return 0;
}