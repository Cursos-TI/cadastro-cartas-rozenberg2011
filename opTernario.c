#include <stdio.h> //Biblioteca de entradas
#include <stdlib.h> //Biblioteca para randomico
#include <time.h> //Biblioteca tempo
#include <string.h> //Biblioteca para manipular string


void limparTela() {
    // Verifica se o sistema operacional é Windows
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        // Se for Linux ou macOS
        system("clear");
    #endif
}




int main(){


	int numeroComputador, numeroJogador;
	char tipoComparacao;


	numeroComputador = rand() % 101;
	
	printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");	

	do{
		printf("Você deve escolher um tipo  de comparação.\n");
		printf("M. para Maior\n");
		printf("N. para Menor\n");
		printf("I. para Igual\n");

		printf("Escolha a comparação (M, N ou I):\n");
		scanf("%c", &tipoComparacao);

		if(tipoComparacao != 'M' && tipoComparacao != 'N' && tipoComparacao != 'I'){
			limparTela();
			printf("### ESCOLHA INVÁLIDA, TENTE NOVAMENTE! ### \n");
			while (getchar() != '\n');
		}

	}while(tipoComparacao != 'M' && tipoComparacao != 'N' && tipoComparacao != 'I');
	

	do{
		printf("Digite o seu número (entre 1 e 100):\n");
		scanf("%d", &numeroJogador);

		if(numeroJogador <= 0 || numeroJogador >= 101){
			limparTela();
			printf("### ESCOLHA INVÁLIDA, TENTE NOVAMENTE! ### \n");
			while (getchar() != '\n');
		}

	}while(numeroJogador <= 0 || numeroJogador >= 101);

	switch(tipoComparacao){
		case 'M':
			printf((numeroComputador < numeroJogador)? "Parabéns você granhou\n Seu número %d. \n Número do computador %d. \n":"Infelizmente você perdeu\n Seu número %d.\n Número do computador %d. \n", numeroJogador, numeroComputador);
			break;

		case 'N':
			printf((numeroComputador > numeroJogador)? "Parabéns você granhou\n Seu número %d. \n Número do computador %d. \n":"Infelizmente você perdeu\n Seu número %d.\n Número do computador %d. \n", numeroJogador, numeroComputador);
			break;

		case 'I':
			printf((numeroComputador == numeroJogador)? "Parabéns você granhou\n Seu número %d. \n Número do computador %d. \n":"Infelizmente você perdeu\n Seu número %d.\n Número do computador %d. \n", numeroJogador, numeroComputador);
			break;
	}




	
	printf("\n");
	return 0;
}