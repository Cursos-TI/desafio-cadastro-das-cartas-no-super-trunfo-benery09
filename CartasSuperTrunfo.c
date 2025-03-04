#include <stdio.h>
#include <string.h>

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

    // Menu do jogo.
    int escolha;

    printf("Bem vindo ao jogo de Super Trunfo!\n");
    printf("Vamos começar a jogar.\n");
    printf("Escolha uma opção:\n");
    printf("1 - Jogar\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Vamos jogar!\n");

        // aqui estamos pedindos as informações da primeira carta e armazenando-as.

        printf("Vamos pegar as informações sobre a primeira carta.\nDiga o estado:\n"); 
        scanf("%2s", estado1);

        printf("Diga o codigo da carta:\n");
        scanf("%29s", codigo1);

        printf("Diga o nome da cidade:\n");
        scanf("%31s", cidade1);

        printf("Diga a população da cidade:\n");
        scanf("%lu", &populacao1);

        printf("Diga a área da cidade:\n");
        scanf("%f", &area1);

        printf("Diga o PIB da cidade:\n");
        scanf("%f", &PIB1);

        printf("Diga agora o número de pontos turísticos:\n");
        scanf("%d", &pontos_turisticos1);

        // Após todas as perguntas feitas, vamos confirmar o armazenamento e partir para a 2 carta.

        printf("\nTodas as informações da primeira carta foram armazenadas.\n");
        printf("Vamos agora pegar as informações da segunda carta.\n\n");

        printf("Vamos pegar as informações da segunda carta\nDiga o estado:\n");
        scanf("%2s", estado2);

        printf("Diga o codigo da carta:\n");
        scanf("%24s", codigo2);

        printf("Diga o nome da cidade:\n");
        scanf("%25s", cidade2);

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

        // Agora vamos criar as variaveis de comparacao

        float atributo1;
        float atributo2;
        int escolha_atributo1;
        int escolha_atributo2;
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade populacional\n");
        scanf("%d", &escolha_atributo1);

        switch (escolha_atributo1)
        {
        case 1:
        atributo1 = populacao1;
        printf("Atributo 1: População\n");
        break;

        case 2:
        atributo1 = area1;
        printf("Atributo 1: Área\n");
        break;

        case 3:
        atributo1 = PIB1;
        printf("Atributo 1: PIB\n");
        break;

        case 4:
        atributo1 = pontos_turisticos1;
        printf("Atributo 1: Pontos turísticos\n");
        break;

        case 5:
        atributo1 = densidade_populacional1;
        printf("Atributo 1: Densidade populacional\n");
        break;
         
        default:
            printf("Opção inválida\n");
            return 1;
        }

        printf("Escolha o segundo atributo para comparar:\n");

        switch (escolha_atributo1)
        {
        case 1:
        printf("2- Área\n");
        printf("3- PIB\n");
        printf("4- Pontos turísticos\n");
        printf("5- Densidade populacional\n");
            break;
        
        case 2:
        printf("1- População\n");
        printf("3- PIB\n");
        printf("4- Pontos turísticos\n");
        printf("5- Densidade populacional\n");
            break;

        case 3:
        printf("1- População\n");
        printf("2- Área\n");
        printf("4- Pontos turísticos\n");
        printf("5- Densidade populacional\n");
            break;

        case 4:
        printf("1- População\n");
        printf("2- Área\n");
        printf("3- PIB\n");
        printf("5- Densidade populacional\n");
            break;

        default:
        printf("Opção inválida\n");
            return 1;
        }
        scanf("%d", &escolha_atributo2);
    
        if (escolha_atributo2 == escolha_atributo1) {
            printf("Você escolheu o mesmo atributo duas vezes! Reinicie a seleção.\n");
            return 1;
        }
        
        switch (escolha_atributo2)
        { 
        case 1:
        atributo2 = populacao2;
        printf("Atributo 2: População\n");
        break;

        case 2:
        atributo2 = area2;
        printf("Atributo 2: Área\n");
        break;

        case 3:
        atributo2 = PIB2;
        printf("Atributo 2: PIB\n");
        break;

        case 4:
        atributo2 = pontos_turisticos2;
        printf("Atributo 2: Pontos turísticos\n");
        break;

        case 5:
        atributo2 = densidade_populacional2;
        printf("Atributo 2: Densidade populacional\n");
        break;
        }

        char nome_atributo1[30];
        char nome_atributo2[30];


         // Atribuir nome ao primeiro atributo

        if (escolha_atributo1 == 1) {
            strcpy(nome_atributo1, "População");
        } else if (escolha_atributo1 == 2) {
            strcpy(nome_atributo1, "Área");
        } else if (escolha_atributo1 == 3) {
            strcpy(nome_atributo1, "PIB");
        } else if (escolha_atributo1 == 4) {
            strcpy(nome_atributo1, "Pontos Turísticos");
        } else if (escolha_atributo1 == 5) {
            strcpy(nome_atributo1, "Densidade Populacional");
        }

        // Atribuir nome ao segundo atributo
        if (escolha_atributo2 == 1) {
            strcpy(nome_atributo2, "População");
        } else if (escolha_atributo2 == 2) {
            strcpy(nome_atributo2, "Área");
        } else if (escolha_atributo2 == 3) {
            strcpy(nome_atributo2, "PIB");
        } else if (escolha_atributo2 == 4) {
            strcpy(nome_atributo2, "Pontos Turísticos");
        } else if (escolha_atributo2 == 5) {
            strcpy(nome_atributo2, "Densidade Populacional");
        }

        // Comparação do primeiro atributo escolhido (atributo1)

        switch (escolha_atributo1)
        {
            case 1:
                if (populacao1 > populacao2) {
                    printf("O jogador 1 venceu no atributo de população!\n");
                } else if (populacao1 < populacao2) {
                    printf("O jogador 2 venceu no atributo de população!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 2:
                if (area1 > area2) {
                    printf("O jogador 1 venceu no atributo de área!\n");
                } else if (area1 < area2) {
                    printf("O jogador 2 venceu no atributo de área!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 3:
                if (PIB1 > PIB2) {
                    printf("O jogador 1 venceu no atributo de PIB!\n");
                } else if (PIB1 < PIB2) {
                    printf("O jogador 2 venceu no atributo de PIB!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 4:
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("O jogador 1 venceu no atributo de pontos turísticos!\n");
                } else if (pontos_turisticos1 < pontos_turisticos2) {
                    printf("O jogador 2 venceu no atributo de pontos turísticos!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 5:
                if (densidade_populacional1 > densidade_populacional2) {
                    printf("O jogador 1 venceu no atributo de densidade populacional!\n");
                } else if (densidade_populacional1 < densidade_populacional2) {
                    printf("O jogador 2 venceu no atributo de densidade populacional!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            default:
                printf("Opção inválida\n");
                return 1;
        }

        // Comparação do segundo atributo escolhido (atributo2)
        switch (escolha_atributo2)
        {
            case 1:
                if (populacao2 > populacao1) {
                    printf("O jogador 2 venceu no atributo de população!\n");
                } else if (populacao2 < populacao1) {
                    printf("O jogador 1 venceu no atributo de população!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 2:
                if (area2 > area1) {
                    printf("O jogador 2 venceu no atributo de área!\n");
                } else if (area2 < area1) {
                    printf("O jogador 1 venceu no atributo de área!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 3:
                if (PIB2 > PIB1) {
                    printf("O jogador 2 venceu no atributo de PIB!\n");
                } else if (PIB2 < PIB1) {
                    printf("O jogador 1 venceu no atributo de PIB!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 4:
                if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("O jogador 2 venceu no atributo de pontos turísticos!\n");
                } else if (pontos_turisticos2 < pontos_turisticos1) {
                    printf("O jogador 1 venceu no atributo de pontos turísticos!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            case 5:
                if (densidade_populacional2 > densidade_populacional1) {
                    printf("O jogador 2 venceu no atributo de densidade populacional!\n");
                } else if (densidade_populacional2 < densidade_populacional1) {
                    printf("O jogador 1 venceu no atributo de densidade populacional!\n");
                } else {
                    printf("Empate!\n");
                }
                break;
            default:
                printf("Opção inválida\n");
                return 1;
        }

        printf("Agora iremos somar os atributos de cada jogador e ver quem venceu!\n");

        float valor_do_atributo_primeira1;
        float valor_do_atributo_primeira2;

        float valor_do_atributo_segunda1;
        float valor_do_atributo_segunda2;

        if (atributo1 == populacao1) {
            valor_do_atributo_primeira1 = populacao1;
        } else if (atributo1 == area1) {
            valor_do_atributo_primeira1 = area1;
        } else if (atributo1 == PIB1) {
            valor_do_atributo_primeira1 = PIB1;
        } else if (atributo1 == pontos_turisticos1) {
            valor_do_atributo_primeira1 = pontos_turisticos1;
        } else if (atributo1 == densidade_populacional1) {
            valor_do_atributo_primeira1 = densidade_populacional1;
        }

        if (atributo2 == populacao2) {
            valor_do_atributo_primeira2 = populacao1;
        } else if (atributo2 == area2) {
            valor_do_atributo_primeira2 = area1;
        } else if (atributo2 == PIB2) {
            valor_do_atributo_primeira2 = PIB1;
        } else if (atributo2 == pontos_turisticos2) {
            valor_do_atributo_primeira2 = pontos_turisticos1;
        } else if (atributo2 == densidade_populacional2) {
            valor_do_atributo_primeira2 = densidade_populacional1;
        }

        if (atributo1 == populacao1) {
            valor_do_atributo_segunda1 = populacao2;
        } else if (atributo1 == area1) {
            valor_do_atributo_segunda1 = area2;
        } else if (atributo1 == PIB1) {
            valor_do_atributo_segunda1 = PIB2;
        } else if (atributo1 == pontos_turisticos1) {
            valor_do_atributo_segunda1 = pontos_turisticos2;
        } else if (atributo1 == densidade_populacional1) {
            valor_do_atributo_segunda1 = densidade_populacional2;
        }

        if (atributo2 == populacao2) {
            valor_do_atributo_segunda2 = populacao2;
        } else if (atributo2 == area2) {
            valor_do_atributo_segunda2 = area2;
        } else if (atributo2 == PIB2) {
            valor_do_atributo_segunda2 = PIB2;
        } else if (atributo2 == pontos_turisticos2) {
            valor_do_atributo_segunda2 = pontos_turisticos2;
        } else if (atributo2 == densidade_populacional2) {
            valor_do_atributo_segunda2 = densidade_populacional2;
        }

        float soma1;
        float soma2;

        soma1 = valor_do_atributo_primeira1 + valor_do_atributo_primeira2;
        soma2 = valor_do_atributo_segunda1 + valor_do_atributo_segunda2;

        char vencedor[30];

        if (soma1 > soma2) {
            strcpy(vencedor, "Jogador 1");
        } else if (soma1 < soma2) {
            strcpy(vencedor, "Jogador 2");
        } else {
            strcpy(vencedor, "Empate");
        }
    
        printf("\nNome do País 1: %s \n", cidade1);
        printf("Nome do País 2: %s \n", cidade2);

        printf("Atributo 1: %s\n", nome_atributo1);
        printf("Atributo 2: %s\n", nome_atributo2);

        printf("Soma do atributo 1: %.2f\n", soma1);
        printf("Soma do atributo 2: %.2f\n\n", soma2);

        printf("O vencedor é o %s\n", vencedor);

        break;
    case 2:
        printf("Regras do jogo:\n");
        printf("O jogo consiste em comparar as cartas de dois jogadores, a partir de 2 atributos.\n");
        printf("Cada carta possui um estado, um código, uma cidade, uma população, uma área, um PIB e um número de pontos turísticos.\n");
        printf("O jogador que tiver os maiores atributos vence a rodada.\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}