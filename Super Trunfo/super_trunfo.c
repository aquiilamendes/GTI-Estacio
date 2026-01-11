/*
Arquivo para tarefa Super Trunfo do curso de GTI - Estácio
Aluno: Áquila Mendes
Polo: Teresópolis - RJ
v1.0 (04/01/2026) - Nível Novato
v2.0 (09/01/2026) - Nível Aventureiro
v3.0 (11/01/2026) - Nível Mestre
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

    // --- IMPRESSÃO E COMPARAÇÃO ---
    printf("\n--- RESULTADO DA COMPARAÇÃO (1 para Vencedora, 0 para Perdedora) ---\n");
    printf("\nAtributo: Carta 1 vs Carta 2\n");
      
    // Comparações para a Carta 1 (1 se vencer, 0 se perder)
    printf("População: %d\n", populacao_1 > populacao_2);
    printf("Área: %d\n", area_1 > area_2);
    printf("PIB: %d\n", pib_1 > pib_2);
    printf("Pontos Turísticos: %d\n", pontosturistico_1 > pontosturistico_2);
    printf("Densidade Populacional: %d\n", densidadepopulacional_1 < densidadepopulacional_2);
    printf("PIB per Capita: %d\n", pibpercapita_1 > pibpercapita_2);
    printf("Super Poder: %d\n", superpoder_1 > superpoder_2);

    return 0;
}