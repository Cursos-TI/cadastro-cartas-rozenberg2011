#include <stdio.h>


int main()
{
	
	float notas[3];
	float media;

	printf("Digite as suas notas:\n Nota 1: ");
	scanf("%f", &notas[0]);
	
	printf("Nota 2: ");
	scanf("%f", &notas[1]);
	
	printf("Nota 3: ");
	scanf("%f", &notas[2]);

	printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3; %.2f \nA sua média foi: %.2f\n", notas[0], notas[1], notas[2], (notas[0]+notas[1]+notas[2])/3);

	return 0;
}