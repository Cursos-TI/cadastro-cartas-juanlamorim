#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

//area das variaveis
    
    int PopulacaoCarta1, PopulacaoCarta2;
    char EstadoCarta1, EstadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char CidadeCarta1[20], CidadeCarta2[20];
    float PibCarta1, PibCarta2, AreaCarta1, AreaCarta2;
    float densidadePopulacional1, densidadePopulacional2;
    int PontosTuristicosCarta1, PontosTuristicosCarta2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoderCarta1, SuperPoderCarta2;
    int opcao;

//Area para insercao dos dados das cartas

    printf("=== Insira os dados da carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &EstadoCarta1);

    printf("Codigo da Carta: ");
    scanf(" %s", codigoCarta1);
  
     printf("Nome da cidade: ");
    scanf(" %s", CidadeCarta1);

    printf("Populacao: ");
    scanf(" %d", &PopulacaoCarta1);

    printf("Area: ");
    scanf(" %f", &AreaCarta1);

    printf("PIB: ");
    scanf(" %f", &PibCarta1);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &PontosTuristicosCarta1);

    printf("=== Insira os dados da carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &EstadoCarta2);

    printf("Codigo da Carta: ");
    scanf(" %s", codigoCarta2);
  
     printf("Nome da cidade: ");
    scanf(" %s", CidadeCarta2);

    printf("Populacao: ");
    scanf(" %d", &PopulacaoCarta2);

    printf("Area: ");
    scanf(" %f", &AreaCarta2);

    printf("PIB: ");
    scanf(" %f", &PibCarta2);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &PontosTuristicosCarta2);

printf("==== CARTA 1 ====\n");

  printf("Estado: %c\n", EstadoCarta1);
  printf("Codigo: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", CidadeCarta1);
  printf("Populacao: %d\n", PopulacaoCarta1);
  printf("Area: %.2f km²\n", AreaCarta1);
  printf("PIB: %.2f bilhoes de reais\n", PibCarta1);
  printf("Numero de pontos turisticos: %d\n", PontosTuristicosCarta1);

  //Dados complementares

  densidadePopulacional1 = (float)PopulacaoCarta1 / AreaCarta1;
  printf(" Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  PIBperCapita1 = (PibCarta1 * 1000000000.0) / PopulacaoCarta1;
  printf("Pib per capita: %.2f\n", PIBperCapita1);
  SuperPoderCarta1 = PopulacaoCarta1 + AreaCarta1 + PibCarta1 + PontosTuristicosCarta1 + PIBperCapita1 + (1.0 / densidadePopulacional1);
  printf("Super poder: %.2f\n", SuperPoderCarta1);

printf("==== CARTA 2 ====\n");

  printf("Estado: %c\n", EstadoCarta2);
  printf("Codigo: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", CidadeCarta2);
  printf("Populacao: %d\n", PopulacaoCarta2);
  printf("Area: %.2f km²\n", AreaCarta2);
  printf("PIB: %.2f bilhoes de reais\n", PibCarta2);
  printf("Numero de pontos turisticos: %d\n", PontosTuristicosCarta2);

  //Dados complementares

  densidadePopulacional2 = (float)PopulacaoCarta2 / AreaCarta2;
  printf(" Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  PIBperCapita2 = (PibCarta2 * 1000000000.0) / PopulacaoCarta2;
  printf("Pib per capita: %.2f\n", PIBperCapita2);
  SuperPoderCarta2 = PopulacaoCarta2 + AreaCarta2 + PibCarta2 + PontosTuristicosCarta2 + PIBperCapita2 + (1.0 / densidadePopulacional2);
  printf("Super poder: %.2f\n", SuperPoderCarta2);
printf("\n");

//Menu interativo
printf("### Escolha qual dado deseja comparar! ###\n");
printf("1. Populacao\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Numero de Pontos Turisticos\n");
printf("5. Densidade Populacional\n");
printf("6. Pib per Capita\n");
printf("7. Super Poder\n");
printf("8. Comparar todos os dados!\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1: if(PopulacaoCarta1 > PopulacaoCarta2){
    printf(" => Carta 1 Venceu <= \n");
} else if(PopulacaoCarta1 < PopulacaoCarta2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 2: if(AreaCarta1 > AreaCarta2){
    printf(" => Carta 1 Venceu <= \n");
} else if(AreaCarta1 < AreaCarta2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 3: if(PibCarta1 > PibCarta2){
    printf(" => Carta 1 Venceu <= \n");
} else if(PibCarta1 < PibCarta2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 4: if(PontosTuristicosCarta1 > PontosTuristicosCarta2){
    printf(" => Carta 1 Venceu <= \n");
} else if(PontosTuristicosCarta1 < PontosTuristicosCarta2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 5: if(densidadePopulacional1 < densidadePopulacional2){
    printf(" => Carta 1 Venceu <= \n");
} else if(densidadePopulacional1 > densidadePopulacional2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 6: if(PIBperCapita1 > PIBperCapita2){
    printf(" => Carta 1 Venceu <= \n");
} else if(PibCarta1 < PIBperCapita2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 7: if(SuperPoderCarta1 > SuperPoderCarta2){
    printf(" => Carta 1 Venceu <= \n");
} else if(SuperPoderCarta1 < SuperPoderCarta2){
    printf(" => Carta 2 Venceu <= \n");
} else{ printf("=> EMPATE <=\n");}
    break;
    case 8:
    printf("Populacao:\n");
    printf("Carta 1: %d\n", PopulacaoCarta1);
    printf("Carta 2: %d\n", PopulacaoCarta2);
    if (PopulacaoCarta1 > PopulacaoCarta2){
        printf("##Carta 1 Venceu##\n");
    } else if (PopulacaoCarta1 < PopulacaoCarta2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}
    printf("Area:\n");
    printf("Carta 1: %.2f\n", AreaCarta1);
    printf("Carta 2: %.2f\n", AreaCarta2);
    if (AreaCarta1 > AreaCarta2){
        printf("##Carta 1 Venceu##\n");
    } else if (AreaCarta1 < AreaCarta2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}
    printf("PIB:\n");
    printf("Carta 1: %.2f\n", PibCarta1);
    printf("Carta 2: %.2f\n", PibCarta2);
    if (PibCarta1 > PibCarta2){
        printf("##Carta 1 Venceu##\n");
    } else if (PibCarta1 < PibCarta2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}
    printf("Pontos Turisticos:\n");
    printf("Carta 1: %d\n", PontosTuristicosCarta1);
    printf("Carta 2: %d\n", PontosTuristicosCarta2);
    if (PontosTuristicosCarta1 > PontosTuristicosCarta2){
        printf("##Carta 1 Venceu##\n");
    } else if (PontosTuristicosCarta1 < PontosTuristicosCarta2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}
    printf("Densidade Populacional:\n");
    printf("Carta 1: %.2f\n", densidadePopulacional1);
    printf("Carta 2: %.2f\n", densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2){
        printf("##Carta 1 Venceu##\n");
    } else if (densidadePopulacional1 > densidadePopulacional2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}
        printf("Per Capita:\n");
    printf("Carta 1: %.2f\n", PIBperCapita1);
    printf("Carta 2: %.2f\n", PIBperCapita2);
    if (PIBperCapita1 > PIBperCapita2){
        printf("##Carta 1 Venceu##\n");
    } else if (PIBperCapita1 < PIBperCapita2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}
    printf("Super poder:\n");
    printf("Carta 1: %.2f\n", SuperPoderCarta1);
    printf("Carta 2: %.2f\n", SuperPoderCarta2);
    if (SuperPoderCarta1 > SuperPoderCarta2){
        printf("##Carta 1 Venceu##\n");
    } else if (SuperPoderCarta1 < SuperPoderCarta2){
        printf("##Carta 2 Venceu##\n");}
        else { printf("## EMPATE##\n");}

default: printf("Opcao invalida\n");
    break;
}
}