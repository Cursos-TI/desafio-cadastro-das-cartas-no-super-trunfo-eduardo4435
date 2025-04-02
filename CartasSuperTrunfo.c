#include <stdio.h>
#include <string.h>


int main() {
    // variaveis para armazenar os dados de cada carta
    char estado, estado2;
    char codigoDaCarta[10], codigoDaCarta2[10];
    char nomeDaCidade[30], nomeDaCidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2;
    float pibPerCapito, pibPerCapito2;
    long int poderCarta1, poderCarta2;
    //variaveis para armazena os valores 0 e 1 das comparações
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPturistico;
    int resultadoDensidade;
    int resultadoPerCapita;
    int resultadoSpoder;
    //entrada de dados da primeira carta
    printf("DIGITE OS DADOS DA PRIMEIRA CARTA:\n");
    printf("Estado (A a H): ");
    scanf("%c", &estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoDaCarta);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    //entrada de dados da segunda carta
    printf("\nDIGITE OS DADOS DA SEGUNDA CARTA:\n");
    getchar();
    printf("Estado (A a H): ");
    scanf("%c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigoDaCarta2);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeDaCidade2, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    //atribuindo os valores de densidade e pib per capita
    densidade = populacao / area;
    pibPerCapito = pib / populacao;

    densidade2 = populacao2 / area2;
    pibPerCapito2 = pib2 / populacao2;
    //fazendo as comparações e guardando os valores nas variaveis
    resultadoPopulacao = (populacao > populacao2);
    resultadoArea = (area > area2);
    resultadoPib = (pib > pib2);
    resultadoPturistico = (pontosTuristicos > pontosTuristicos2);
    resultadoDensidade = (densidade < densidade2);
    resultadoPerCapita = (pibPerCapito > pibPerCapito2);
    // calculando o poder das cartas
    poderCarta1 = populacao + area + pib + pontosTuristicos + pibPerCapito - densidade ; // subtraindo a densidade para maior vantagem da carta com menor densidade
    poderCarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapito2 - densidade2;
    //atribuindo o maior poder
    resultadoSpoder = poderCarta1 > poderCarta2;

    //saida dos dados

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capito: %.2f Reais\n", pibPerCapito);
    printf("Poder: %d\n", poderCarta1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB Per Capito: %.2f Reais\n", pibPerCapito2);
    printf("Poder: %d\n", poderCarta2);

    printf("\nCOMPARAÇÃO DE CARTAS (1 = carta1 vencedora) (0 = carta2 vencedora):\n");

    printf("\nPopulação: %d\n", resultadoPopulacao);
    printf("Area: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos turisticos: %d\n", resultadoPturistico);
    printf("Densidade populacional: %d\n", resultadoDensidade);
    printf("PIB per capita: %d\n", resultadoPerCapita);
    printf("Super Poder: %d\n", resultadoSpoder);

    return 0;
}
