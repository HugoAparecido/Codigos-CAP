/*
    Determinar o núemro de alunos que têm idade maior do que a média de sua turma. São 10 alunos
    Requer: 10 idades
    Assegura: apresentação de quantos alunos estão acima da média de idade

    Jander, 2025 - CAP
*/
#include <stdio.h>

#define TAMANHO 10

int main(void)
{
    int idades[TAMANHO]; // declare 10 idades

    for (int i = 0; i < TAMANHO; i++)
    {
        char entrada[160];
        printf("Idade: ");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &idades[i]);
    }

    double soma = 0;
    for (int i = 0; i < TAMANHO; i++)
        soma = soma + idades[i];
    double media = (double)soma / TAMANHO;

    printf("A média é %.1f\n", media);

    int contador = 0;
    for (int i = 0; i < TAMANHO; i++)
        if (idades[i] > media)
            contador++;
    printf("Acima da média: %d alunos\n", contador);

        return 0;
}