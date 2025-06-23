/* arquivo: matrizes-struct.c
 *
 * Requer:
 * Assegura: apresentação
 *
 * Jander, 2025 - CAP
 */
#include <stdio.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

struct matriz
{
    int linhas;
    int colunas;
    double dados[MAX_LINHAS][MAX_COLUNAS];
};

struct matriz nova_matriz(int linhas, int colunas);

void escreva_matriz(struct matriz matriz);

double soma(struct matriz matriz);

int main(void)
{
    struct matriz m1 = nova_matriz(4, 5);
    printf("\nM1\n");
    escreva_matriz(m1);
    printf("Soma de M1 = %g\n", soma(m1));

    struct matriz m2 = nova_matriz(10, 10);
    for (int i = 0; i < m2.linhas; i++)
        m2.dados[i][4] = i + 1;
    printf("\nM2\n");
    escreva_matriz(m2);
    printf("Soma de M2 = %g\n", soma(m2));

    return 0;
}

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

double soma(struct matriz matriz)
{
    double soma = 0;
    for (int i = 0; i < matriz.linhas; i++)
        for (int j = 0; j < matriz.colunas; j++)
            soma += matriz.dados[i][j];
    return soma;
}
