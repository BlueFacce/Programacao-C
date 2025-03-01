#include <stdio.h>
#include <string.h>  // Para usar a função strlen e manipular strings

int main() {
    
    // Variáveis para a primeira carta
    char estado1[3], codigo1[3], cidade1[30];
    int pont1;
    float area1, pib1, populacao1;

    // Variáveis para a segunda carta
    char estado2[3], codigo2[3], cidade2[30];
    int pont2;
    float area2, pib2, populacao2;

    // Introdução do programa
    printf("===== Bem-vindo à base de dados do Super Trunfo =====\n");
    printf("Precisamos da sua ajuda para registrarmos duas cartas\n");

    // Entrada de dados para a primeira carta
    printf("\nDigite os dados da Primeira Carta:\n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta (A letra do estado seguida de um número de '01' a '04'): \n");
    scanf("%s", codigo1);

    
    getchar();  // Limpar o buffer
    printf("Digite o nome da cidade: \n");
    fgets(cidade1, 30, stdin);
    if (cidade1[strlen(cidade1) - 1] == '\n') {
        cidade1[strlen(cidade1) - 1] = '\0';
    }// Remover o '\n' gerado pelo fgets

    printf("Digite a população atual dessa cidade: \n");
    scanf("%f", &populacao1);

    printf("Digite a área em km² dessa cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) em reais atual dessa cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos que essa cidade tem: \n");
    scanf("%d", &pont1);

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da Segunda Carta:\n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de '01' a '04'): \n");
    scanf("%s", codigo2);

    
    getchar(); 
    printf("Digite o nome da cidade: \n");
    fgets(cidade2, 30, stdin);
    if (cidade2[strlen(cidade2) - 1] == '\n') {
        cidade2[strlen(cidade2) - 1] = '\0';
    }

    printf("Digite a população atual dessa cidade: \n");
    scanf("%f", &populacao2);

    printf("Digite a área em km² dessa cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) em reais atual dessa cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos que essa cidade tem: \n");
    scanf("%d", &pont2);

    // Saída de dados das as duas cartas
    printf("\n==== Informações da Primeira Carta ====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pont1);

    printf("\n==== Informações da Segunda Carta ====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pont2);

    return 0;
}