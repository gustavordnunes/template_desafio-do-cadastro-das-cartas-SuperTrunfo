#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2; 
  char carta1[50], carta2[50];
  char nomeCidade1[100], nomeCidade2[100];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosturisticos1, pontosturisticos2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;
  float SuperPoder1, SuperPoder2;
  int opcao;

  


  // Área para entrada de dados
     printf("**Carta1** \n");

     printf("Digite o nome do estado: \n");
     scanf("%c", &estado1);

     printf("Digite uma carta: \n");
     scanf("%s", &carta1);

     printf("Digite o nome da cidade: \n");
     scanf("%s", &nomeCidade1);

     printf("Digite a populacao: \n");
     scanf("%d", &populacao1);

     printf("Digite a area: \n");
     scanf("%f", &area1);

     printf("Digite o pib: \n");
     scanf("%f", &pib1);

     printf("Digite os pontos turisticos: \n");
     scanf("%d", &pontosturisticos1);

     printf("Digite a densidade populacional: \n");
     scanf("%f", &densidadePopulacional1);

     printf("Digite o PIB per Capita: \n");
     scanf("%f", &pibPerCapita1);

     densidadePopulacional1 = populacao1 / area1;
     pibPerCapita1 = pib1 / populacao1;
     
     printf("\n\n===================\n");
     printf("\n**Carta2** \n");
     printf("===================\n");

     printf("Digite o nome do estado: \n");
     scanf(" %c", &estado2);

     printf("Digite uma carta: \n");
     scanf(" %s", &carta2);

     printf("Digite o nome da cidade: \n");
     scanf(" %s", &nomeCidade2);

     printf("Digite a populacao: \n");
     scanf(" %d", &populacao2);

     printf("Digite a area: \n");
     scanf(" %f", &area2);

     printf("Digite o pib: \n");
     scanf(" %f", &pib2);

     printf("Digite os pontos turisticos: \n");
     scanf(" %d", &pontosturisticos2);

     printf("Digite a densidade populacional: \n");
     scanf(" %f", &densidadePopulacional2);

     printf("Digite o PIB per Capita: \n");
     scanf(" %f", &pibPerCapita2);


     densidadePopulacional2 = populacao2 / area2;
     pibPerCapita2 = pib2 / populacao2;
     pibPerCapita1 = (pib1 * 1000000000 );
     pibPerCapita2 = (pib2 * 1000000000 );

     superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidadePopulacional1 + pibPerCapita1 + (1 / densidadePopulacional1);

     // Area para estruturas de decisao

     printf("\nEscolha do atributo\n");
     printf("1 - Populacao\n");
     printf("2 - area\n");
     printf("3 - PIB\n");
     printf("4 - Pontos turisticos\n");
     printf("5 - Densidade demografica\n");
     printf("6 - PIB per Capita\n");
     printf("Opcao: \n");
     scanf(" %d", &opcao);

     switch(opcao) {

      case 1:
         if(populacao1 > populacao2)
         printf("Carta 1 venceu (populacao)\n");
        else if(populacao1 < populacao2)
         printf("Carta 2 venceu (populacao)\n");
        else
         printf("Houve um empate!\n");
        break;

      case 2:
         if(area1 > area2)
         printf("Carta 1 venceu (area)\n");
        else if(area1 < area2)
         printf("Carta 2 venceu (area)\n");
        else
         printf("Houve um empate!\n");
        break;

      case 3:
         if(pib1 > pib2)
         printf("Carta 1 venceu (PIB)\n");
        else if(area1 < area2)
         printf("Carta 2 venceu (PIB)\n");
        else
         printf("Houve um empate!\n");
        break;

      case 4:
         if(pontosturisticos1 > pontosturisticos2)
         printf("Carta 1 venceu (Pontos Turisticos)\n");
        else if(area1 < area2)
         printf("Carta 2 venceu (Pontos Turisticos)\n");
        else
         printf("Houve um empate!\n");
        break;

      case 5:
         if(densidadePopulacional1 < densidadePopulacional2)
         printf("Carta 1 venceu (Densidade Populacional)\n");
        else if(densidadePopulacional1 > densidadePopulacional2)
         printf("Carta 2 venceu (Densidade Populacional)\n");
        else
         printf("Houve um empate!\n");
        break;

      case 6:
         if(pibPerCapita1 > pibPerCapita2)
         printf("Carta 1 venceu (PIB per Capita)\n");
        else if(pibPerCapita1 < pibPerCapita2)
         printf("Carta 2 venceu (PIB per Capita)\n");
        else
         printf("Houve um empate!\n");
        break;

      default:
         printf("Opcao invalida!\n");
     }


  // Área para exibição dos dados da cidade
      printf("\n estado: %c ", estado1);
      printf("\n carta: %s ", carta1);
      printf("\n nome da cidade: %s ", nomeCidade1);
      printf("\n populacao : %d", populacao1);
      printf("\n area : %.2f km", area1);
      printf("\n pib : %.2f bilhoes de reais", pib1);
      printf("\n pontos turisticos : %d", pontosturisticos1);
      printf("\n densidade populacional : %.2f habitantes por km", densidadePopulacional1);
      printf("\n PIB per Capita : %.2f reais", pibPerCapita1 );

      printf("\n estado: %c ", estado2);
      printf("\n carta: %s ", carta2);
      printf("\n nome da cidade: %s ", nomeCidade2);
      printf("\n populacao : %d", populacao2);
      printf("\n area : %.2f km", area2);
      printf("\n pib : %.2f bilhoes de reais", pib2);
      printf("\n pontos turisticos : %d", pontosturisticos2);
      printf("\n densidade populacional : %.2f habitantes por km", densidadePopulacional2);
      printf("\n PIB per Capita : %.2f reais", pibPerCapita2);
return 0;
} 

