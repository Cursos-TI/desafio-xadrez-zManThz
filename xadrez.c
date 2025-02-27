#include <stdio.h>

int main() {

    /*Tipo e Variável da carta 1*/

    char nome = 'B';
    char codigo[50] = "B01";
    char cidade[50] = "Catolândia";
    int habitantes = 3560;
    float area = 659.3;
    float pib = 80900;
    int pontos = 25;
    float densidade;
    float pibpercapita;

    printf("Desafio Xadrez!\n\n\n");
    
    /*Impressão da carta 1*/

    printf("Carta 1:\n");
    printf("Estado: %c\n", nome);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", habitantes);
    printf("Área: %.1f km²\n", area);
    printf("PIB: %.0f mil reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontos);

    densidade = (float)habitantes / area;
    pibpercapita = (float)pib / habitantes;

    printf("Densidade Populacional: %f km²\n", densidade);
    printf("PIB per Capita: %f reais\n\n", pibpercapita);

    /*Tipo e Variável da carta 2*/

    char nome2 = 'A';
    char codigo2[50] = "A02";
    char cidade2[50] = "Maceió";
    int habitantes2 = 994464;
    float area2 = 509.32;
    double pib2 = 27000000000;
    int pontos2 = 50;
    float densidade2;
    float pibpercapita2;

    /*Impressão da carta 2*/

    printf("Carta 2:\n");
    printf("Estado: %c\n", nome2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.0f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);

    densidade2 = (float)habitantes2 / area2;
    pibpercapita2 = (float)pib2 / habitantes2;

    printf("Densidade Populacional: %f km²\n", densidade2);
    printf("PIB per Capita: %f reais\n\n", pibpercapita2);

    return 0;

}
