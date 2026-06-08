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

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado[0], codigoCarta[0], nomeCidade[0], populacao[0], area[0], pib[0], pontosTuristicos[0], (float)(populacao[0]/area[0]), (float)(pib[0]/populacao[0]));
  printf("\n\n");
  printf("Carta 2:\n Estado: %c\n Código da Carta: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Quantidades de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado[1], codigoCarta[1], nomeCidade[1], populacao[1], area[1], pib[1], pontosTuristicos[1], (float)(populacao[0]/area[0]), (float)(pib[0]/populacao[0]));


  return 0;
} 
