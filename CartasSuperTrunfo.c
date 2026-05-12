#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoA;
  char estadoB;
  char codigoA[10];
  char codigoB[10];
  char cidadeA[50];
  char cidadeB[50];
  int populacaoA;
  int populacaoB;
  float areaA;
  float areaB;
  float pibA;
  float pibB;
  int pt_turisticosA;
  int pt_turisticosB;

  // Área para entrada de dados
  printf("----INFORMAÇÕES DA CARTA 1----\n");
  printf("ESTADO - Digite uma letra (de A - H) para representar o Estado 1: \n");
  scanf("%c", &estadoA);

  printf("CÓDIGO - Digite um número de 01 a 04 para o código da carta 1: \n");
  scanf("%s", &codigoA);

  printf("CIDADE - Digite o nome da cidade da carta 1: \n");
  scanf("%s", cidadeA);

  printf("POPULAÇÃO - Digite a população da cidade da carta 1 (apenas números, sem vírgulas ou pontos. Ex: 123456): \n");
  scanf("%d", &populacaoA);

  printf("ÁREA - Digite a área total da cidade 1, com aproximação de duas casas decimais (Ex: 1234.56): \n");
  scanf("%f", &areaA);

  printf("PIB - Digite o PIB da cidade 1 em bilhões de reais, com aproximação de duas casas decimais: \n");
  scanf("%f", &pibA);

  printf("PTS TURÍSTICOS - Digite a quantidade de pontos turísticos da cidade 1: \n");
  scanf("%d", &pt_turisticosA);

  
  printf("----INFORMAÇÕES DA CARTA 2----\n");
  
  printf("ESTADO - Digite uma letra (de A - H) para representar o Estado 2: \n");
  scanf(" %c", &estadoB);

  printf("CÓDIGO - Digite um número de 01 a 04 para o código da carta 2: \n");
  scanf("%s", &codigoB);

  printf("CIDADE - Digite o nome da cidade da carta 2: \n");
  scanf("%s", cidadeB);

  printf("POPULAÇÃO - Digite a população da cidade da carta 2 (apenas números, sem vírgulas ou pontos. Ex: 123456): \n");
  scanf("%d", &populacaoB);

  printf("ÁREA - Digite a área total da cidade 2, com aproximação de duas casas decimais (Ex: 1234,56): \n");
  scanf("%f", &areaB);

  printf("PIB - Digite o PIB da cidade 2 em bilhões de reais, com aproximação de duas casas decimais: \n");
  scanf("%f", &pibB);

  printf("PTS TURÍSTICOS - Digite a quantidade de pontos turísticos da cidade 1: \n");
  scanf("%d", &pt_turisticosB);


// Área para exibição dos dados da cidade
  printf("----INFORMAÇÕES DAS CARTAS----\n");
  printf("**CARTA 1**\n");
  printf("Estado: %c\n", estadoA);
  printf("Código: %s\n", codigoA);
  printf("Nome da Cidade: %s\n", cidadeA);
  printf("População: %d habitantes\n",populacaoA);
  printf("Área: %.2fkm²\n",areaA);
  printf("PIB: %.2f bilhões de R$\n",pibA);
  printf("Número de pontos turísticos: %d\n",pt_turisticosA);
  float dens_popA = populacaoA / areaA;
  printf("Densidade populacional: %.2f hab/km²\n",dens_popA);
  float pib_capitaA = (pibA * 1000000000) / populacaoA;
  printf("PIB per capita: %.2f reais\n", pib_capitaA);

  printf("**CARTA 2**\n");
  printf("Estado: %c\n", estadoB);
  printf("Código: %s\n", codigoB);
  printf("Nome da Cidade: %s\n", cidadeB);
  printf("População: %d habitantes\n",populacaoB);
  printf("Área: %.2fkm²\n",areaB);
  printf("PIB: %.2f bilhões de R$\n",pibB);
  printf("Número de pontos turísticos: %d\n",pt_turisticosB);
  float dens_popB = (float) populacaoB / areaB;
  printf("Densidade populacional: %.2f hab/km²\n",dens_popB);
  float pib_capitaB = (float) (pibB * 1000000000) / populacaoB;
  printf("PIB per capita: %.2f reais\n", pib_capitaB);
  return 0;


} 
