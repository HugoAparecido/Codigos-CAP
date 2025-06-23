/* arquivo: matriz.c
 * Jander, 2025 - CAP
 */

#include <stdio.h>
#include "matriz.h";

struct matriz nova_matriz(int linhas, int colunas)
{
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz.dados[i][j] = 0;

    return matriz;
}

void escreva_matriz(struct matriz matriz)
{

    for (int i = 0; i < matriz.linhas; i++)
    {
        for (int j = 0; j < matriz.colunas; j++)
            printf("%5.1f ", matriz.dados[i][j]);
        printf("\n");
    }
}