#include <stdio.h>

int main() {

    //Definindo as variaveis para carta 1
    char estado;
    char codigo[10];
    char cidade[20];
    float area;
    int populacao;
    float pib;
    int pontos_turismo;

    //Definindo as variaveis para carta 2
    char estado2;
    char codigo2[10];
    char cidade2[20];
    float area2;
    int populacao2;
    float pib2;
    int pontos_turismo2;

    //Entrada de dados para preecher atributo de cada variavel da primeira carta
    printf("Vamos começar com a primeira carta.\n");
    printf("Digite a primeira letra do estado:");
    scanf("%c", &estado);

    printf("Digite o codigo da carta:");
    scanf("%s", codigo);

    printf("Nome da cidade:");
    scanf("%s", cidade);

    printf("População da cidade:");
    scanf("%d", &populacao);

    printf("Área da cidade (em km²):");
    scanf("%f", &area);

    printf("PIB da cidade:");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos da cidade:");
    scanf("%d", &pontos_turismo);

    printf("\n");

    //Entrada de dados para preecher atributo de cada variavel da segunda carta
    printf("Vamos começar com a segunda carta.\n");
    printf("Digite a primeira letra do estado:");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta:");
    scanf(" %s", codigo2);

    printf("Nome da cidade:");
    scanf(" %s", cidade2);

    printf("População da cidade:");
    scanf(" %d", &populacao2);

    printf("Área da cidade (em km²):");
    scanf("%f", &area2);

    printf("PIB da cidade:");
    scanf(" %f", &pib2);

    printf("Numeros de pontos turísticos da cidade:");
    scanf(" %d", &pontos_turismo2);
    
    //Fazendo calculo PIB per capita e densidade populacional
    float dens_populacional = populacao / area;
    float pib_per_capita = pib / populacao;

    float dens_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    //Mostrando a carta 1 com todos atributos preenchidos
    printf("Carta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nAreá da cidade: %.2f\nPIB: %.2f\nNumeros de pontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n",
           estado, codigo, cidade, populacao, area, pib, pontos_turismo, dens_populacional, pib_per_capita);
           
    printf("\n");       

    //Mostrando a carta 2 com todos atributos preenchidos       
    printf("Carta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nAreá da cidade: %.2f\nPIB: %.2f\nNumeros de pontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turismo2, dens_populacional2, pib_per_capita2);       

    
    return 0;

    }