#include <stdio.h>

int main(){
    // Variáveis da Primeira Carta.
    int populacao, pontos;
    float area, pib;
    char cidade[50], estado[2], codigo[3];
    // Variáveis da Segunda Carta.
    int populacao2, pontos2;
    float area2, pib2;
    char cidade2[50], estado2[2], codigo2[3];

        // Boas vindas ao jogo Super Trunfo de Estados.
    printf("\n--- BEM-VINDO(A) AO GAME SUPER TRUNFO DE ESTADOS! ---\n");

        // Forneça os dados da primeira carta.
    printf("\nPOR FAVOR, FORNEÇA OS DADOS DA PRIMEIRA CARTA A SEGUIR.\n");
    printf("\nEscolha uma letra de estado: A, B, C, D, E, F, G, H.\n");
    scanf("%1s", estado);
    printf("Qual o código da carta?\n");
    scanf("%2s", codigo);

    // Limpa o buffer do teclado para evitar problemas com o fgets.
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Qual a população?\n");
    scanf("%d", &populacao);

    printf("Qual a área da sua cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem sua cidade?\n");
    scanf("%d", &pontos);
    printf("\n------------------------------------------------------\n");

        // Fornecer os dados da Segunda Carta.
    printf("\nPOR FAVOR, FORNEÇA OS DADOS DA SEGUNDA CARTA A SEGUIR.\n");

    printf("\nEscolha uma letra de estado: A, B, C, D, E, F, G, H.\n");
    scanf("%1s", estado2);

    printf("Qual o código da carta?\n");
    scanf("%2s", codigo2);

    // Limpa o buffer do teclado para evitar problemas com o fgets.
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a população?\n");
    scanf("%d", &populacao2);

    printf("Qual a área da sua cidade?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);
    
    printf("Quantos pontos turisticos tem sua cidade?\n");
    scanf("%d", &pontos2);

    // Exibir os dados da Carta 1.
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("\nEstado: %s.", estado);
    printf("\nCódigo: %s%s.", estado, codigo);
    printf("\nCidade: %s.", cidade);
    printf("\nPopulação: %d milhões.", populacao);
    printf("\nÁrea: %.2fkm².", area);
    printf("\nPIB: %.2f\n bilhões.", pib);
    printf("\nPontos turísticos: %d.", pontos);
    printf("\n--- FIM DOS DADOS DA CARTA 1 ---\n");
    printf("------------------------------------");

    // Exibir os dados da Carta 2.
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("\nEstado: %s.", estado2);
    printf("\nCódigo: %s%s.", estado2, codigo2);
    printf("\nCidade: %s.", cidade2);
    printf("\nPopulação: %d milhões.", populacao2);
    printf("\nÁrea: %.2fkm².", area2);
    printf("\nPIB: %.2f bilhões.", pib2);
    printf("\nPontos turísticos: %d.", pontos2);
    printf("\n--- FIM DOS DADOS DA CARTA 2 ---\n");


    return 0;
}
