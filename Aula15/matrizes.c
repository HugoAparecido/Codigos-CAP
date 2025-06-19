/* arquivo: matrizes.c

Manipulação de matrizes
Jander, 2025 - CAP
*/

#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define COLUNA_SOMA 2

void escreva_matriz(int matriz[][COLUNAS], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
}

int soma_matriz(int matriz[][COLUNAS], int linhas, int colunas){
    int soma = 0;
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            soma += matriz[i][j];
    return soma;
}

int main(void)
{
    int matriz[LINHAS][COLUNAS] = {{0}}; // matriz toda zerada

    // matriz[0][0] = 10;                   // primeira linha, primeira coluna
    // matriz[LINHAS - 1][COLUNAS - 1] = 5; // última linha, última coluna

    // for (int i = 0; i < LINHAS; i++)
    //     for (int j = 0; j < COLUNAS; j++)
    //         printf("m[%d, %d] = %d\n", i, j, matriz[i][j]);

    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            matriz[i][j] = (i + 1) * 10 + (j + 1);

    // for (int i = 0; i < LINHAS; i++)
    //     for (int j = 0; j < COLUNAS; j++)
    //         printf("m[%d, %d] = %d\n", i, j, matriz[i][j]);

    // for (int i = 0; i < LINHAS; i++)
    //     for (int j = 0; j < COLUNAS; j++)
    //     {
    //         char entrada[160];
    //         printf("m[%d, %d] = ", i, j);
    //         fgets(entrada, sizeof entrada, stdin);
    //         sscanf(entrada, "%d", &matriz[i][j]);
    //     }

    escreva_matriz(matriz, LINHAS, COLUNAS);

    printf("soma = %d\n", soma_matriz(matriz, LINHAS, COLUNAS));

    int soma = 0;
    for (int i = 0; i < LINHAS; i++)
        soma += matriz[i][COLUNA_SOMA];
    printf("soma = %d\n", soma);

    

    return 0;
}