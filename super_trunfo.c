#include <stdio.h>

int main()
{
    // Variaveis para armazenar os dados das cartas
    // Cada carta tem um Estado, codigo, nome da cidade, populacao, Área, PIB e pontos turisticos
    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib_cidade1, pib_cidade2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    int pontos_turisticos_cidade1, pontos_turisticos_cidade2;

    // Leitura dos dados da primeira
    printf("Digite o estado da primeira carta (uma letra entre A e H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta (entre 01 e 04): ");
    scanf("%s", codigo_da_carta1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", cidade1);
    printf("Digite a populacao da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area da primeira cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib_cidade1);
    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos_cidade1);
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib_cidade1 / populacao1;

    // Leitura dos dados da segunda carta
    printf("Digite o estado da segunda carta (uma letra entre A e H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta (entre 01 e 04): ");
    scanf("%s", codigo_da_carta2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", cidade2);
    printf("Digite a populacao da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da segunda cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib_cidade2);
    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos_cidade2);
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib_cidade2 / populacao2;

    // Exibindo os dados da Carta 1
    printf("\n*** Dados da Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib_cidade1);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos_cidade1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita1);

    // Exibindo os dados da Carta 2
    printf("\n*** Dados da Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib_cidade2);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos_cidade2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita2);

    // Menu de escolha de atributo para comparação
    int escolha_atributo;
    printf ("*** Escolha o Atributo para Comparar ***\n");
    printf ("1 - População\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Densidade Populacional\n");
    printf ("5 - PIB per Capita\n");
    printf ("6 - Pontos Turisticos\n");
    printf ("Escolha: ");
    scanf ("%d", &escolha_atributo);

    //switch para comparar os atributos escolhidos
    switch (escolha_atributo) {
        case 1:
            if ( populacao1 > populacao2 ){
                printf ("População 1 venceu!!\n");
            } else {
                printf ("População 2 venceu!!\n");
            }
            break;
        case 2:
            if ( area1 > area2 ){
                printf ("Área 1 venceu!!\n");
            } else {
                printf ("Área 2 venceu!!\n");
            }
            break;
        case 3:
            if ( pib_cidade1 > pib_cidade2 ){
                printf ("PIB 1 venceu!!\n");
            } else {
                printf ("PIB 2 venceu!!\n");
            }
            break;
        case 4:
            if ( densidade1 > densidade2 ){
                printf ("Densidade Populacional 2 venceu!!\n");
            } else {
                printf ("Densidade Populacional 1 venceu!!\n");
            }
            break;
        case 5:
            if ( pib_per_capita1 > pib_per_capita2 ){
                printf ("PIB per Capita 1 venceu!!\n");
            } else {
                printf ("PIB per Capita 2 venceu!!\n");
            }
            break;
        case 6:
            if ( pontos_turisticos_cidade1 > pontos_turisticos_cidade2 ){
                printf ("Pontos Turisticos 1 venceu!!\n");
            } else {
                printf ("Pontos Turisticos 2 venceu!!\n");
            }
            break;
        default:
            printf("Escolha inválida! \n");
            break;
    }
}