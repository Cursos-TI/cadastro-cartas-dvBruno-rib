#include <stdio.h>

int main()
{
  // Definindo as variáveis para armazenar as propriedades das cidades

  // carta 1
  char estado;
  char codigo[5];
  char nome_cidade[50];
  unsigned long int populacao;
  float area;
  float pib;
  int numeros_pontos_turisticos;

  // carta 2
  char estado2;
  char codigo2[5];
  char nome_cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int numeros_pontos_turisticos2;

  printf("===== Cadastro de Cartas =====\n\n");

  // Entrada de dados da primeira Carta
  printf("Digite a letra do estado: ");
  scanf("%c", &estado);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao);

  printf("Digite a área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeros_pontos_turisticos);

  printf("\n");

  printf("Primeira carta criada com SUCESSO!\n\n");

  // Calculando a densidade populacional e PIB per capital da carta 1
  float densidade_populacional = (float)populacao / area;
  float pib_per_capital = (float)pib / populacao;

  // Calculando Super Poder carta 1
  float super_poder1 = (populacao + area + pib + pib_per_capital + (1 / densidade_populacional) + numeros_pontos_turisticos);

  // Entrada de Dados da segunda carta
  printf("Digite a letra do estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nome_cidade2);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao2);

  printf("Digite a área: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeros_pontos_turisticos2);
  printf("\n");

  printf("Segunda carta criada com SUCESSO!\n\n");

  // Calculando a densidade populacional e PIB per capital da carta 2
  float densidade_populacional2 = (float)populacao2 / area2;
  float pib_per_capital2 = (float)pib2 / populacao2;

  // Calculando Super Poder carta 2
  float super_poder2 = (populacao2 + area2 + pib2 + pib_per_capital2 + (1 / densidade_populacional2) + numeros_pontos_turisticos2);

  // Imprimindo cartas criadas
  printf("=== SUAS CARTAS CRIADAS ===\n\n");

  // imprimindo carta 1
  printf("CARTA 1\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Turísticos: %d\n", numeros_pontos_turisticos);
  printf("Densidade Populacional: %2.f hab/km² \n", densidade_populacional);
  printf("PIB per capita: %.2f reais\n", pib_per_capital);
  printf("Super Poder: %.2f\n\n", super_poder1);

  // imprimindo carta 2
  printf("CARTA 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Números de Pontos Turísticos: %d\n", numeros_pontos_turisticos2);
  printf("Densidade Populacional: %2.f hab/km²\n", densidade_populacional2);
  printf("PIB per capita: %.2f reais\n", pib_per_capital2);
  printf("Super Poder: %.2f\n", super_poder2);

  printf("\n\n");

  // Exibindo comparação entre cartas
  printf("===== COMPARAÇÃO ENTRE CARTAS =====\n");
  printf("Carta 1 (1) e Carta 2 (0)\n\n");

  printf("População: Carta %d venceu!\n", populacao > populacao2);
  printf("Área: Carta %d venceu!\n", area > area2);
  printf("PIB: Carta %d venceu!\n", area > area2);
  printf("Pontos Turísticos: Carta %d venceu!\n", numeros_pontos_turisticos > numeros_pontos_turisticos2);
  printf("Densidade Populacional: Carta %d venceu!\n", densidade_populacional < densidade_populacional2);
  printf("PIB per capita: Carta %d venceu!\n", pib_per_capital > pib_per_capital2);
  printf("Super Poder: Carta %d venceu!", super_poder1 > super_poder2);

  printf("\n\n");

  return 0;
}
