#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // bloco de declaração de variáveis
    int populacao, populacao2, turisticos, turisticos2, ch;
    float area, area2, pib, pib2, densidade, densidade2, capita, capita2;
    double superpoder, superpoder2;
    char estado[50], estado2[50], carta2[50], cidade2[50], carta[50], cidade[50];

    // bloco de entrada do usuário da primeira carta
    printf("Carta 1:\n");
    printf("Digite as iniciais do estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", carta);
    printf("Digite o nome da cidade: ");
     fgets(cidade, 50, stdin);// file
    while ((getchar()) != '\n');
    ch = getchar();
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
     fgets(cidade, 50, stdin);// file
    while ((getchar()) != '\n');
    ch = getchar();
    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao2);
    printf("Digite a area em quilometros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o produto interno bruto (PIB): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &turisticos2);

    // cálculo da densidade populacional
    densidade = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;

    // cálculo do PIB per capita
    capita = (float) pib / populacao;
    capita2 = (float) pib2 / populacao2;

    // cálculo de super poder 
    superpoder = (float) populacao + area + pib + turisticos + capita + 1 / densidade;
    superpoder2 = (float) populacao2 + area2 + pib2 + turisticos2 + capita2 + 1 / densidade2;


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

     // bloco de saída de comparação das cartas
    printf("Comparacao das cartas:\n");
    printf("Populacao: %i\n", populacao > populacao2);
    printf("Area: %.2f\n", area > area2);
    printf("PIB: %.2f\n", pib > pib2);
    printf("Pontos turisticos: %i\n", turisticos > turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade < densidade2);
    printf("PIB per capita: %.2f\n", capita > capita2);
    printf("Super Poder: %.2f\n", superpoder > superpoder2);
    return 0;
}
