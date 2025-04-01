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

    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapito2;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf("%c", &estado);
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

    printf("Digite os dados da segunda carta\n");
    printf("Estado (A a H): ");
    scanf("%c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoDaCarta2);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade2, 50, stdin);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade = populacao / area;
    pibPerCapito = pib / populacao;

    densidade2 = populacao2 / area2;
    pibPerCapito2 = pib2 / populacao2;

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capito: %.2f Reais\n", pibPerCapito);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB Per Capito: %.2f Reais\n", pibPerCapito2);

    return 0;
}
