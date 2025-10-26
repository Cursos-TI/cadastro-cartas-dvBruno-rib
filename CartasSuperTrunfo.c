#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Definindo as variáveis para armazenar as propriedades das cidades

  //carta 1
  char estado;
  char codigo[5];
  char nome_cidade[50];
  int populacao;
  float area;
  float pib;
  int numeros_pontos_turisticos;

  //carta 2
  char estado2;
  char codigo2[5];
  char nome_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int numeros_pontos_turisticos2;


  printf("===== Cadastro de Cartas =====\n\n");



  //Entrada de dados da primeira Carta
  printf("Digite a letra do estado: ");
  scanf("%c", &estado);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade);

  printf("Digite o número de habitantes: ");
  scanf("%d", &populacao);

  printf("Digite a área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeros_pontos_turisticos);

  printf("\n");

  printf("Primeira carta criada com SUCESSO!\n\n");



  //Entrada de Dados da segunda carta
  printf("Digite a letra do estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade2);

  printf("Digite o número de habitantes: ");
  scanf("%d", &populacao2);

  printf("Digite a área: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeros_pontos_turisticos2);
  printf("\n");

  printf("Segunda carta criada com SUCESSO!\n\n");
  

  //Imprimindo cartas criadas
  printf("=== SUAS CARTAS CRIADAS ===\n\n");

  //imprimindo carta 1
  printf("CARTA 1\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n\n", numeros_pontos_turisticos);


  //imprimindo carta 2
  printf("CARTA 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", numeros_pontos_turisticos2);

  printf("\n\n");




return 0;
} 
