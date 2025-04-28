#include <stdio.h>
#include <string.h>

int main(){
    // Variáveis da Primeira Carta.
    int pontos;
    unsigned long int populacao;
    float area, pib, densidade, per_capita;
    char cidade[50], estado[2], codigo[3];
    // Variáveis da Segunda Carta.
    int pontos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, per_capita2;
    char cidade2[50], estado2[2], codigo2[3];

        // Boas vindas ao jogo Super Trunfo de Países.
    printf("\n--- BEM-VINDO(A) AO GAME SUPER TRUNFO DE PAÍSES! ---\n");

        // Forneça os dados da primeira carta.
    printf("\nPOR FAVOR, FORNEÇA OS DADOS DA PRIMEIRA CARTA A SEGUIR.\n");
    printf("\nEscolha uma letra de estado: A, B, C, D, E, F, G, H.\n");
    scanf("%1s", estado);
    printf("Insira o código da carta entre: 01, 02, 03, 04.\n");
    scanf("%2s", codigo);

    // Limpa o buffer do teclado para evitar problemas com o fgets.
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Qual a população?\n");
    scanf("%u", &populacao);

    printf("Qual a área da sua cidade (em km²)?\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem sua cidade?\n");
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

    printf("\nEscolha uma letra de estado: A, B, C, D, E, F, G, H.\n");
    scanf("%1s", estado2);

    printf("Insira o código da carta entre: 01, 02, 03, 04.\n");
    scanf("%2s", codigo2);

    // Limpa o buffer do teclado para evitar problemas com o fgets.
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a população?\n");
    scanf("%u", &populacao2);

    printf("Qual a área da sua cidade (em km²)?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);
    
    printf("Quantos pontos turisticos tem sua cidade?\n");
    scanf("%d", &pontos2);
    
    // Cálculo de densidade populacional E PIB per capita.
    densidade2 = populacao2 / area2;
    per_capita2 = pib2 / populacao2;
        
    // Cálculo do Super Poder da Carta 2.
    float superPoder2 = ((int)populacao2 + (float)area2 + (float)pib2 + (int)pontos2 +
    (float)per_capita2 + (float)densidade2);

    // Comparações da Carta 1.
    int maiorPopulacao = populacao > populacao2;
    int maiorArea = area > area2;
    int maiorPIB = pib > pib2;
    int maisPontos = pontos > pontos2;
    int maiorPerCapita = per_capita > per_capita2;
    int menorDensidade = densidade < densidade2;
    int maiorPoder = superPoder1 > superPoder2;
    // Comparações da Carta 2.
    int maiorPopulacao2 = populacao < populacao2;
    int maiorArea2 = area < area2;
    int maiorPIB2 = pib < pib2;
    int maisPontos2 = pontos < pontos2;
    int maiorPerCapita2 = per_capita < per_capita2;
    int menorDensidade2 = densidade > densidade2;
    int maiorPoder2 = superPoder1 < superPoder2;

    // Exibir os dados da Carta 1.
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("\nEstado: %s.", estado);
    printf("\nCódigo: %s%s.", estado, codigo);
    printf("\nCidade: %s.", cidade);
    printf("\nPopulação: %u.\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d\n", populacao, maiorPopulacao);
    printf("*************************************************************************");
    printf("\nÁrea: %.2fkm².\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d\n", area, maiorArea);
    printf("*************************************************************************");
    printf("\nPIB: %.2f.\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d\n", pib, maiorPIB);
    printf("*************************************************************************");
    printf("\nPontos turísticos: %d.\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d\n", pontos, maisPontos);
    printf("*************************************************************************");
    printf("\nDensidade populacional: %.2f.\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d\n", densidade, menorDensidade);
    printf("*************************************************************************");
    printf("\nPIB per Capita: %.2f.\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d\n", per_capita, maiorPerCapita);
    printf("*************************************************************************");
    printf("\nO valor do Super Poder da Carta 1 é: %.2f.\nCarta 1 venceu (1) ou perdeu (0)? Resultado: %d", superPoder1, maiorPoder);
    printf("\n--- FIM DOS DADOS DA CARTA 1 ---\n");
    printf("------------------------------------");

    // Exibir os dados da Carta 2.
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("\nEstado: %s.", estado2);
    printf("\nCódigo: %s%s.", estado2, codigo2);
    printf("\nCidade: %s.", cidade2);
    printf("\nPopulação: %u.\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d\n", populacao2, maiorPopulacao2);
    printf("*************************************************************************");
    printf("\nÁrea: %.2fkm².\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d\n", area2, maiorArea2);
    printf("*************************************************************************");
    printf("\nPIB: %.2f.\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d\n", pib2, maiorPIB2);
    printf("*************************************************************************");
    printf("\nPontos turísticos: %d.\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d\n", pontos2, maisPontos2);
    printf("*************************************************************************");
    printf("\nDensidade populacional: %.2f.\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d\n", densidade2, menorDensidade2);
    printf("*************************************************************************");
    printf("\nPIB per Capita: %.2f.\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d\n", per_capita2, maiorPerCapita2);
    printf("*************************************************************************");
    printf("\nO valor do Super Poder da Carta 2 é: %.2f.\nCarta 2 venceu (1) ou perdeu (0)? Resultado: %d", superPoder2, maiorPoder2);
    printf("\n--- FIM DOS DADOS DA CARTA 2 ---\n");

    return 0;
}
