#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // bloco de declaração de variáveis
    int populacao, populacao2, turisticos, turisticos2;
    float area, area2, pib, pib2;
    char estado[50], estado2[50], carta2[50], cidade2[50], carta[50], cidade[50];

    // bloco de entrada do usuário da primeira carta
    printf("Carta 1:\n");
    printf("Digite as iniciais do estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao);
    printf("Digite a area em quilometros quadrados: ");
    scanf("%f", &area);
    printf("Digite o produto interno bruto (PIB): ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &turisticos);

    //bloco de entrada do usuário da segunda carta
    printf("Carta 2:\n");
    printf("Digite as iniciais do estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao2);
    printf("Digite a area em quilometros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o produto interno bruto (PIB): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &turisticos2);

    // bloco de saída do usuário da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area: %.2fkm²\n", area);
    printf("PIB: R$%.2fbilhoes\n", pib);
    printf("Numero de pontos turisticos: %i\n", turisticos);
   
    //bloco de saída do usuário da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: R$%.2fbilhoes\n", pib2);
    printf("Numero de pontos turisticos: %i\n", turisticos2);
    return 0;
}
