/*
Vetores

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO 100

int main(void)
{
    // setlocale(LC_ALL, "Portuguese");

    // int vetor[TAMANHO];

    // // 5 na posição 0
    // vetor[0] = 5;
    // printf("Vetor[0] = %d\n", vetor[0]);

    // // 1 na última posição
    // vetor[TAMANHO - 1] = 1;
    // printf("v[%d] = %d\n", TAMANHO - 1, vetor[TAMANHO - 1]);

    // vetor[2] = vetor[0] > vetor[TAMANHO - 1] ? vetor[0] : vetor[TAMANHO - 1];
    // printf("v[2] = %d\n", vetor[2]);

    // for (int i = 0; i < TAMANHO; i++)
    //     printf("vetor[%2d] = %8d\n", i, vetor[i]);

    // for (int i = 0; i < TAMANHO; i++)
    //     vetor[i] = i + 1;
    // printf("vetor = ");
    // for (int i = 0; i < TAMANHO; i++)
    //     printf("%d ", vetor[i]);
    // printf("\n");

    // for (int i = 10; i > 0; i--)
    //     vetor[TAMANHO - i] = i;
    // printf("vetor = ");
    // for (int i = 0; i < TAMANHO; i++)
    //     printf("%d ", vetor[i]);
    // printf("\n");

    // // coloca valores aleatórios no vetor
    // srand(10);
    // for (int i = 0; i < TAMANHO; i++)
    //     vetor[i] = rand() % 5000;
    // printf("vetor = ");
    // for (int i = 0; i < TAMANHO; i++)
    //     printf("%d ", vetor[i]);
    // printf("\n");

    // int soma = 0;
    // for (int i = 1; i < TAMANHO; i += 2)
    //     soma += vetor[i];
    // printf("Soma das posições ímpares: %d\n", soma);

    // // trocar posições
    // int i = 2;
    // int j = 7;
    // int guardar = vetor[i];
    // vetor[i] = vetor[j];
    // vetor[j] = guardar;

    // printf("vetor = ");
    // for (int i = 0; i < TAMANHO; i++)
    //     printf("%d ", vetor[i]);
    // printf("\n");

    // int indice = 0, minimo = vetor[0];
    // for (int i = 1; i < TAMANHO; i++)
    //     if (vetor[i] < minimo)
    //     {
    //         minimo = vetor[i];
    //         indice = i;
    //     }

    // printf("O mínimo é %d, que está na posição %d\n", minimo, indice);

    // indice = 0;
    // int maximo = vetor[0];
    // for (int i = 1; i < TAMANHO; i++)
    //     if (vetor[i] > maximo)
    //     {
    //         maximo = vetor[i];
    //         indice = i;
    //     }
    // vetor[indice] = vetor[TAMANHO - 1];
    // vetor[TAMANHO - 1] = maximo;

    // printf("vetor = ");
    // for (int i = 0; i < TAMANHO; i++)
    //     printf("%d ", vetor[i]);
    // printf("\n");

    // // verifica se o valor da primeira posição se repete
    // bool repetiu = false;
    // i = 1;
    // while (i < TAMANHO && !repetiu)
    // {
    //     if (vetor[i] == vetor[0])
    //         repetiu = true;
    //     i++;
    // }

    // printf("Achou repeticao? %s\n", repetiu ? "sim" : "não");

    // double v[] = {200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    // int n = sizeof(v) / sizeof(v[0]);

    #define N 10
    double v[N];

    for (int i = 0; i < 5; i++)
        printf("em %d tem %g\n", i, v[i]);

    return 0;
}