#include <stdio.h>

// Função principal
int main()
{
    // Estrutura para armazenar dados da carta
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // Entrada de dados Carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o codigo da carta 1 (Ex: A01): ");
    scanf(" %[^\n]", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da area em km2 da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados Carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o codigo da carta 2 (Ex: B01): ");
    scanf(" %[^\n]", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da area em km2 da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Calculo da Densidade Populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Escolha do atributo: PIB per capita
    char atributo_escolhido[] = "PIB per capita";

    // Valores comparados
    printf("\nComparacao de Cartas (Atributo: %s)\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib_per_capita2);

    // Saida de dados
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: EMPATE Ambas as cartas possuem o mesmo valor de %s.\n", atributo_escolhido);
    }

    return 0;
}
