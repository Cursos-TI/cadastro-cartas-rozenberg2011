#include <stdio.h> //Biblioteca de entradas
#include <stdlib.h> //Biblioteca para randomico
#include <time.h> //Biblioteca tempo
#include <string.h> //Biblioteca para manipular string

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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
  char estado[2];
  char codigoCarta[2][10];
  char nomeCidade[2][100];
  int populacao[2];
  float area[2];
  float pib[2];
  int pontosTuristicos[2];
  float densidadePopulacional[2];
  float pibPerCapita[2];
  float superPoder[2];

  int resultadoDigitado, escolhaJogador = -1;

  // Área para entrada de dados
  /*
  printf("Carta 1:\n");
  
  printf("Informe o Estado (Entre A e H): ");
  scanf(" %c", &estado[0]);
  
  printf("Informe o Código da Carta: ");
  scanf(" %[^\n]", codigoCarta[0]);
  
  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]",nomeCidade[0]);
  
  printf("Informe a População: ");
  scanf("%d",&populacao[0]);

  printf("Informe a Área em km²: ");
  scanf("%f",&area[0]);
  
  printf("Informe o PIB: ");
  scanf("%f", &pib[0]);

  printf("Informe a quantidade de pontos turisticos: ");
  scanf("%d", &pontosTuristicos[0]);
*/
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

  //Carta 2
  /*
  printf("Carta 2:\n");
  
  printf("Informe o Estado (Entre A e H): ");
  scanf(" %c", &estado[1]);
  
  printf("Informe o Código da Carta: ");
  scanf(" %[^\n]", codigoCarta[1]);
  
  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]",nomeCidade[1]);
  
  printf("Informe a População: ");
  scanf("%d",&populacao[1]);

  printf("Informe a Área em km²: ");
  scanf("%f",&area[1]);
  
  printf("Informe o PIB: ");
  scanf("%f", &pib[1]);

  printf("Informe a quantidade de pontos turisticos: ");
  scanf("%d", &pontosTuristicos[1]);
  */
  //Inserção automática
  estado[1] = 'R';
  strcpy(codigoCarta[1] , "B01");
  strcpy(nomeCidade[1] , "Rio de Janeiro");
  populacao[1] = rand() % 10001;
  area[1] = rand() % 100001;
  pib[1] = pib[0] = rand() % 50001;
  pontosTuristicos[1] = rand() % 100;

  densidadePopulacional[1] = (float)(populacao[1]/area[1]); 
  pibPerCapita[1] = (float)(pib[1]/populacao[1]);
  superPoder[1] = (float)(populacao[1]+area[1]+pib[1]+pontosTuristicos[1]+pibPerCapita[1])-densidadePopulacional[1];

  //Menu:
do{

  printf("Escolha qual valor você deseja comparar:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Carpita\n7 - Super Poder\nDigite apenas valores númericos:\n");
  resultadoDigitado = scanf("%d", &escolhaJogador);
  
  // Se o scanf NÃO retornar 1, significa que a entrada não é um int válido
  if (resultadoDigitado != 1) {
    limparTela();
    printf("Erro: Caracter inválido.\n Digite apenas numeros inteiros.\n\n");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    escolhaJogador = -1;       // Força um valor inválido para o loop continuar
  } else if (escolhaJogador <= 0 || escolhaJogador >= 8){
    limparTela();
    printf("Opcao invalida! O numero deve ser de 1 a 7.\n\n");
  }

} while (escolhaJogador <= 0 || escolhaJogador >= 8);

  printf("Sucesso! O numero digitado foi: %d.\n", escolhaJogador);  
  printf("\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de Reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f Reais\n", estado[0], codigoCarta[0], nomeCidade[0], populacao[0], area[0], pib[0], pontosTuristicos[0], densidadePopulacional[0], pibPerCapita[0]);
  printf("\n\n");
  printf("Carta 2:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de Reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f Reais\n", estado[1], codigoCarta[1], nomeCidade[1], populacao[1], area[1], pib[1], pontosTuristicos[1], densidadePopulacional[1], pibPerCapita[1]);
  printf("\n\n");


  printf("Comparações de todos os valores entre as cartas\n");
  printf("População: Carta %d vence\n",(populacao[0] > populacao[1])? 1 :(populacao[0] == populacao[1])? 0 : 2);
  printf("Área: Carta %d vence\n",(area[0] > area[1])? 1 :(area[0] == area[1])? 0 : 2);
  printf("PIB: Carta %d vence\n",(pib[0] > pib[1])? 1 :(pib[0] == pib[1])? 0 : 2);
  printf("Pontos Turísticos: Carta %d vence\n",(pontosTuristicos[0] > pontosTuristicos[1])? 1 :(pontosTuristicos[0] == pontosTuristicos[1])? 0 : 2);
  printf("Densidade Populacional: Carta %d vence\n",(densidadePopulacional[0] < densidadePopulacional[1])? 1 :(densidadePopulacional[0] == densidadePopulacional[1])? 0 : 2);
  printf("PIB per Capita: Carta %d vence\n",(pibPerCapita[0] > pibPerCapita[1])? 1 :(pibPerCapita[0] == pibPerCapita[1])? 0 : 2);
  printf("Super Poder: Carta %d vence\n",(superPoder[0] > superPoder[1])? 1 :(superPoder[0] == superPoder[1])? 0 : 2);
  printf("\n\nRESULTADO PELA ESCOLHA:\n");

  switch(escolhaJogador){
    case 1:
      printf("Escolha 1 - População:\n");
      printf("Carta 1 - %s (%c): %d; e\n", nomeCidade[0], estado[0], populacao[0]);
      printf("Carta 2 - %s (%c): %d.\n", nomeCidade[1], estado[1], populacao[1]);
      printf("Carta %d venceu.\n",(populacao[0] > populacao[1])? 1 : 2);
      break;

    case 2:
      printf("Escolha 2 - Área: \n");
      printf("Carta 1 - %s (%c): %.2f km²; e\n", nomeCidade[0], estado[0], area[0]);
      printf("Carta 2 - %s (%c): %.2f km².\n", nomeCidade[1], estado[1], area[1]);
      if(area[0] == area[1]){
        printf("O jogo empatou!\n");
      } else {
        printf("Carta %d venceu.\n",(area[0] > area[1])? 1 : 2);
      }  
      break;

    case 3:
      printf("Escolha 3 - PIB: \n");
      printf("Carta 1 - %s (%c): %.2f bilhões de Reais; e\n", nomeCidade[0], estado[0], pib[0]);
      printf("Carta 2 - %s (%c): %.2f bilhões de Reais.\n", nomeCidade[1], estado[1], pib[1]);
      if(pib[0] == pib[1]){
        printf("O jogo empatou!\n");
      } else {
        printf("Carta %d venceu.\n",(pib[0] > pib[1])? 1 : 2);
      }  
      break;

    case 4:
      printf("Escolha 4 - Pontos Turísticos:\n");
      printf("Carta 1 - %s (%c): %d; e\n", nomeCidade[0], estado[0], pontosTuristicos[0]);
      printf("Carta 2 - %s (%c): %d.\n", nomeCidade[1], estado[1], pontosTuristicos[1]);
      if(pontosTuristicos[0] == pontosTuristicos[1]){
        printf("O jogo empatou!\n");
      } else {
        printf("Carta %d venceu.\n",(pontosTuristicos[0] > pontosTuristicos[1])? 1 : 2);
      }  
      break;

    case 5:
      printf("Escolha 5 - Densidade Populacional:\n");
      printf("Carta 1 - %s (%c): %.2f hab/km²; e\n", nomeCidade[0], estado[0], densidadePopulacional[0]);
      printf("Carta 2 - %s (%c): %.2f hab/km².\n", nomeCidade[1], estado[1], densidadePopulacional[1]);
      if(densidadePopulacional[0] == densidadePopulacional[1]){
        printf("O jogo empatou!\n");
      } else {
        printf("Carta %d venceu.\n",(densidadePopulacional[0] < densidadePopulacional[1])? 1 : 2);
      }  
      break;

    case 6:
      printf("Escolha 6 - PIB per Capita:\n");
      printf("Carta 1 - %s (%c): %.2f Reais; e\n", nomeCidade[0], estado[0], pibPerCapita[0]);
      printf("Carta 2 - %s (%c): %.2f Reais.\n", nomeCidade[1], estado[1], pibPerCapita[1]);
      if(pibPerCapita[0] == pibPerCapita[1]){
        printf("O jogo empatou!\n");
      } else {
        printf("Carta %d venceu.\n",(pibPerCapita[0] > pibPerCapita[1])? 1 : 2);
      }  
      break;

    case 7:
      printf("Escolha 7 - Super Poder:\n");
      printf("Carta 1 - %s (%c): %.2f; e\n", nomeCidade[0], estado[0], superPoder[0]);
      printf("Carta 2 - %s (%c): %.2f.\n", nomeCidade[1], estado[1], superPoder[1]);
      if(superPoder[0] == superPoder[1]){
        printf("O jogo empatou!\n");
      } else {
        printf("Carta %d venceu.\n",(superPoder[0] > superPoder[1])? 1 : 2);
      }  
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
