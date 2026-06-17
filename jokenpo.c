#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int escolhaJogado, escolhaComputador;
	srand(time(0));
	printf("Jogo de Jokenpô\n");
	printf("Escolha uma opção:\n");
	printf("1 - pedra\n");
	printf("2 - papel\n");
	printf("3 - Tesoura\n");
	printf("Escolha: \n");
	scanf("%d", &escolhaJogado);

	escolhaComputador = rand() % 3 + 1;

	switch(escolhaJogado){
		case 1:
			printf("Jogador: Pedra. \n");
			break;

		case 2:
			printf("Jogador: Papel. \n");
			break;

		case 3:
			printf("Jogador: Tesoura. \n");
			break;
		
		default:
			printf("Opção inválida.\n");
			break;	
	}

	switch(escolhaComputador){
		case 1:
			printf("Computador: Pedra. \n");
			break;

		case 2:
			printf("Computador: Papel. \n");
			break;

		case 3:
			printf("Computador: Tesoura. \n");
			break;
		
		default:
			printf("Opção inválida.\n");
			break;	
	}

	/*
	Lógica:
		1 - Pedra ganha da tesoura e perde para papel
		2 - Papel ganha do pedra e perde para tesoura
		3 - Tesoura ganha do papel e perde para pedra
	*/

	if(escolhaJogado == escolhaComputador){
		printf("### O jogo empatou! ###\n");
	} else if((escolhaJogado == 1) && (escolhaComputador == 3) || (escolhaJogado == 2) && (escolhaComputador == 1) || (escolhaJogado == 3) && (escolhaComputador == 2)){
		printf("### Você ganhou o jogo ###\n");
	} else if((escolhaJogado == 3) && (escolhaComputador == 1) || (escolhaJogado == 1) && (escolhaComputador == 2) || (escolhaJogado == 2) && (escolhaComputador == 3)){
		printf("### O Computador ganhou o jogo ###\n");
	}	

	return 0;
}