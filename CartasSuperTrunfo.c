#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigocarta [4];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;
  
  // Área para entrada de dados
  printf("Digite seu Estado: \n");
  scanf("%c", &estado);

  printf("Digite seu Codigo da Carta: \n");
  scanf("%c", codigocarta);

  printf("Digite a População do Estado: \n");
  scanf("%d", &populacao);

  printf("Digite a Area do Estado: \n");
  scanf("%f", &area);

  printf("Digite o Pib do Estado: \n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("&d", &pontosturisticos);
  
  // Área para exibição dos dados da cidade

  printf("Seu Estado é: %c\n", estado);
  printf("Seu Codigo da Carta é: %c\n", codigocarta);
  printf("Sua população é: %d\n", populacao);
  printf("Sua area é: %f\n", area);
  printf("Seu PIB é: %f\n", pib);
  printf("A quantidade de pontos turisticos é: %d", pontosturisticos);

return 0;
} 
