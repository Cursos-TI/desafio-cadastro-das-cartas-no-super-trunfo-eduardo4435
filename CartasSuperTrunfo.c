#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
 }


int main() {
    char estado;
    char codigoDaCarta[10];
    char nomeDaCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoDaCarta);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin);
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    

    return 0;
}
