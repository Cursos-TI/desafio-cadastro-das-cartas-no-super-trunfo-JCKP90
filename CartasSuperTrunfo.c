#include <stdio.h>
int main(){
    printf("Cartas Super Trunfo");
    // Tema 1 - Cadastro de cartas

    char estado1[10];
    char estado2[10];
    char codigo1[10];
    char codigo2[10];
    char nome1[10];
    char nome2[10];
    int populacao1, populacao2, turista1, turista2;
    float area1, area2, pib1, pib2;

    printf("insira os dados da carta 1\n");
    printf("insira uma letra de A a H :");
    scanf("%s", &estado1);

    printf("digite a letra do estado e um numero de 01 a 04");
    scanf("%s", &codigo1);

    printf("digite o nome da cidade: ");
    scanf("%s", &nome1);

    printf("digite o numero de habitantes da cidade");
    scanf("%d", &populacao1);

    printf("digite a area da cidade: ");
    scanf("%f", &area1);

    printf("digite o produto interno bruto da cidade");
    scanf("%f", pib1);

    printf("digite a quantidade de pontos turisticos");
    scanf("%d", &turista1);

    // Dados Carta 2 

    printf("digite os dados da carta 2\n");

    printf("insira uma letra de A a H :");
    scanf("%s", &estado2);

    printf("digite a letra do estado de 01 a 04");
    scanf("%s", &codigo2);

    printf("digite o nome da cidade");
    scanf("%s", &nome2);

    printf("digite o numero de habitantes da cidade");
    scanf("%d", &populacao2);

    printf("digite a area da cidade");
    scanf("%f", &area2);

    printf("digite o produto interno bruto");
    scanf("%f", &pib2);

    printf("digite a quantidade de pontos turisticos");
    scanf("%d", &turista2);


    printf("aqui estao os dados de suas cartas :\n ");
    printf("\n");

    printf("carta1:\n");
    printf("Estado: %s\n", &estado1);
    printf("codigo da cidade: %s\n",&codigo1);
    printf("nome da cidade: %s", nome1);
    printf("numero de habitantes: %d\n", populacao1);
    printf("area: %.2f km\n", area1);
    printf("PIB: %,2f bilhoes\n", pib1);
    printf("pontos turisticos: %d\n", turista1);

    printf("\n");

    printf("carta2:\n");
    printf("Estado: %s\n", estado2);
    printf("codigo da cidade: %s\n", codigo2);
    printf("numero de habitantes: %d\\n", populacao2);
    printf("area: %.2f km\n", area2);
    printf("PIB: %,2f bilhoes\n", pib2);
    printf("pontos turisticos: %d\n", turista2);






    return 0;



    
}


