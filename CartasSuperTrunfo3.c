#include <stdio.h>

int main() {

    // Declaração de variáveis carta 1
    char estado;
    char codigo[10];
    char cidade[20];
    float area;
    unsigned long int populacao;
    float pib;
    int pontos_turismo;

    // Declaração de variáveis carta 2
    char estado2;
    char codigo2[10];
    char cidade2[20];
    float area2;
    unsigned long int populacao2;
    float pib2;
    int pontos_turismo2;

    // Entrada de dados para a primeira carta
    printf("Vamos começar com a primeira carta!!!\n");
    printf("Digite a primeira letra do estado:");
    scanf("%c", &estado);

    printf("Digite o codigo da carta:");
    scanf("%s", &codigo);

    printf("Nome da cidade:");
    scanf("%s", &cidade);

    printf("População da cidade:");
    scanf("%d", &populacao);

    printf("Área da cidade (em km²):");
    scanf("%f", &area);

    printf("PIB da cidade:");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos da cidade:");
    scanf("%d", &pontos_turismo);

    printf("\n");

    // Entrada de dados para a segunda carta
    printf("Vamos começar com a segunda carta!!!\n");
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

    // Cálculo de densidade populacional e PIB per capita carta 1
    float dens_populacional = (float) populacao / area;
    float pib_per_capita = (float) pib / populacao;

    // Cálculo de densidade populacional e PIB per capita carta 2
    float dens_populacional2 = (float) populacao2 / area2;
    float pib_per_capita2 = (float) pib2 / populacao2;

    // Cálculo do super poder carta 1
    float super_poder = (float) populacao + area + pib + pontos_turismo + pib_per_capita - dens_populacional;

    // Cálculo do super poder carta 2
    float super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turismo2 + pib_per_capita2 - dens_populacional2;

    printf("\n");

    // Exibindo atributos da carta 1
    printf("Carta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nAreá da cidade: %.2f\nPIB: %.2f\nNumeros de pontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
           estado, codigo, cidade, populacao, area, pib, pontos_turismo, dens_populacional, pib_per_capita, super_poder);

    printf("\n");       

    // Exibindo atributos da carta 2       
    printf("Carta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nAreá da cidade: %.2f\nPIB: %.2f\nNumeros de pontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turismo2, dens_populacional2, pib_per_capita2, super_poder2);       

    printf("\n");

    //comparando atributos das cartas       
    printf("Carta vencedora no atributo area é: %d\n", (area > area2));    
    printf("Carta vencedora no atributo população é: %lu\n", (populacao > populacao2)); 
    printf("Carta vencedora no atributo PIB é: %d\n", (pib > pib2)); 
    printf("Carta vencedora no atributo pontos turisticos é: %d\n", (pontos_turismo > pontos_turismo2)); 
    printf("Carta vencedora no atributo super poder é: %d\n", (super_poder > super_poder2));
    printf("Carta vencedora no atributo PIB é: %d\n", (super_poder > super_poder2));
    printf("Carta vencedora no atributo PIB per Capita é: %d\n", (pib_per_capita > pib_per_capita2));
    printf("Carta vencedora no atributo densidade populacional é: %d\n", (dens_populacional < dens_populacional2));


    return 0;

}