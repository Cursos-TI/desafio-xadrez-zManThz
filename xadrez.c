#include <stdio.h>

int main() {

    char nome = 'B';
    char codigo[50] = "B01";
    char cidade[50] = "Catolândia";
    int habitantes = 3560;
    float area = 659.3;
    float pib = 80.900;
    int pontos = 25;

    printf("Desafio Xadrez!\n");
    
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", nome);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", habitantes);
    printf("Área: %.1f km²\n", area);
    printf("PIB: %.3f mil reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontos);



    char nome2 = 'A';
    char codigo2[50] = "A02";
    char cidade2[50] = "Maceió";
    int habitantes2 = 994464;
    float area2 = 509.32;
    float pib2 = 27.48;
    int pontos2 = 50;

    

    printf("Carta 2:\n");
    printf("Estado: %c\n", nome2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);




}
