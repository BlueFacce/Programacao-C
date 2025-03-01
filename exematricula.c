#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Altura: %f - Idade: %d\n", altura, idade);

    return 0;
}