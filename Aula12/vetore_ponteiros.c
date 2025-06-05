/*
    Vetores e ponteiros
    Jander, 2025 - CAP
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void preencha_vetor(double vetor[], int tamanho, double valor)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] = valor;
}

void imprima_vetor(const int vetor[], int tamanho)
{
    printf("[");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("]\n");
}

void f(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("> %c\n", str[i]);
        i++;
    }
    strncat(str, " Moreira", 50 - strlen(str) - 1);
}

void colocar_aleatorio(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 200;
}

void troca_par_por_zero(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        if (((vetor[i]) % 2) == 0)
            vetor[i] = 0;
}

int main(void)
{
//     double v1[5] = {0};
//     double v2[10];

//     preencha_vetor(v1, 5, 1.1);
//     preencha_vetor(v2, 10, 7.0);

//     imprima_vetor(v1, 5);
//     imprima_vetor(v2, 10);

//     char nome[50] = "Jander";
//     f(nome);
//     printf("%s!!!\n", nome);

    int v3[100];
    colocar_aleatorio(v3, 100);
    troca_par_por_zero(v3, 100);
    imprima_vetor(v3, 100);

    return 0;
}