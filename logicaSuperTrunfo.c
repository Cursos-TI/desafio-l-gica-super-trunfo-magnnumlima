#include <stdio.h>

// Estrutura para armazenar dados da carta

int main()
{
        char estado1[50], estado2[50];
        char codigo1[50], codigo2[50];
        char nome1[50], nome2[50];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontos_turisticos1, pontos_turisticos2;
        float densidade1, densidade2;
        float pib_per_capita1, pib_per_capita2;
        float super_poder1, super_poder2;


// Entrada de dados Carta 1


printf("Digite o estado da carta 1: ");
scanf(" %[^\n]", estado1);

printf("Digite o codigo da carta 1 (Ex: A01): ");
scanf(" %[^\n]", codigo1);

printf("Digite o nome da cidade da carta 1: ");
scanf(" %[^\n]", nome1);

printf("Digite a populacao da Carta 1: ");
scanf("%d", &populacao1);

printf("Digite o tamanho da area em km2 da carta 1: ");
scanf("%f", &area1);

printf("Digite PIB da carta 1: ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos da carta 1: ");
scanf("%d", &pontos_turisticos1);

printf("Digite o PIB per capita da carta 1: ");
scanf("%f", &pib_per_capita1);


// Entrada de dados Carta 2


printf("Digite o estado da carta 2: ");
scanf(" %[^\n]", estado2);

printf("Digite o codigo da carta 2 (Ex: B01): ");
scanf(" %[^\n]", codigo2);

printf("Digite o nome da cidade da carta 2: ");
scanf(" %[^\n]", nome2);

printf("Digite a populacao da Carta 2: ");
scanf("%d", &populacao2);

printf("Digite o tamanho da area em km2 da carta 2: ");
scanf("%f", &area2);

printf("Digite PIB da carta 2: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos da carta 2: ");
scanf("%d", &pontos_turisticos2);

printf("Digite o PIB per capita da carta 2: ");
scanf("%f", &pib_per_capita2);


// Calcular densidade e PIB per capita

densidade1 = (float)populacao1 / area1;
densidade2 = (float)populacao2 / area2;
pib_per_capita1 = pib1 / populacao1;
pib_per_capita2 = pib2 / populacao2;


// Calculando o SUPER PODER 

super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);


// COMPARAÇÕES JUNTAMENTE COM SAÍDA  

// ATUALIZAÇAO DO COODIGO DIA 23/03/2025 as 23:30 (adicionado SIM e NAO em comparaçoes)

printf("\nComparacao de Cartas:\n\n");

printf("Populacao: Carta 1 venceu ? (%s)\n", (populacao1 > populacao2) ? "SIM" : "NAO");
printf("Area: Carta 1 venceu ? (%s)\n", (area1 > area2) ? "SIM" : "NAO");
printf("PIB: Carta 1 venceu ? (%s)\n", (pib1 > pib2) ? "SIM" : "NAO");
printf("Pontos Turisticos: Carta 1 venceu ? (%s)\n", (pontos_turisticos1 > pontos_turisticos2) ? "SIM" : "NAO");
printf("Densidade Populacional: Carta 1 venceu ? (%s)\n", (densidade1 < densidade2) ? "SIM" : "NAO");
printf("PIB per Capita: Carta 1 venceu ? (%s)\n", (pib_per_capita1 > pib_per_capita2) ? "SIM" : "NAO");
printf("Super Poder: Carta 1 venceu ?(%s)\n", (super_poder1 > super_poder2) ? "SIM" : "NAO");

//COMPARACAO COM IF ELSE:

if (super_poder1 > super_poder2)
{printf("Carta 1 (%s) VENCEU, o SUPER PODER E MAIOR: %.2f", nome1, pib_per_capita1);

}else
printf("Carta 2 (%s) VENCEU, o SUPER PODER E MAIOR: %.2f", nome2, pib_per_capita2);


printf("O (SUPER PODER) E A POPULACAO + AREA + PIB + PONTOS TURISTICOS + PIB PER CAPITA DIVIDIDO PELA DENSIDADE SE O RESULTADO DA CARTA FOR MAIOR ELA VENCE.\n");



return 0;

}