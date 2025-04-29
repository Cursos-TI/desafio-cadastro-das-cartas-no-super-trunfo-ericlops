#include <stdio.h>

int main() {

    // Declaração das variáveis da Carta 1
    char estado_1, codigo_1[4], nomeCidade_1[50];
    int populacao_1, pontosTuristicos_1;
    float area_1, pib_1;

    // Declaração de variáveis para a Carta 2
    char estado_2, codigo_2[4], nomeCidade_2[50];
    int populacao_2, pontosTuristicos_2;
    float area_2, pib_2;

    // Instruções para o usuário
    printf("** BEM-VINDO AO CADASTRO DE CARTAS DO SUPER TRUNFO! ***\n\n\n");

    printf("Cadastro da Carta 1:\n\n");

    printf("- Digite o Estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("\n- Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("\n- Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade_1);

    printf("\n- Digite a Populacao: ");
    scanf("%d", &populacao_1);

    printf("\n- Digite a Area (em km²): ");
    scanf("%f", &area_1);

    printf("\n- Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib_1);

    printf("\n- Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos_1);

    printf("\n\nCadastro da Carta 2:\n\n");

    printf("- Digite o Estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("\n- Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_2);

    printf("\n- Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade_2);

    printf("\n- Digite a Populacao: ");
    scanf("%d", &populacao_2);

    printf("\n- Digite a Area (em km²): ");
    scanf("%f", &area_2);

    printf("\n- Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib_2);

    printf("\n- Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos_2);

    // Exibição dos dados
    printf("\n----------------------------------------------------");
    printf("\nCarta 1:\n");
    printf("- Estado: %c\n", estado_1);
    printf("- Codigo: %s\n", codigo_1);
    printf("- Nome da Cidade: %s\n", nomeCidade_1);
    printf("- Populacao: %d\n", populacao_1);
    printf("- Area: %.2f km²\n", area_1);
    printf("- PIB: %.2f bilhoes de reais\n", pib_1);
    printf("- Numero de Pontos Turisticos: %d\n", pontosTuristicos_1);
    printf("----------------------------------------------------\n");

    printf("\n----------------------------------------------------");
    printf("\nCarta 2:\n");
    printf("- Estado: %c\n", estado_2);
    printf("- Codigo: %s\n", codigo_2);
    printf("- Nome da Cidade: %s\n", nomeCidade_2);
    printf("- Populacao: %d\n", populacao_2);
    printf("- Area: %.2f km²\n", area_2);
    printf("- PIB: %.2f bilhoes de reais\n", pib_2);
    printf("- Numero de Pontos Turisticos: %d\n", pontosTuristicos_2);
    printf("----------------------------------------------------\n");

    return 0;
}