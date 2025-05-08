/*
Descrição: Cálculo da média de idades para um professor chutadas por seus alunos
Requer: uma sequência de idades até ter a idade de valor 0
Assegura: a média das idades

Obtenha a primeira idade
inicialize soma_idade como 0
inicialize o número_de_alunos como 0
enquanto idade for diferente de 0 faça
    some a idade à soma_idade
    incremente um ao número_de_alunos
    obtenha a próxima idade
fim enquanto
Calcule media como soma_idade / número_de_alunos
Apresente media
*/

#include <stdio.h>

int main(void)
{
    char entrada[160];
    int idade;
    printf("Digite uma idade (0 para parar): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &idade);

    int soma_idade = 0;
    int numero_de_alunos = 0;
    while (idade != 0)
    {
        soma_idade += idade;
        numero_de_alunos++;
        printf("Digite uma idade (0 para parar): ");
        fgets(entrada, sizeof(entrada), stdin);
        sscanf(entrada, "%d", &idade);
    }

    double media = (double)soma_idade / numero_de_alunos;
    printf("A média das idades chutadas é: %.3f\n", media);

    return 0;
}