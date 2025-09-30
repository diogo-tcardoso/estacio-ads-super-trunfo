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
    int resultado1, resultado2;

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
    int escolha_atributo1, escolha_atributo2;
    printf ("*** Escolha o Primeiro Atributo para Comparar ***\n");
    printf ("1 - População\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Densidade Populacional\n");
    printf ("5 - PIB per Capita\n");
    printf ("6 - Pontos Turisticos\n");
    printf ("Escolha: \n");
    scanf ("%d", &escolha_atributo1);

    printf ("*** Escolha o Segundo Atributo para Comparar ***\n");
    printf ("1 - População\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Densidade Populacional\n");
    printf ("5 - PIB per Capita\n");
    printf ("6 - Pontos Turisticos\n");
    printf ("Escolha: \n");
    scanf ("%d", &escolha_atributo2);
    
    //switch para comparar os atributos escolhidos
    switch (escolha_atributo1) {
        case 1:
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            resultado1 = pib_cidade1 > pib_cidade2 ? 1 : 0;
            break;
        case 4:
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 5:
            resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
            break;
        case 6:
            resultado1 = pontos_turisticos_cidade1 > pontos_turisticos_cidade2 ? 1 : 0;
            break;
        default:
            printf("Escolha inválida! \n");
            break;
    }

    if (escolha_atributo1 == escolha_atributo2) {
        printf ("Os atributos escolhidos são iguais, por favor escolha atributos diferentes.\n");
    } else {
        switch (escolha_atributo2) {
            case 1:
                populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                area1 > area2 ? 1 : 0;
                break;
            case 3:
                pib_cidade1 > pib_cidade2 ? 1 : 0;
                break;
            case 4:
                densidade1 < densidade2 ? 1 : 0;
                break;
            case 5:
                pib_per_capita1 > pib_per_capita2 ? 1 : 0;
                break;
            case 6:
                pontos_turisticos_cidade1 > pontos_turisticos_cidade2 ? 1 : 0;
                break;
            default:
                printf("Escolha inválida! \n");
                break;
        }
    }

    if (resultado1 && resultado2) {
        printf("Você vence!\n");
    } else if (resultado1 != resultado2) {
        printf("Deu empate!\n");
    } else {
        printf("Infelizmente você perdeu!\n");
    }
}