#include <stdio.h>

int main() {

    int codigodacidade, pontosturisticos;
    float populacao, area, pib;
    float densidadepopulacional, PIBpercapita;
    char nomedacidade[50];

    printf("Digite o Código da cidade: \n");

    scanf("%d", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população da cidade sem ponto ou vírgulas: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade sem ponto ou vírgulas: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos há na cidade: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = (populacao / area);
    PIBpercapita = (pib / populacao);

    printf("Código da cidade: %d \n", codigodacidade);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População da cidade: %f \n", populacao);
    printf("Área da cidade: %.2fkm² \n", area);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);
    printf("A densidade populacional é: %.2f hab/km²\n", densidadepopulacional);
    printf("O PIB per capita é: %.2f R$ \n", PIBpercapita);
    

    printf("Digite o Código da cidade: \n");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos há na cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Código da cidade: %d \n", codigodacidade);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População da cidade: %f \n", populacao);
    printf("Área da cidade: %.2fkm² \n", area);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);
    printf("A densidade populacional é: %.2f hab/km²\n", densidadepopulacional);
    printf("O PIB per capita é: %.2f R$ \n", PIBpercapita);


    return 0;

}
