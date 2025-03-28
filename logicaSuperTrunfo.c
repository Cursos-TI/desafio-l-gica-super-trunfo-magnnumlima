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
    int escolha;

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

    // Area de escolha de ATRIBUTOS

    printf("Escolha o atributo que voce deseja comparar(APENAS DE 1 A 6):\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade\n");
    printf("6. PIB per capita\n");
    scanf("%d", &escolha);

    // Comparação de acordo com a escolha do jogador

    switch (escolha)
    {


    case 1: // COMPARAR POPULAÇÃO

    
        printf("Comparacao de cartas, voce escolheu POPULACAO\n");
        printf("Carta 1 %s do estado (%s): %d\n", nome1, estado1, populacao1);
        printf("Carta 2 %s do estado (%s): %d\n", nome2, estado2, populacao2);

        if (populacao1 > populacao1)
        {
        printf("Carta 1 %s venceu!! (%d)\n", nome1, populacao1);
        }else if (populacao2 > populacao1){
        printf("Carta 2 %s venceu!! (%d)\n", nome2, populacao2);

        }else{
        printf("EMPATE!\n");
        printf("As duas cartas possuem a mesma populacao\n");
        printf("Populacao carta 1 (%d)\n", populacao1);
        printf("Populacao carta 2 (%d)\n", populacao2);
        }
        break;
    

        case 2: // COMPARAR AREA KM2


        printf("Comparacao de cartas, voce escolheu AREA km2\n");
        printf("Carta 1 %s do estado (%s): %.2f\n", nome1, estado1, area1);
        printf("Carta 2 %s do estado (%s): %.2f\n", nome2, estado2, area2);

        if (area1 > area2)
        {
            printf("Carta 1 %s venceu!! Area (%.2f)\n", nome1, area1);
        }else if (area2 > area1){
        printf("Carta 2 %s venceu!! Area (%.2f)\n", nome2, area2);
        }else{
            printf("EMPATE!\n");
            printf("As duas cartas possuem a mesma AREA km2\n");
            printf("Area carta 1 (%.2f)\n", area1);
            printf("Area carta 2 (%.2f)\n", area2);

        }
        break;


        case 3: // COMPARAR PIB


        printf("Comparacao de cartas, voce escolheu PIB\n");
        printf("Carta 1 %s do estado (%s): %.2f\n", nome1, estado1, pib1);
        printf("Carta 2 %s do estado (%s): %.2f\n", nome2, estado2, pib2);

        if (pib1 > pib2){
            printf("Carta 1 %s do estado (%s) venceu!! PIB (%.2f)", nome1, estado1, pib1);
        }else if (pib2 > pib1){
            printf("Carta 2 %s do estado (%s) venceu!! PIB (%.2f)", nome2, estado2, pib2);

        }else{
            printf("EMPATE!\n");
            printf("As duas cartas possuem o mesmo PIB\n");
            printf("PIB carta 1 (%.2f)\n", pib1);
            printf("PIB carta 2 (%.2f)\n", pib2);
        }
        break;


        case 4: // COMPARAR PONTOS TURISTICOS


        printf("Comparacao de cartas, voce escolheu Pontos Turisticos\n");
        printf("Carta 1 %s do estado (%s): %d\n", nome1, estado1, pontos_turisticos1);
        printf("Carta 2 %s do estado (%s): %d\n", nome2, estado2, pontos_turisticos2);

        if (pontos_turisticos1 > pontos_turisticos2){
            printf("Carta 1 %s venceu!! Pontos Turisticos(%d)\n", nome1, pontos_turisticos1);
        }else if (pontos_turisticos2 > pontos_turisticos1){
            printf("Carta 2 %s venceu!! Pontos Turisticos(%d)\n", nome1, pontos_turisticos2);
        }else{
            printf("EMPATE!\n");
            printf("As duas cartas possuem o mesmo numero de Pontos Turisticos\n");
            printf("Pontos Turisticos carta 1 (%d)\n", pontos_turisticos1);
            printf("Pontos Turisticos carta 2 (%d)\n", pontos_turisticos2);
        }
        break;


        case 5: // COMPARAR DENSIDADE DEMOGRAFICA


        printf("Comparacao de cartas, voce escolheu Densidade Demografica\n");
        printf("Carta 1 %s do estado (%s): %.2f\n", nome1, estado1, densidade1);
        printf("Carta 2 %s do estado (%s): %.2f\n", nome2, estado2, densidade2);

        if (densidade1 < densidade2){
            printf("Carta 1 %s venceu!! Habitantes/km2 (%.2f)\n", nome1, densidade1);
        }else if(densidade2 < densidade1){
            printf("Carta 2 %s venceu!! Habitantes/km2 (%.2f)\n", nome2, densidade2);
        }else{
            printf("EMPATE!\n");
            printf("As duas cartas possuem a mesma Densidade Femografica\n");
            printf("Densidade Femografica carta 1 (%.2f)\n", densidade1);
            printf("Densidade Femografica carta 2 (%.2f)\n", densidade2);

        }
        break;

        case 6: // Comparar PIB per capita
        
        printf("Comparacao de cartas, voce escolheu PIB per Capita\n");
        printf("Carta 1 %s do estado (%s): %.2f\n", nome1, estado1, pib_per_capita1);
        printf("Carta 2 %s do estado (%s): %.2f\n", nome2, estado2, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2){
            printf("Carta 1 %s venceu!! PIB per capita (%.2f)\n", nome1, pib_per_capita1);
        }else if (pib_per_capita2 > pib_per_capita1){
            printf("Carta 2 %s venceu!! PIB per capita (%.2f)\n", nome2, pib_per_capita2);
        }else{
            printf("EMPATE!\n");
            printf("As duas cartas possuem o mesmo PIB per capita\n");
            printf("PIB per capita carta 1 (%.2f)\n", pib_per_capita1);
            printf("PIB per capita carta 2 (%.2f)\n", pib_per_capita2);
        }
        break;


        default:


        printf("Opcao invalida, por favor escolha entre 1 - 6\n");


    }

   
    return 0;
}
