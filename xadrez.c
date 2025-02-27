#include <stdio.h>

int main(){

    //Tipos e variaveis da carta1

    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;

    //Saudações inciais do jogo

    printf("Bem-vindo ao SUPERTRIUNFO!\n");
    printf("Você está prestes a embarcar em uma jornada épica no nosso jogo de cartas.\n");
    printf("Para começar, precisaremos que você cadastre duas cartas com o tema PAÍSES\n");
    printf("que farão parte da sua trajetória no jogo.\n");
    printf("Mas não se preocupe, vou guiá-lo pelo processo com algumas perguntas rápidas!\n\n");

    // Pegando os dados da carta1

    printf("Primeiro passo seria você me dizer um nome de alguma cidade, vamos lá:\n");
        scanf("%s", &cidade);
    printf("Perfeito! Me fale agora a PRIMEIRA letra do estado dessa cidade:\n");
        scanf(" %c", &estado);
    printf("Isso ai! Qual a população dessa cidade\n");
        scanf("%d", &populacao);
    printf("Legal!! Preciso saber agora a ÁREA (em km²) dessa cidade:\n");
        scanf("%f", &area);
    printf("Shoow! Estamos quase acabando, preciso do PIB dessa cidade agora:\n");
        scanf("%f", &pib);
    printf("Ok! Agora me fala o número de pontos turísticos dessa cidade:\n");
        scanf("%d", &turisticos);
    printf("Pra finalizar, crie um código para sua carta usando a LETRA DO ESTADO seguida de um numero de 01 a 04 (ex: A01, A02...)\n");
        scanf("%s", &codigo);
    printf("Ok!\n\n");

    //Tipos e variaveis da carta2

    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    printf("Sua primeira carta foi criada com sucesso!!\n");
    printf("Vamos agora pra sua segunda carta.\n\n");

    // Pegando os dados da carta2

printf("Primeiro passo seria você me dizer um nome de alguma cidade, vamos lá:\n");
    scanf("%s", &cidade2);
printf("Perfeito! Me fale agora a PRIMEIRA letra do estado dessa cidade:\n");
    scanf(" %c", &estado2);
printf("Isso ai! Qual a população dessa cidade\n");
    scanf("%d", &populacao2);
printf("Legal!! Preciso saber agora a ÁREA (em km²) dessa cidade:\n");
    scanf("%f", &area2);
printf("Shoow! Estamos quase acabando, preciso do PIB dessa cidade agora:\n");
    scanf("%f", &pib2);
printf("Ok! Agora me fala o número de pontos turísticos dessa cidade:\n");
    scanf("%d", &turisticos2);
printf("Pra finalizar, crie um código para sua carta usando a LETRA DO ESTADO seguida de um numero de 01 a 04 (ex: A01, A02...). Lembrando que esse código deve ser diferente da primeira carta!\n");
    scanf("%s", &codigo2);
printf("Ok!\n\n");

    printf("Parabéns!!!\n");
    printf("Suas cartas foram criadas com sucesso!\n");
    printf("Cada carta tem um toque único e só depende de você para explorá-las ao máximo!\n");
    printf("Veja as cartas incríveis que você criou\n\n\n");

    // Imprimindo os dados fornecidos da carta1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n\n", turisticos);

    // Imprimindo os dados fornecidos da carta2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n\n", turisticos2);

        return 0;

}