#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
 }


int main() {
    char estado1, estado2 = 'a';
    char codigoDaCarta1[10], codigoDaCarta2[10] = "vazio";
    char nomeDaCidade1[10], nomeDaCidade2[10] = "vazio";
    int populacao1, populacao2 = 0;
    float area1, area2 = 0;
    float pib1, pib2 = 0;
    int pontosTuristicos1, pontosTuristicos2 = 0;


    //Leitura da primeira cidade: 

    printf("ADICIONE AS INFORMACOES DA CARTA 1\n");

    printf("Informe o estado: ");
    limpar_entrada();
    scanf(" %c", estado1);
    printf("Informe o codigo: ");
    limpar_entrada();
    scanf(" %s", codigoDaCarta1);
    printf("Informe o nome da cidade: ");
    limpar_entrada();
    fgets(nomeDaCidade1, 20, stdin);
    printf("Informe a população da cidade: ");
    limpar_entrada();
    scanf(" %d", &populacao1);
    printf("Informe a área em metros quadrados: ");
    limpar_entrada();
    scanf(" %f", &area1);
    printf("Informe o PIB da cidade: ");
    limpar_entrada();
    scanf(" %f", &pib1);
    printf("Informe a quantidade de pontos turisticos:");
    limpar_entrada();
    scanf(" %d", &pontosTuristicos1);

    //leitura da segunda cidade:

    printf("ADICIONE AS INFORMAÇÕES DA CARTA 2\n");
    printf("Informe o estado: ");
    limpar_entrada();
    scanf("%c\n", &estado2);
    printf("Informe o codigo: ");
    limpar_entrada();
    scanf("%s\n", codigoDaCarta2);
    printf("Informe o nome da cidade: ");
    limpar_entrada();
    fgets(nomeDaCidade2, 20, stdin);
    printf("Informe a população da cidade: ");
    limpar_entrada();
    scanf("%d\n", &populacao2);
    printf("Informe a área em metros quadrados: ");
    limpar_entrada();
    scanf("%f\n", &area2);
    printf("Informe o PIB da cidade: ");
    limpar_entrada();
    scanf("%f\n", &pib2);
    printf("Informe a quantidade de pontos turisticos:");
    limpar_entrada();
    scanf("%d\n", &pontosTuristicos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoDaCarta1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
