#include <stdio.h>


int main(){

	float temperatura, umidade;
	unsigned int estoque, estoqueMinimo = 1000;


	printf("Entre com a temperatura \n");
	scanf("%f", &temperatura);

	printf("Entre com a humidade \n");
	scanf("%f", &umidade);

	printf("Entre com a estoque \n");
	scanf("%u", &estoque);


	if (temperatura > 30){
		printf("A temperatura está alta \n");
	} else {
		printf("Temperatura está dentro dos parâmetros\n");
	}

	if (umidade > 30){
		printf("A umidade está elevada \n");
	} else {
		printf("Umidade está dentro dos parâmetros\n");
	}

	if (estoque < estoqueMinimo){
		printf("O estoque está abaixo do mínimo \n");
	} else {
		printf("Estoque está normal\n");
	}
}