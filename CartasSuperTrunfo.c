#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1 = 'A';
    char codigoDaCarta1[20] = "vazio";
    char nomeDaCidade1[20] = "vazio";
    int populacao1 = 1;
    float area1 = 0;
    float pib1 = 0;
    int pontosTuristicos1 = 0;

    char estado2 = 'B';
    char codigoDaCarta2[20] = "vazio";
    char nomeDaCidade2[20] = "vazio";
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosTuristicos2 = 0;

    //Leitura da primeira cidade: 

    printf("ADICIONE AS INFORMAÇÕES DA CARTA 1\n");

    printf("Informe o estado: ");
    scanf("%c\n", &estado1);

    printf("Informe o codigo: ");
    scanf("%s\n", codigoDaCarta1);

    printf("Informe o nome da cidade: ");
    scanf("%s\n", nomeDaCidade1);

    printf("Informe a população da cidade: ");
    scanf("%d\n", &populacao1);

    printf("Informe a área em metros quadrados: ");
    scanf("%f\n", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f\n", &pib1);

    printf("Informe a quantidade de pontos turisticos:");
    scanf("%d\n", &pontosTuristicos1);

    //leitura da segunda cidade:

    printf("ADICIONE AS INFORMAÇÕES DA CARTA 2\n");

    printf("Informe o estado: ");
    scanf("%c\n", &estado2);

    printf("Informe o codigo: ");
    scanf("%s\n", codigoDaCarta2);

    printf("Informe o nome da cidade: ");
    scanf("%s\n", nomeDaCidade2);

    printf("Informe a população da cidade: ");
    scanf("%d\n", &populacao2);

    printf("Informe a área em metros quadrados: ");
    scanf("%f\n", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f\n", &pib2);

    printf("Informe a quantidade de pontos turisticos:");
    scanf("%d\n", &pontosTuristicos2);

    return 0;
}
