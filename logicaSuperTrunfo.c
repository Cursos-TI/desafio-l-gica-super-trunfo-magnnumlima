#include <stdio.h>

int main() {
    // Estrutura de armazenamento
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    int escolha1, escolha2;

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

    // Área de escolha de ATRIBUTOS 1
    printf("\nEscolha o primeiro atributo para comparar (1 - 6):\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade\n");
    printf("6. PIB per capita\n");
    printf("\nDigite a sua escolha: ");
    scanf("%d", &escolha1);

    // Área de escolha de ATRIBUTOS 2
    printf("\nEscolha o segundo atributo para comparar (não pode ser o mesmo do primeiro) (1 - 6):\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade\n");
    printf("6. PIB per capita\n");
    printf("\nDigite a sua escolha: ");
    scanf("%d", &escolha2);

    // Verificando se os atributos não são iguais
    if (escolha2 == escolha1) {
        printf("\nVocê não pode escolher o mesmo atributo\n");
    }

    // Vencedor de cada atributo
    int v1 = 0, v2 = 0;
    float soma1 = 0, soma2 = 0;

    // Comparação do primeiro atributo
    printf("\n***Comparando o primeiro atributo***\n");
    switch (escolha1) {
        case 1: // Comparar População
            printf("Carta 1: %s (%d)\n", nome1, populacao1);
            printf("Carta 2: %s (%d)\n", nome2, populacao2);
            v1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2: // Comparar Área
            printf("Carta 1: %s (%.2f km2)\n", nome1, area1);
            printf("Carta 2: %s (%.2f km2)\n", nome2, area2);
            v1 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: // Comparar PIB
            printf("Carta 1: %s (%.2f)\n", nome1, pib1);
            printf("Carta 2: %s (%.2f)\n", nome2, pib2);
            v1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: // Comparar Pontos Turísticos
            printf("Carta 1: %s (%d)\n", nome1, pontos_turisticos1);
            printf("Carta 2: %s (%d)\n", nome2, pontos_turisticos2);
            v1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2) ? 2 : 0;
            soma1 += pontos_turisticos1;
            soma2 += pontos_turisticos2;
            break;
        case 5: // Comparar Densidade
            printf("Carta 1: %s (%.2f habitantes/km2)\n", nome1, densidade1);
            printf("Carta 2: %s (%.2f habitantes/km2)\n", nome2, densidade2);
            v1 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 2 : 0;
            soma1 += densidade1;
            soma2 += densidade2;
            break;
        case 6: // Comparar PIB per capita
            printf("Carta 1: %s (%.2f)\n", nome1, pib_per_capita1);
            printf("Carta 2: %s (%.2f)\n", nome2, pib_per_capita2);
            v1 = (pib_per_capita1 > pib_per_capita2) ? 1 : (pib_per_capita1 < pib_per_capita2) ? 2 : 0;
            soma1 += pib_per_capita1;
            soma2 += pib_per_capita2;
            break;
        default:
            printf("Escolha inválida.\n");
            
    }

    // Comparação do segundo atributo
    printf("\n***Comparando o segundo atributo***\n");
    switch (escolha2) {
        case 1: // Comparar População
            printf("Carta 1: %s (%d)\n", nome1, populacao1);
            printf("Carta 2: %s (%d)\n", nome2, populacao2);
            v2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2: // Comparar Área
            printf("Carta 1: %s (%.2f km2)\n", nome1, area1);
            printf("Carta 2: %s (%.2f km2)\n", nome2, area2);
            v2 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: // Comparar PIB
            printf("Carta 1: %s (%.2f)\n", nome1, pib1);
            printf("Carta 2: %s (%.2f)\n", nome2, pib2);
            v2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: // Comparar Pontos Turísticos
            printf("Carta 1: %s (%d)\n", nome1, pontos_turisticos1);
            printf("Carta 2: %s (%d)\n", nome2, pontos_turisticos2);
            v2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2) ? 2 : 0;
            soma1 += pontos_turisticos1;
            soma2 += pontos_turisticos2;
            break;
        case 5: // Comparar Densidade
            printf("Carta 1: %s (%.2f habitantes/km2)\n", nome1, densidade1);
            printf("Carta 2: %s (%.2f habitantes/km2)\n", nome2, densidade2);
            v2 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2) ? 2 : 0;
            soma1 += densidade1;
            soma2 += densidade2;
            break;
        case 6: // Comparar PIB per capita
            printf("Carta 1: %s (%.2f)\n", nome1, pib_per_capita1);
            printf("Carta 2: %s (%.2f)\n", nome2, pib_per_capita2);
            v2 = (pib_per_capita1 > pib_per_capita2) ? 1 : (pib_per_capita1 < pib_per_capita2) ? 2 : 0;
            soma1 += pib_per_capita1;
            soma2 += pib_per_capita2;
            break;
        default:
            printf("Escolha inválida.\n");
            
    }

    // Mostrando o resultado da soma
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    // Comparação final
    if (soma1 > soma2) {
        printf("\nA Carta 1 (%s)venceu com maior soma de atributos!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nA Carta 2 (%s)venceu com maior soma de atributos!\n", nome2);
    } else {
        printf("\n***EMPATE***\n");
        printf("\n As duas cartas possuem o mesmo valor depois da soma de atributos\n");
        printf("Carta 1 (%s) com (%.2f)", nome1, soma1);
        printf("Carta 2 (%s) com (%.2f)", nome2, soma2);
    }

    return 0;
}
