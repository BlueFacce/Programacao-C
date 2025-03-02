#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerando número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Número entre 1 e 100

    printf("Bem vindo ao jogo Maior, menor ou igual!\n");
    printf("VocÊ deve esolher um número e o tipo de comparação.\n");
    printf("M.Maior\n");
    printf("N.Menor\n");
    printf("I.Igual\n");
    printf("Escolha a comparação:\n");

    scanf("%c", &tipoComparacao);

    printf("Escolha um número (entre 1 e 100):\n");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Voce escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Voce escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
    default:
        break;
    }

    //Número do computador e do jogador
    printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1){
        printf("Parabéns, voce vendeu!\n");
    } else {
        printf("Infelizmente, voce perdeu!\n");
    }





}