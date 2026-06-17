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


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2], codigoCarta[2][10] , nomeCidade[2][100];
  int populacao[2], pontosTuristicos[2], resultadoDigitado, escolhaJogador1 = -1, escolhaJogador2 = -1, resultado1 = 0, resultado2 = 0;
  float area[2], pib[2], densidadePopulacional[2], pibPerCapita[2], superPoder[2];
  
 
  //Iniciando o randomico com a hora atual
  srand((unsigned)time(NULL));

  //Inserção automática
  estado[0] = 'P';
  strcpy(codigoCarta[0], "A01");
  strcpy(nomeCidade[0], "Recife");
  populacao[0] = rand() % 10001;
  area[0] = rand() % 100001;
  pib[0] = rand() % 50001;
  pontosTuristicos[0] = rand() % 100;

  densidadePopulacional[0] = (float)(populacao[0]/area[0]); 
  pibPerCapita[0] = (float)(pib[0]/populacao[0]);
  superPoder[0] = (float)(populacao[0]+area[0]+pib[0]+pontosTuristicos[0]+pibPerCapita[0])-densidadePopulacional[0];

  //Inserção automática
  estado[1] = 'R';
  strcpy(codigoCarta[1] , "B01");
  strcpy(nomeCidade[1] , "Rio de Janeiro");
  populacao[1] = rand() % 10001;
  area[1] = rand() % 100001;
  pib[1] = rand() % 50001;
  pontosTuristicos[1] = rand() % 100;

  densidadePopulacional[1] = (float)(populacao[1]/area[1]); 
  pibPerCapita[1] = (float)(pib[1]/populacao[1]);
  superPoder[1] = (float)(populacao[1]+area[1]+pib[1]+pontosTuristicos[1]+pibPerCapita[1])-densidadePopulacional[1];

  //Menu:
  //Escolhad do primeiro valor 
do{

  printf("Escolha qual o primeiro valor você deseja comparar:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Carpita\n7 - Super Poder\nDigite apenas valores númericos:\n");
  resultadoDigitado = scanf("%d", &escolhaJogador1);
  
  // Se o scanf NÃO retornar 1, significa que a entrada não é um int válido
  if (resultadoDigitado != 1) {
    limparTela();
    printf("Erro: Caracter inválido.\n Digite apenas numeros inteiros.\n\n");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    escolhaJogador1 = -1;       // Força um valor inválido para o loop continuar
  } else if (escolhaJogador1 <= 0 || escolhaJogador1 >= 8){
    limparTela();
    printf("Opcao invalida! O numero deve ser de 1 a 7.\n\n");
  }

} while (escolhaJogador1 <= 0 || escolhaJogador1 >= 8);

  printf("Sucesso! O numero digitado foi: %d.\n", escolhaJogador1);  
  printf("\n");

//Escolhad do segundo valor 
do{

  printf("Escolha qual o segundo valor você deseja comparar:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Carpita\n7 - Super Poder\nDigite apenas valores númericos:\n");
  resultadoDigitado = scanf("%d", &escolhaJogador2);
  
  // Se o scanf NÃO retornar 1, significa que a entrada não é um int válido
  if (resultadoDigitado != 1) {
    limparTela();
    printf("Erro: Caracter inválido.\n Digite apenas numeros inteiros.\n\n");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    escolhaJogador2 = -1;       // Força um valor inválido para o loop continuar
  } else if (escolhaJogador2 <= 0 || escolhaJogador2 >= 8){
    limparTela();
    printf("Opcao invalida! O numero deve ser de 1 a 7.\n\n");
  }

} while (escolhaJogador2 <= 0 || escolhaJogador2 >= 8);

  printf("Sucesso! O numero digitado foi: %d.\n", escolhaJogador2);  
  printf("\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de Reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f Reais\n", estado[0], codigoCarta[0], nomeCidade[0], populacao[0], area[0], pib[0], pontosTuristicos[0], densidadePopulacional[0], pibPerCapita[0]);
  printf("\n\n");
  printf("Carta 2:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de Reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f Reais\n", estado[1], codigoCarta[1], nomeCidade[1], populacao[1], area[1], pib[1], pontosTuristicos[1], densidadePopulacional[1], pibPerCapita[1]);
  printf("\n\n");


  printf("Comparações de todos os valores entre as cartas\n");
  printf("População: Carta %d vence\n",(populacao[0] > populacao[1])? 1 : 2);
  printf("Área: Carta %d vence\n",(area[0] > area[1])? 1 : 2);
  printf("PIB: Carta %d vence\n",(pib[0] > pib[1])? 1 : 2);
  printf("Pontos Turísticos: Carta %d vence\n",(pontosTuristicos[0] > pontosTuristicos[1])? 1 : 2);
  printf("Densidade Populacional: Carta %d vence\n",(densidadePopulacional[0] < densidadePopulacional[1])? 1 : 2);
  printf("PIB per Capita: Carta %d vence\n",(pibPerCapita[0] > pibPerCapita[1])? 1 : 2);
  printf("Super Poder: Carta %d vence\n",(superPoder[0] > superPoder[1])? 1 : 2);
  

  //Verificando os resultados
  //Escolha 1
  switch(escolhaJogador1){
    case 1:
      resultado1 = (populacao[0] == populacao[1])? 0 : (populacao[0] > populacao[1])? 1 : 2;
      break;

    case 2:
      resultado1 = (area[0] == area[1])? 0 : (area[0] > area[1])? 1 : 2;
      break;

    case 3:
      resultado1 = (pib[0] == pib[1])? 0 : (pib[0] > pib[1])? 1 : 2;
      break;

    case 4:
      resultado1 = (pontosTuristicos[0] == pontosTuristicos[1])? 0 : (pontosTuristicos[0] > pontosTuristicos[1])? 1 : 2;
      break;

    case 5:
      resultado1 = (densidadePopulacional[0] == densidadePopulacional[1])? 0 : (densidadePopulacional[0] < densidadePopulacional[1])? 1 : 2;
      break;

    case 6:
      resultado1 = (pibPerCapita[0] == pibPerCapita[1])? 0 : (pibPerCapita[0] > pibPerCapita[1])? 1 : 2;
      break;

    case 7:
      resultado1 = (superPoder[0] == superPoder[1])? 0 : (superPoder[0] > superPoder[1])? 1 : 2;
      break;
  }

  //Escolha 2
  switch(escolhaJogador2){
    case 1:
      resultado2 = (populacao[0] == populacao[1])? 0 : (populacao[0] > populacao[1])? 1 : 2;
      break;

    case 2:
      resultado2 = (area[0] == area[1])? 0 : (area[0] > area[1])? 1 : 2;
      break;

    case 3:
      resultado2 = (pib[0] == pib[1])? 0 : (pib[0] > pib[1])? 1 : 2;
      break;

    case 4:
      resultado2 = (pontosTuristicos[0] == pontosTuristicos[1])? 0 : (pontosTuristicos[0] > pontosTuristicos[1])? 1 : 2;
      break;

    case 5:
      resultado2 = (densidadePopulacional[0] == densidadePopulacional[1])? 0 : (densidadePopulacional[0] < densidadePopulacional[1])? 1 : 2;
      break;

    case 6:
      resultado2 = (pibPerCapita[0] == pibPerCapita[1])? 0 : (pibPerCapita[0] > pibPerCapita[1])? 1 : 2;
      break;

    case 7:
      resultado2 = (superPoder[0] == superPoder[1])? 0 : (superPoder[0] > superPoder[1])? 1 : 2;
      break;
  }

  //imprimindo o resultado
  printf("\n\nRESULTADO PELAS ESCOLHAS:\n");
  printf("Resultados individuais:\n Primeira escolha: Carta %d ganhou; e \n Segunda escolha: Carta %d ganhou.\n", resultado1, resultado2 );
  if(resultado1 == resultado2 && resultado1 != 0 ){
    printf("Resultado final: Carta %d ganhou.\n", resultado1);  
  } else if(resultado1 == resultado2 && resultado1 == 0 ){
    printf("Resultado final: Houve empate.\n");
  } else if(resultado1 == 0 && resultado2 != 0 ){
    printf("Resultado final: Carta %d ganhou.\n", resultado2); 
  } else if(resultado1 != 0 && resultado2 == 0 ){
    printf("Resultado final: Carta %d ganhou.\n", resultado1); 
  } else if(resultado1 != resultado2 && resultado1 != 0 && resultado2 != 0 ){
    printf("Resultado final: Houve empate.\n");
  }

  printf("\n###########\n\n"); 
  

  //imprimindo os valores
  switch(escolhaJogador1){
    case 1:
      printf("Primeira escolha 1 - População:\n");
      printf("Carta 1 - %s (%c): %d; e\n", nomeCidade[0], estado[0], populacao[0]);
      printf("Carta 2 - %s (%c): %d.\n", nomeCidade[1], estado[1], populacao[1]);
      break;

    case 2:
      printf("Primeira escolha 2 - Área: \n");
      printf("Carta 1 - %s (%c): %.2f km²; e\n", nomeCidade[0], estado[0], area[0]);
      printf("Carta 2 - %s (%c): %.2f km².\n", nomeCidade[1], estado[1], area[1]);
      break;

    case 3:
      printf("Primeira escolha 3 - PIB: \n");
      printf("Carta 1 - %s (%c): %.2f bilhões de Reais; e\n", nomeCidade[0], estado[0], pib[0]);
      printf("Carta 2 - %s (%c): %.2f bilhões de Reais.\n", nomeCidade[1], estado[1], pib[1]);
      break;

    case 4:
      printf("Primeira escolha 4 - Pontos Turísticos:\n");
      printf("Carta 1 - %s (%c): %d; e\n", nomeCidade[0], estado[0], pontosTuristicos[0]);
      printf("Carta 2 - %s (%c): %d.\n", nomeCidade[1], estado[1], pontosTuristicos[1]);
      break;

    case 5:
      printf("Primeira escolha 5 - Densidade Populacional:\n");
      printf("Carta 1 - %s (%c): %.2f hab/km²; e\n", nomeCidade[0], estado[0], densidadePopulacional[0]);
      printf("Carta 2 - %s (%c): %.2f hab/km².\n", nomeCidade[1], estado[1], densidadePopulacional[1]);
      break;

    case 6:
      printf("Primeira escolha 6 - PIB per Capita:\n");
      printf("Carta 1 - %s (%c): %.2f Reais; e\n", nomeCidade[0], estado[0], pibPerCapita[0]);
      printf("Carta 2 - %s (%c): %.2f Reais.\n", nomeCidade[1], estado[1], pibPerCapita[1]);
      break;

    case 7:
      printf("Primeira escolha 7 - Super Poder:\n");
      printf("Carta 1 - %s (%c): %.2f; e\n", nomeCidade[0], estado[0], superPoder[0]);
      printf("Carta 2 - %s (%c): %.2f.\n", nomeCidade[1], estado[1], superPoder[1]);
      break;
  }

  //imprimindo os valores
  switch(escolhaJogador2){
    case 1:
      printf("Segunda escolha 1 - População:\n");
      printf("Carta 1 - %s (%c): %d; e\n", nomeCidade[0], estado[0], populacao[0]);
      printf("Carta 2 - %s (%c): %d.\n", nomeCidade[1], estado[1], populacao[1]);
      break;

    case 2:
      printf("Segunda escolha 2 - Área: \n");
      printf("Carta 1 - %s (%c): %.2f km²; e\n", nomeCidade[0], estado[0], area[0]);
      printf("Carta 2 - %s (%c): %.2f km².\n", nomeCidade[1], estado[1], area[1]);
      break;

    case 3:
      printf("Segunda escolha 3 - PIB: \n");
      printf("Carta 1 - %s (%c): %.2f bilhões de Reais; e\n", nomeCidade[0], estado[0], pib[0]);
      printf("Carta 2 - %s (%c): %.2f bilhões de Reais.\n", nomeCidade[1], estado[1], pib[1]);
      break;

    case 4:
      printf("Segunda escolha 4 - Pontos Turísticos:\n");
      printf("Carta 1 - %s (%c): %d; e\n", nomeCidade[0], estado[0], pontosTuristicos[0]);
      printf("Carta 2 - %s (%c): %d.\n", nomeCidade[1], estado[1], pontosTuristicos[1]);
      break;

    case 5:
      printf("Segunda escolha 5 - Densidade Populacional:\n");
      printf("Carta 1 - %s (%c): %.2f hab/km²; e\n", nomeCidade[0], estado[0], densidadePopulacional[0]);
      printf("Carta 2 - %s (%c): %.2f hab/km².\n", nomeCidade[1], estado[1], densidadePopulacional[1]);
      break;

    case 6:
      printf("Segunda escolha 6 - PIB per Capita:\n");
      printf("Carta 1 - %s (%c): %.2f Reais; e\n", nomeCidade[0], estado[0], pibPerCapita[0]);
      printf("Carta 2 - %s (%c): %.2f Reais.\n", nomeCidade[1], estado[1], pibPerCapita[1]);
      break;

    case 7:
      printf("Segunda escolha 7 - Super Poder:\n");
      printf("Carta 1 - %s (%c): %.2f; e\n", nomeCidade[0], estado[0], superPoder[0]);
      printf("Carta 2 - %s (%c): %.2f.\n", nomeCidade[1], estado[1], superPoder[1]);
      break;
  }

  /*
    
    Missão intermediario:
    Sua Missão?
      Você deverá desenvolver um programa em C que simule o jogo Super Trunfo. 
      O programa deverá:
        1 - Implementar a lógica de comparação entre duas cartas, 
        considerando diferentes atributos numéricos.
      
        2 - Permitir ao jogador escolher entre diferentes atributos 
            para a comparação através de menus interativos.
      
        3 - Evoluir em complexidade ao longo dos três desafios:
            -  Comparação de cartas com base em um único atributo utilizando if e if-else.
            -  Comparação de cartas com múltiplos atributos usando operadores lógicos 
               e estruturas de decisão aninhadas e encadeadas (if-else if), 
               além da implementação de menus com switch.
            -  Comparação de cartas com base em dois atributos, utilizar o operador ternário 
               e integrando todas as estruturas de decisão aprendidas para criar uma lógica 
               mais complexa.




    Comparação de Cartas:
      (O maior vence)
      População: Carta 1 venceu (1)
      Área: Carta 1 venceu (1)
      PIB: Carta 1 venceu (1)
      Pontos Turísticos: Carta 1 venceu (1)
      PIB per Capita: Carta 1 venceu (1)
      Super Poder: Carta 1 venceu (1)

      Densidade Populacional: Carta 2 venceu (0) (A menor dencidade vence)

      int populacao[2];
      float area[2];
      float pib[2];
      int pontosTuristicos[2];
      float densidadePopulacional[2];
      float pibPerCapita[2];
      float superPoder[2];
  

    
  */
  return 0;
} 
