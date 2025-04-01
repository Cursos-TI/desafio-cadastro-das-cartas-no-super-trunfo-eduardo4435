#include <stdio.h>
#include <string.h>


int main() {
    char estado;
    char codigoDaCarta[10];
    char nomeDaCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapito;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoDaCarta);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade, 50, stdin);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidade = populacao / area;
    pibPerCapito = pib / populacao;

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capito: %.2f\n", pibPerCapito);

    return 0;
}
