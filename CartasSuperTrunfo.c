#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado; 
  char carta[50];
  char nomeCidade[100];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;


  // Área para entrada de dados
     printf("Digite o nome do estado: \n");
     scanf("%c", &estado);

     printf("Digite uma carta: \n");
     scanf("%s", carta);

     printf("Digite o nome da cidade: \n");
     scanf("%s", nomeCidade);

     printf(" Digite a populacao: \n");
     scanf("%d", &populacao);

     printf("Digite a area: \n");
     scanf("%f", &area);

     printf("Digite o pib: \n");
     scanf("%f", &pib);

     printf("Digite os pontos turisticos: \n");
     scanf("%d", &pontosturisticos);


  // Área para exibição dos dados da cidade
      printf("\n estado: %c ", estado);
      printf("\n carta: %s ", carta);
      printf("\n nome da cidade: %s ", nomeCidade);
      printf("\n populacao : %d", populacao);
      printf("\n area : %.2f km", area);
      printf("\n pib : %.2f bilhoes de reais", pib);
      printf("\n pontos turisticos : %d", pontosturisticos);

return 0;
} 
