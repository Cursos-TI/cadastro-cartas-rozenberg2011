#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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
  float pibPerCarpita[2];
  float superPoder[2];

  // Área para entrada de dados
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

  densidadePopulacional[0] = (float)(populacao[0]/area[0]); 
  pibPerCarpita[0] = (float)(pib[0]/populacao[0]);
  superPoder[0] = (float)(populacao[0]+area[0]+pib[0]+pontosTuristicos[0]+pibPerCarpita[0])-densidadePopulacional[0];

  //Carta 2
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

  densidadePopulacional[1] = (float)(populacao[1]/area[1]); 
  pibPerCarpita[1] = (float)(pib[1]/populacao[1]);
  superPoder[1] = (float)(populacao[1]+area[1]+pib[1]+pontosTuristicos[1]+pibPerCarpita[1])-densidadePopulacional[1];


  // Área para exibição dos dados da cidade
  printf("Carta 1:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado[0], codigoCarta[0], nomeCidade[0], populacao[0], area[0], pib[0], pontosTuristicos[0], densidadePopulacional[0], pibPerCarpita[0]);
  printf("\n\n");
  printf("Carta 2:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado[1], codigoCarta[1], nomeCidade[1], populacao[1], area[1], pib[1], pontosTuristicos[1], densidadePopulacional[1], pibPerCarpita[1]);
  printf("\n\n");
  printf("Comparações entre as cartas\n");
  printf("População: Carta %d venceu\n",(populacao[0] > populacao[1])? 1 : 2);
  printf("Área: Carta %d venceu\n",(area[0] > area[1])? 1 : 2);
  printf("PIB: Carta %d venceu\n",(pib[0] > pib[1])? 1 : 2);
  printf("Pontos Turísticos: Carta %d venceu\n",(pontosTuristicos[0] > pontosTuristicos[1])? 1 : 2);
  printf("Densidade Populacional: Carta %d venceu\n",(densidadePopulacional[0] < densidadePopulacional[1])? 1 : 2);
  printf("PIB per Capita: Carta %d venceu\n",(pibPerCarpita[0] > pibPerCarpita[1])? 1 : 2);
  printf("Super Poder: Carta %d venceu\n",(superPoder[0] > superPoder[1])? 1 : 2);
  /*
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
      float pibPerCarpita[2];
      float superPoder[2];
  */
  return 0;
} 
