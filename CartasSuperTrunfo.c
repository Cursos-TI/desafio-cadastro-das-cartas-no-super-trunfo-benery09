#include <stdio.h>

int main (){
    // declarar as variaveis da primeira carta.
    char estado1[4];
    char codigo1[30];
    char cidade1[32];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_Capita1;
    float SuperPoder1;

    // declarar as variaveis da segunda carta.
    char estado2[4];
    char codigo2[25];
    char cidade2[26];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_Capita2;
    float SuperPoder2;

    // aqui estamos pedindos as informações da primeira carta e armazenando-as.

    printf("Vamos pegar as informações sobre a primeira carta.\nDiga o estado:\n"); 
    scanf("%2s", estado1);

    printf("Diga o codigo da carta:\n");
    scanf("%s", codigo1);

    printf("Diga o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Diga a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Diga a área da cidade:\n");
    scanf("%f", &area1);

    printf("Diga o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Diga agora o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Após todas as perguntas feitas, vamos confirmar o armazenamento e partir para a 2 carta.

    printf("\n\nTodas as informações da primeira carta foram armazenadas.\n");
    printf("Vamos agora pegar as informações da segunda carta.\n\n");

    printf("Vamos pegar as informações da segunda carta\nDiga o estado:\n");
    scanf("%2s", estado2);

    printf("Diga o codigo da carta:\n");
    scanf("%s", codigo2);

    printf("Diga o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Diga a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Diga a área da cidade:\n");
    scanf("%f", &area2);

    printf("Diga o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Diga agora o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);
    
    // Agora vamos calcular o PIB per capita e a densidade populacional.

    densidade_populacional1 = populacao1 / area1;
    PIB_per_Capita1 = PIB1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    PIB_per_Capita2 = PIB2 / populacao2;

    
    // Calcular o Super Poder.

    SuperPoder1 = populacao1 + area1 + PIB1 + (float) pontos_turisticos1 + (1.0 / densidade_populacional1)  + PIB_per_Capita1;
    SuperPoder2 = populacao2 + area2 + PIB2 + (float) pontos_turisticos2 + (1.0 / densidade_populacional2)  + PIB_per_Capita2;

    // Agora so precisamos comparar as cartas em sequencia.

    populacao1 > populacao2;
    area1 > area2;
    PIB1 > PIB2;
    pontos_turisticos1 > pontos_turisticos2;
    densidade_populacional1 < densidade_populacional2;
    PIB_per_Capita1 > PIB_per_Capita2;
    SuperPoder1 > SuperPoder2;
   
    // Agora vamos imprimir os resultados.

   printf("\nComparação das cartas (Atributo: População)\n\n");
   printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
   printf("Carta 2 - %s (%s): %lu\n\n", cidade2, estado2, populacao2);

   if (populacao1 > populacao2){
       printf("Carta 1 (%s) venceu!\n\n", cidade1);
   } else if (populacao1 == populacao2){
    printf("Resultado: Empate!\n\n");
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    };

    return 0;
}