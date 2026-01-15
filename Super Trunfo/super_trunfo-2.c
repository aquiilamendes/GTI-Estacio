/*
Arquivo para tarefa Super Trunfo Aula 2 do curso de GTI - Estácio
Aluno: Áquila Mendes
Polo: Teresópolis - RJ
v1.0 (14/01/2026) - Nível Novato
v2.0 (15/01/2026) - Nível Aventureiro
*/
#include <stdio.h>
int main(){
    //Carta 1
    int pontosturistico_1;
    unsigned long int populacao_1;
    float area_1, pib_1, densidadepopulacional_1, pibpercapita_1, superpoder_1;
    char estado_1[50], codigo_1[50], cidade_1[50];

    //Carta 2
    int pontosturistico_2;
    unsigned long int populacao_2;
    float area_2, pib_2, densidadepopulacional_2, pibpercapita_2, superpoder_2;
    char estado_2[50], codigo_2[50], cidade_2[50];

    //Boas Vindas ao Jogo
    printf("Seja bem-vindo ao jogo Super Trunfo Estados do Brasil!\n");

    //Captura dos dados da carta 1 por meio da função scanf
    printf("\n--- DIGITE OS DADOS DA CARTA 1 ---\n");
    printf("\nDigite um estado brasileiro (somente siglas, RJ, SP, MG etc): ");
    scanf("%s", estado_1);
    
    printf("\nDigite o código da carta (ex: estado RJ coloque R01): ");
    scanf("%s", codigo_1);

    printf("\nDigite o nome da cidade do estado que escolheu: ");
    scanf("%s", cidade_1);

    printf("\nDigite o tamanho da população da cidade que escolheu: ");
    scanf("%lu", &populacao_1);

    printf("\nDigite o tamanho da área da cidade que escolheu em km²: ");
    scanf("%f", &area_1);

    printf("\nDigite o valor do PIB da cidade que escolheu em reais: ");
    scanf("%f", &pib_1);

    printf("\nDigite a quantidade de pontos turísticos da cidade que escolheu: ");
    scanf("%d", &pontosturistico_1);

    //Captura dos dados da carta 2 por meio da função scanf
    printf("\n--- DIGITE OS DADOS DA CARTA 2 ---\n");
    printf("\nDigite um estado brasileiro (somente siglas, RJ, SP, MG etc): ");
    scanf("%s", &estado_2);

    printf("\nDigite o código da carta (ex: estado RJ coloque R01): ");
    scanf("%s", &codigo_2);

    printf("\nDigite o nome da cidade do estado que escolheu: ");
    scanf("%s", &cidade_2);

    printf("\nDigite o tamanho da população da cidade que escolheu: ");
    scanf("%lu", &populacao_2);

    printf("\nDigite o tamanho da área da cidade que escolheu em km²: ");
    scanf("%f", &area_2);

    printf("\nDigite o valor do PIB da cidade que escolheu em reais: ");
    scanf("%f", &pib_2);

    printf("\nDigite a quantidade de pontos turísticos da cidade que escolheu: ");
    scanf("%d", &pontosturistico_2);

    //Cálculo do pib per capita e densidade populacional das cartas
    densidadepopulacional_1 = populacao_1 / area_1;
    pibpercapita_1 = pib_1 / populacao_1;
    densidadepopulacional_2 = populacao_2 / area_2;
    pibpercapita_2 = pib_2 / populacao_2;

    //Super poder das cartas
    superpoder_1 = populacao_1 + area_1 + pib_1 + pontosturistico_1 + pibpercapita_1 + (1.0 / densidadepopulacional_1);
    superpoder_2 = populacao_2 + area_2 + pib_2 + pontosturistico_2 + pibpercapita_2 + (1.0 / densidadepopulacional_2);

    //Impressão dos dados em tela das informações capturadas da carta 1 por meio da função printf
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n ", estado_1);
    printf("Código: %s\n ", codigo_1);
    printf("Nome da Cidade: %s\n ", cidade_1);
    printf("População: %d habitantes\n ", populacao_1);
    printf("Área: %f km²\n ", area_1);
    printf("PIB: R$ %f\n ", pib_1);
    printf("Número de Pontos Turísticos: %d pontos\n", pontosturistico_1);
    printf("Densidade Populacional: %f\n", densidadepopulacional_1);
    printf("PIB per Capita: R$ %f\n", pibpercapita_1);
    printf("Super Poder: %f\n", superpoder_1);
   
    //Impressão dos dados em tela das informações capturadas da carta 2 por meio da função printf
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n ", estado_2);
    printf("Código: %s\n ", codigo_2);
    printf("Nome da Cidade: %s\n ", cidade_2);
    printf("População: %d habitantes\n ", populacao_2);
    printf("Área: %f km²\n ", area_2);
    printf("PIB: R$ %f\n ", pib_2);
    printf("Número de Pontos Turísticos: %d pontos\n", pontosturistico_2);
    printf("Densidade Populacional: %f\n", densidadepopulacional_2);
    printf("PIB per Capita: R$ %f\n", pibpercapita_2);
    printf("Super Poder: %f\n", superpoder_2);

    //Escolha do atributo para comparação
    int escolha;
    printf("\n--- ESCOLHA O ATRIBUTO PARA COMPARAÇÃO ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o número da opção: ");
    scanf("%d", &escolha);

    //Comparação baseada na escolha
    printf("\n--- RESULTADO DA PARTIDA ---\n");
    switch (escolha) {
        case 1:
            printf("Atributo usado: População\n");
            printf("Carta 1: %lu habitantes\n", populacao_1);
            printf("Carta 2: %lu habitantes\n", populacao_2);
            if (populacao_1 > populacao_2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao_2 > populacao_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Atributo usado: Área\n");
            printf("Carta 1: %.2f km²\n", area_1);
            printf("Carta 2: %.2f km²\n", area_2);
            if (area_1 > area_2) {
                printf("Carta 1 venceu!\n");
            } else if (area_2 > area_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Atributo usado: PIB\n");
            printf("Carta 1: R$ %.2f\n", pib_1);
            printf("Carta 2: R$ %.2f\n", pib_2);
            if (pib_1 > pib_2) {
                printf("Carta 1 venceu!\n");
            } else if (pib_2 > pib_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Atributo usado: Número de Pontos Turísticos\n");
            printf("Carta 1: %d pontos\n", pontosturistico_1);
            printf("Carta 2: %d pontos\n", pontosturistico_2);
            if (pontosturistico_1 > pontosturistico_2) {
                printf("Carta 1 venceu!\n");
            } else if (pontosturistico_2 > pontosturistico_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Atributo usado: Densidade Populacional\n");
            printf("Carta 1: %.2f hab/km²\n", densidadepopulacional_1);
            printf("Carta 2: %.2f hab/km²\n", densidadepopulacional_2);
            if (densidadepopulacional_1 > densidadepopulacional_2) {
                printf("Carta 1 venceu!\n");
            } else if (densidadepopulacional_2 > densidadepopulacional_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("Atributo usado: PIB per Capita\n");
            printf("Carta 1: R$ %.2f\n", pibpercapita_1);
            printf("Carta 2: R$ %.2f\n", pibpercapita_2);
            if (pibpercapita_1 > pibpercapita_2) {
                printf("Carta 1 venceu!\n");
            } else if (pibpercapita_2 > pibpercapita_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 7:
            printf("Atributo usado: Super Poder\n");
            printf("Carta 1: %.2f\n", superpoder_1);
            printf("Carta 2: %.2f\n", superpoder_2);
            if (superpoder_1 > superpoder_2) {
                printf("Carta 1 venceu!\n");
            } else if (superpoder_2 > superpoder_1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}