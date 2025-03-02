#include <stdio.h>
#include <stdlib.h>>
#include <time.h>

int main(){
    int escolhaJog, escolhaComp;
    srand(time(0));

    printf("=== Jogo de Jokenpô ===\n");
    printf("Pedra,papel ou tesoura?:\n");
    printf("1.Pedra\n");
    printf("2.Papel\n");
    printf("3.Tesoura\n");
    printf("Escolha:\n");
    scanf("%d", &escolhaJog);

    escolhaComp = rand() % 3 + 1;

    switch ((escolhaJog))
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
        case 2:
        printf("Jogador: Papel - ");
        break;
        case 3:
        printf("Jogador: Tesoura - ");
        break;    
    default:
        printf("Opção inválida.");
        break;
    }


    switch ((escolhaComp))
    {
    case 1:
        printf("Computador: Pedra ");
        break;
        case 2:
        printf("Computador: Papel ");
        break;
        case 3:
        printf("Computador: Tesoura ");
        break;    
    default:
        printf("Opção inválida.");
        break;
    } 
    
    if (escolhaComp == escolhaJog){
        printf("\nEmpate!!\n");
    } else if ((escolhaJog == 1) && (escolhaComp == 3) || 
                (escolhaJog == 2) && (escolhaComp == 1) ||
                (escolhaJog == 3) && (escolhaComp == 2))
    {
        printf("\nJogador ganhou, parabéns!!\n");
    }   else {
        printf("\nComputador ganhou,que pena!!\n");
    }
    return 0;
}