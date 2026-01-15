#include <stdio.h>

// Desafio Super Trunfo - Países
//Nível Mestre

int main() {
   // Declaração das variáveis para a carta 1 e carta 2
   char estado1, estado2;
   char codigo1[10], codigo2[10], cidade1[50], cidade2[50];
   int pontos_turisticos1, pontos_turisticos2;
   unsigned long int habitantes1, habitantes2;
   float area1, area2, pib1, pib2;
   
   // Entrada de dados para a carta 1 e carta 2
   printf("Digite o estado de A a H para a carta 1:\n");
   scanf(" %c", &estado1);
   printf("Digite o estado de A a H para a carta 2:\n");
   scanf(" %c", &estado2);

   printf("Digite o codigo para a carta 1 (letra utilizada no estado seguida de um número de 01 a 04):\n");
   scanf("%s", codigo1);
   printf("Digite o codigo para a carta 2 (letra utilizada no estado seguida de um número de 01 a 04):\n");
   scanf("%s", codigo2);

   printf("Digite o nome da cidade para a carta 1:\n");
   scanf(" %[^\n]s", cidade1);
   printf("Digite o nome da cidade para a carta 2:\n");
   scanf(" %[^\n]s", cidade2);

   printf("Digite o número de habitantes para a carta 1:\n");
   scanf("%lu", &habitantes1);
   printf("Digite o número de habitantes para a carta 2:\n");
   scanf("%lu", &habitantes2);

   printf("Digite a área em km² para a carta 1:\n");
   scanf("%f", &area1);
   printf("Digite a área em km² para a carta 2:\n");
   scanf("%f", &area2);

   printf("Digite o PIB em bilhões de reais para a carta 1:\n");
   scanf("%f", &pib1);
   printf("Digite o PIB em bilhões de reais para a carta 2:\n");
   scanf("%f", &pib2);

   printf("Digite o número de pontos turísticos para a carta 1:\n");
   scanf("%d", &pontos_turisticos1);
   printf("Digite o número de pontos turísticos para a carta 2:\n");
   scanf("%d", &pontos_turisticos2);

   //Cálculo da densidade populacional para as cartas 1 e 2

   float densidade1 = (float) habitantes1/area1;

   float densidade2 = (float) habitantes2/area2;

   // Cálculo do PIB per capita

   float pib_percapita1 = (float) (pib1*10e9)/habitantes1;

   float pib_percapita2 = (float) (pib2*10e9)/habitantes2;

   //Cálculo do inverso da densidade para as cartas 1 e 2

   float inverso_densidade1 = (float) 1/densidade1;

   float inverso_densidade2 = (float) 1/densidade2;

   //Cálculo do Super poder para as cartas 1 e 2

   float super_poder1 = (float) habitantes1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + inverso_densidade1;

   float super_poder2 = (float) habitantes2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + inverso_densidade2;

   // Exibição dos dados das cartas 1 e 2
   printf(
      "Carta 1:\n"
      "Estado: %c\n"
      "Código: %s\n"
      "Nome da Cidade: %s\n"
      "População: %d\n"
      "Área: %.2f km²\n"
      "PIB: %.2f bilhões de reais\n"
      "Número de Pontos Turísticos: %d\n"
      "Densidade Populacional: %0.2f hab/km²\n"
      "PIB per Capita: %0.2f reais\n\n",
      estado1, codigo1, cidade1, habitantes1, area1, pib1, pontos_turisticos1, densidade1, pib_percapita1
   );

   printf(
      "Carta 2:\n"
      "Estado: %c\n"
      "Código: %s\n"
      "Nome da Cidade: %s\n"
      "População: %d\n"
      "Área: %.2f km²\n"
      "PIB: %.2f bilhões de reais\n"
      "Número de Pontos Turísticos: %d\n\n"
      "Densidade Populacional: %0.2f hab/km²\n"
      "PIB per Capita: %0.2f reais\n\n",
      estado2, codigo2, cidade2, habitantes2, area2, pib2, pontos_turisticos2, densidade2, pib_percapita2
   );
   
   printf("Comparação de Cartas, a carta que tiver o valor 1 vence:\n");
   printf("População: Carta 1 versus Carta 2: %d X %d\n", habitantes1 > habitantes2, habitantes2 > habitantes1);
   printf("Área: Carta 1 versus Carta 2: %d X %d\n", area1 > area2, area2 > area1);
   printf("PIB: Carta 1 versus Carta 2: %d X %d\n", pib1 > pib2, pib2 > pib1);
   printf("Pontos Turísticos: Carta 1 versus Carta 2: %d X %d\n", pontos_turisticos1 > pontos_turisticos2, pontos_turisticos2 > pontos_turisticos1);
   printf("Densidade Populacional: Carta 1 versus Carta 2: %d X %d\n", densidade1 < densidade2, densidade2 < densidade1);
   printf("PIB per Capita: Carta 1 versus Carta 2: %d X %d\n", pib_percapita1 > pib_percapita2, pib_percapita2 > pib_percapita1);
   printf("Super Poder: Carta 1 versus Carta 2: %d X %d\n\n", super_poder1 > super_poder2, super_poder2 > super_poder1);

   return 0;
} 
