#include <stdio.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

struct matriz
{
    int linhas;
    int colunas;
    double dados[MAX_LINHAS][MAX_COLUNAS];
};

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

struct matriz multiplica_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz)
{
    struct matriz resultado;
    if (primeira_matriz.colunas != segunda_matriz.linhas)
        return nova_matriz(0, 0);
    else
    {
        resultado.linhas = primeira_matriz.linhas;
        resultado.colunas = segunda_matriz.colunas;
        for (int i = 0; i < primeira_matriz.linhas; i++)
            for (int j = 0; j < segunda_matriz.colunas; j++)
            {
                resultado.dados[i][j] = 0;
                for (int k = 0; k < primeira_matriz.colunas; k++)
                    resultado.dados[i][j] += primeira_matriz.dados[i][k] * segunda_matriz.dados[k][j];
            }
    }
    return resultado;
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

int main(void)
{
    struct matriz m1 = nova_matriz(2,2);
    struct matriz m2 = nova_matriz(2,2);
    m1.dados[0][0] = 2;
    m1.dados[0][1] = 1;
    m1.dados[1][0] = 3;
    m1.dados[1][1] = 4;

    m2.dados[0][0] = 5;
    m2.dados[0][1] = 6;
    m2.dados[1][0] = 7;
    m2.dados[1][1] = 8;

    struct matriz m3 = multiplica_matriz(m1, m2);
    escreva_matriz(m3);

    return 0;
}