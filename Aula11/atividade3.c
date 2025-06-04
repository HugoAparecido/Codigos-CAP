/*
Vetores

*/

#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAMANHO];

    // 5 na posição 0
    vetor[0] = 5;
    printf("Vetor[0] = %d\n", vetor[0]);

    // 1 na última posição
    vetor[TAMANHO - 1] = 1;
    printf("v[%d] = %d\n", TAMANHO - 1, vetor[TAMANHO - 1]);

    vetor[2] = vetor[0] > vetor[TAMANHO - 1] ? vetor[0] : vetor[TAMANHO - 1];
    printf("v[2] = %d\n", vetor[2]);

    for (int i = 0; i < TAMANHO; i++)
        printf("vetor[%2d] = %8d\n", i, vetor[i]);

    for (int i = 0; i < TAMANHO; i++)
        vetor[i] = i + 1;
    printf("vetor = ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    for (int i = 10; i > 0; i--)
        vetor[TAMANHO - i] = i;
    printf("vetor = ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    int soma = 0;
    for (int i = 1; i < TAMANHO; i += 2)
        soma += vetor[i];
    printf("Soma das posições ímpares: %d\n", soma);

    // trocar posições
    int i = 2;
    int j = 7;
    int guardar = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = guardar;

    printf("vetor = ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    int indice = 0, minimo = vetor[0];
    for (int i = 1; i < TAMANHO; i++)
        if (vetor[i] < minimo)
        {
            minimo = vetor[i];
            indice = i;
        }

    printf("O mínimo é %d, que está na posição %d\n", minimo, indice);

    return 0;
}