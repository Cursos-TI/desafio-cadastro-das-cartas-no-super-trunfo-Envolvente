#include <stdio.h>

int main() {
    // dados das cartas
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int turisticos1, turisticos2;

    /////primeira carta
    printf("Bem vindo ao, Cadastro da primeira carta:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em metros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos1);

    // segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em metros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    // cartas cadastradas
    printf("\nDados cadastrados da primeira carta:\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f metros quadrados\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", turisticos1);

    printf("\nDados cadastrados da segunda carta:\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f metros quadrados\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", turisticos2);

    return 0;
}
