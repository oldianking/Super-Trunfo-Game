#include <stdio.h>

int main(){
    int populacao, pontos;
    float area, pib;
    char cidade[50], estado[2], codigo[3];

    printf("\n--- BEM-VINDO(A) AO GAME SUPER TRUNFO DE ESTADOS! ---\n");
    // Forneça os dados da primeira carta.
    printf("Escolha uma letra de estado: A, B, C, D, E, F, G, H.\n");
    scanf("%1s", estado);
    printf("Qual o código da carta?\n");
    scanf("%2s", codigo);
    // Limpa o buffer do teclado
    while (getchar() != '\n');
    printf("Qual o nome da cidade?\n");
    fgets(cidade, 50, stdin);
    printf("Qual a população?\n");
    scanf("%d", &populacao);
    printf("Qual a área da sua cidade?\n");
    scanf("%f", &area);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos tem sua cidade?\n");
    scanf("%d", &pontos);

    // Exiba os dados da carta.
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("\n--- FIM DOS DADOS DA CARTA 1 ---\n");
    return 0;
}
