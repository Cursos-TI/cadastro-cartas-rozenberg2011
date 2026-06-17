#include <stdio.h>

int main(){
	int idade = 0;
	float altura = 0.0;
	char inicial = 'A';

	printf("Qual é a sua idade: ");
	scanf("%d", &idade);

	printf("Qual é a sua altura: ");
	scanf("%f", &altura);


	printf("Qual é a sua inicial: ");
	scanf(" %c", &inicial);

	printf("\n\n");


	printf("Informações adicionadas\n idade: %d, Altura: %f2, Inicial: %c.\n", idade, altura, inicial);

	return 0;
}