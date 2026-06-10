#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1

  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Carta 2

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados
  
  // Cadastro Carta 1

  printf("==== CARTA 1 ====\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta: ");
  scanf(" %s", codigo1);
  
  printf("Nome da cidade: ");
  scanf(" %s", cidade1);

  printf("Populacao: ");
  scanf(" %d", &populacao1);

  printf("Area: ");
  scanf(" %f", &area1);

  printf("PIB: ");
  scanf(" %f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristicos1);

  // Cadastro Carta 2

    printf("==== CARTA 2 ====\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Codigo da Carta: ");
  scanf(" %s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %s", cidade2);

  printf("Populacao: ");
  scanf(" %d", &populacao2);

  printf("Area: ");
  scanf(" %f", &area2);

  printf("PIB: ");
  scanf(" %f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristicos2);



  // Área para exibição dos dados da cidade

  // Exibicao Carta 1

  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

  // Exibicao Carta 2

  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
  
  
return 0;
} 
