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
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float PIBperCapita1;
  float resultado1;
  float SuperPoder1;

  

  // Carta 2

  char estado2;
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float PIBperCapita2;
  float resultado2;
  float SuperPoder2;
  int resultadoComparacao;

  // Area para o jogador escolher qual dado ele quer comparar!
  unsigned int CompararPopulacao;
  float CompararArea;
  float CompararPib;
  float CompararDensidadePopulacional;
  float CompararPibperCapita;

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

    printf("\n"); // Adiciona uma linha em branco para separar as cartas
  printf("==== CARTA 1 ====\n");

  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
  densidadePopulacional1 = (float)populacao1 / area1;
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
  resultado1 = (float)pib1 * 1000000000;
  PIBperCapita1 = (float)resultado1 / populacao1;
  printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
  SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + PIBperCapita1 + (1.0f / densidadePopulacional1);
  printf("Super Poder: %.2f\n", SuperPoder1);


  // Exibicao Carta 2
  printf("\n"); // Adiciona uma linha em branco para separar as cartas
    printf("==== CARTA 2 ====\n");

  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
  SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + PIBperCapita2 + (1.0f / densidadePopulacional2);
  printf("Super Poder: %.2f\n", SuperPoder2);

  densidadePopulacional2 = (float)populacao2 / area2;

  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
  resultado2 = (float)pib2 * 1000000000;
  PIBperCapita2 = (float)resultado2 / populacao2;
  printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
  SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + PIBperCapita2 + (1.0f / densidadePopulacional2);
  printf("\n");

  // Area para o jogador escolher qual dado ele quer comparar!

  printf("=======Area da Comparacao de um unico dado========\n");

  if (populacao1 > populacao2){
    printf("$$$$Carta 1 Venceu o duelo$$$$\n");
  } else {
    printf("$$$$Carta 2 Venceu o duelo$$$$\n");
  }



  // Área para comparação entre as cartas
printf("\n"); // Adiciona uma linha em branco para separar as comparações
  printf("-----Comparacao entre as cartas-----:\n");

 // População (Maior vence)
  resultadoComparacao = populacao1 > populacao2;
  printf("Populacao: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);

  // Área (Maior vence)
  resultadoComparacao = area1 > area2;
  printf("Area: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);

  // PIB (Maior vence)
  resultadoComparacao = pib1 > pib2;
  printf("PIB: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);

  // Pontos Turísticos (Maior vence)
  resultadoComparacao = pontosTuristicos1 > pontosTuristicos2;
  printf("Pontos Turisticos: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);

  // Densidade Populacional (MENOR vence)
  resultadoComparacao = densidadePopulacional1 < densidadePopulacional2;
  printf("Densidade Populacional: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);

  // PIB per Capita (Maior vence)
  resultadoComparacao = PIBperCapita1 > PIBperCapita2;
  printf("PIB per Capita: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);

  // Super Poder (Maior vence)
  resultadoComparacao = SuperPoder1 > SuperPoder2;
  printf("Super Poder: %s venceu (%d)\n", resultadoComparacao ? "Carta 1" : "Carta 2", resultadoComparacao);
printf("\n");





















  return 0;
} 
