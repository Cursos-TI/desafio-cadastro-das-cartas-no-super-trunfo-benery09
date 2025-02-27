#include <stdio.h>

int main (){
    // declarar as variaveis da primeira carta.
    char estado1;
    char codigo1[30];
    char cidade1[32];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    // declarar as variaveis da segunda carta.
    char estado2;
    char codigo2[25];
    char cidade2[26];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    // aqui estamos pedindos as informações da primeira carta e armazenando-as.

    printf("Vamos pegar as informações sobre a primeira carta.\nDiga o estado:\n"); 
    scanf(" %c", &estado1);

    printf("Diga o codigo da carta:\n");
    scanf("%s", codigo1);

    printf("Diga o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Diga a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Diga a área da cidade:\n");
    scanf("%f", &area1);

    printf("Diga o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Diga agora o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Após todas as perguntas feitas, vamos confirmar o armazenamento e partir para a 2 carta.

    printf("Todas as informações da primeira carta foram armazenadas.\n");
    printf("Vamos agora pegar as informações da segunda carta.");

    printf("Vamos pegar as informações da segunda carta\nDiga o estado:\n");
    scanf(" %c", &estado2);

    printf("Diga o codigo da carta:\n");
    scanf("%s", codigo2);

    printf("Diga o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Diga a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Diga a área da cidade:\n");
    scanf("%f", &area2);

    printf("Diga o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Diga agora o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Agora so precisamos mostrar as cartas em sequencia.

    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea da cidade: %f\nPIB: %f\nPontos Turísticos: %d\n\n\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, pontos_turisticos1 );

    printf("Carta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea da cidade: %f\nPIB: %f\nPontos Turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, PIB2, pontos_turisticos2 );


    return 0;
}