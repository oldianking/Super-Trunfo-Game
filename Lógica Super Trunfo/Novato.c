#include <stdio.h>
#include <string.h>

int main(){
    // Variáveis da Primeira Carta.
    int pontos;
    unsigned long int populacao;
    float area, pib, densidade, per_capita;
    char cidade[50], estado[3], codigo[3];
    // Variáveis da Segunda Carta.
    int pontos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, per_capita2;
    char cidade2[50], estado2[3], codigo2[3];

        // Boas vindas ao jogo Super Trunfo de Países.
    printf("\n--- BEM-VINDO(A) AO GAME SUPER TRUNFO DE PAÍSES! ---\n");

        // Forneça os dados da primeira carta.
    printf("\nPOR FAVOR, FORNEÇA OS DADOS DA PRIMEIRA CARTA A SEGUIR.\n");
    printf("Digite apenas a sigla do estado:\n");
    scanf("%2s", estado);
    printf("Insira o código da carta entre: 01, 02, 03, 04.\n");
    scanf("%2s", codigo);

    // Limpa o buffer do teclado para evitar problemas com o fgets.
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Qual a população?\n");
    scanf("%u", &populacao);

    printf("Qual a área da cidade (em km²)?\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a cidade?\n");
    scanf("%d", &pontos);

    // Cálculo de densidade populacional E PIB per capita.
    densidade = populacao / area;
    per_capita = pib / populacao;
    
    // Cálculo do Super Poder da Carta 1.
    float superPoder1 = (int)populacao + (float)area + (float)pib + (int)pontos +
    (float)per_capita + (float)densidade;

    printf("\n------------------------------------------------------\n");

        // Fornecer os dados da Segunda Carta.
    printf("\nPOR FAVOR, FORNEÇA OS DADOS DA SEGUNDA CARTA A SEGUIR.\n");

    printf("Digite apenas a sigla do estado:\n");
    scanf("%2s", estado2);

    printf("Insira o código da carta entre: 01, 02, 03, 04.\n");
    scanf("%2s", codigo2);

    // Limpa o buffer do teclado para evitar problemas com o fgets.
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a população?\n");
    scanf("%u", &populacao2);

    printf("Qual a área da cidade (em km²)?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);
    
    printf("Quantos pontos turisticos tem a cidade?\n");
    scanf("%d", &pontos2);
    
    // Cálculo de densidade populacional E PIB per capita.
    densidade2 = populacao2 / area2;
    per_capita2 = pib2 / populacao2;
        
    // Cálculo do Super Poder da Carta 2.
    float superPoder2 = ((int)populacao2 + (float)area2 + (float)pib2 + (int)pontos2 +
    (float)per_capita2 + (float)densidade2);

    // Exibir os dados da Carta 1.
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("\nEstado: %s.", estado);
    printf("\nCódigo: %s%s.", estado, codigo);
    printf("\nCidade: %s.", cidade);
    printf("\nPopulação: %u.", populacao);
    printf("\n******************************************");
    printf("\nÁrea: %.2fkm².", area);
    printf("\n******************************************");
    printf("\nPIB: %.2f.", pib);
    printf("\n******************************************");
    printf("\nPontos turísticos: %d.", pontos);
    printf("\n******************************************");
    printf("\nDensidade populacional: %.2f.", densidade);
    printf("\n******************************************");
    printf("\nPIB per Capita: %.2f.", per_capita);
    printf("\n******************************************");
    printf("\nO valor do Super Poder da Carta 1 é: %.2f.", superPoder1);
    printf("\n--------------------------------");
    printf("\n--- FIM DOS DADOS DA CARTA 1 ---\n");
    printf("------------------------------------");

    // Exibir os dados da Carta 2.
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("\nEstado: %s.", estado2);
    printf("\nCódigo: %s%s.", estado2, codigo2);
    printf("\nCidade: %s.", cidade2);
    printf("\nPopulação: %u.", populacao2);
    printf("\n******************************************");
    printf("\nÁrea: %.2fkm².", area2);
    printf("\n******************************************");
    printf("\nPIB: %.2f.", pib2);
    printf("\n******************************************");
    printf("\nPontos turísticos: %d.", pontos2);
    printf("\n******************************************");
    printf("\nDensidade populacional: %.2f.", densidade2);
    printf("\n******************************************");
    printf("\nPIB per Capita: %.2f.", per_capita2);
    printf("\n******************************************");
    printf("\nO valor do Super Poder da Carta 2 é: %.2f.", superPoder2);
    printf("\n--------------------------------");
    printf("\n--- FIM DOS DADOS DA CARTA 2 ---\n");
    printf("\n--------------------------------");
    printf("\n--- COMPARAÇÕES DAS DUAS CARTAS ---\n");
    printf("COMPARANDO A POPULAÇÃO DAS DUAS CARTAS:");
    if (populacao > populacao2) {
        printf("\nCarta 1 - %s (%s): %u.", cidade, estado, populacao);
        printf("\nCarta 2 - %s (%s): %u.", cidade2, estado2, populacao2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", estado);
    }
    else {
        printf("\nCarta 1 - %s (%s): %u.", cidade, estado, populacao);
        printf("\nCarta 2 - %s (%s): %u.", cidade2, estado2, populacao2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", estado2);
    }

    return 0;
}
