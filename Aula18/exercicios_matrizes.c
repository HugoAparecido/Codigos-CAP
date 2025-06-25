/*
Exercícios prospostos em sala sobre matrizes
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

struct matriz
{
    int linhas;
    int colunas;
    double dados[MAX_LINHAS][MAX_COLUNAS];
};

/**
 * Altera a matriz com valores predefinidos em 0
 * @param linhas número de linhas da matriz
 * @param colunas número de colunas da matriz
 */
struct matriz nova_matriz(int linhas, int colunas);

/**
 * Escreve a matriz
 * @param matriz a metriz que deve ser escrita
 */
void escreva_matriz(struct matriz matriz);

/**
 * Altera a matriz para ter valores aleatórios
 * @param linhas número de linhas da matriz
 * @param colunas número de colunas da matriz
 */
struct matriz aleatoria(int linhas, int colunas);

/**
 * Retorna a matriz multiplicada por um valor escalar
 * @param matriz a matriz base
 * @param valor_escalar o valor
 * @return matriz resultante da multiplicação
 */
struct matriz multiplicar_escalar(struct matriz matriz, double valor_escalar);

/**
 * Retorna a soma de duas matrizes se tiverem dimensões iguais, se forem diferente retorna uma matriz 0x0
 * @param primeria_matriz a matriz inicial da soma
 * @param segunda_matriz a matriz segunda da soma
 * @return a soma das metrizes (se ok) ou m = [] (se erro)
 */
struct matriz soma_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz);

/**
 * Retorna a subtração de duas matrizes se tiverem dimensões iguais, se forem diferente retorna uma matriz 0x0
 * @param primeria_matriz a matriz inicial da subtração
 * @param segunda_matriz a matriz segunda da subtração
 * @return a subtração das metrizes (se ok) ou m = [] (se erro)
 */
struct matriz subtracao_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz);

/**
 * Retorna a subtração de duas matrizes se tiverem dimensões iguais, se forem diferente retorna uma matriz 0x0
 * @param primeria_matriz a matriz inicial da subtração
 * @param segunda_matriz a matriz segunda da subtração
 * @return a subtração das metrizes (se ok) ou m = [] (se erro)
 */
struct matriz multiplica_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz);

int main(void)
{
    srand(0);
    struct matriz m1 = aleatoria(4, 7);
    printf("\nM1\n");
    escreva_matriz(m1);

    printf("\nM1 * 5.3\n");
    escreva_matriz(multiplicar_escalar(m1, 5.3));

    struct matriz m2 = nova_matriz(4, 7);
    for (int i = 0; i < m2.linhas; i++)
        m2.dados[i][1] = i + 1;
    printf("\nM2\n");
    escreva_matriz(m2);

    printf("\nM2 * 5\n");
    escreva_matriz(multiplicar_escalar(m2, 5));

    printf("\nM1\n");
    escreva_matriz(m1);

    struct matriz m3 = aleatoria(4, 7);
    printf("\nM3\n");
    escreva_matriz(m3);

    printf("\nM1 + M3\n");
    escreva_matriz(soma_matriz(m1, m3));

    printf("\nM1 - M3\n");
    escreva_matriz(subtracao_matriz(m1, m3));

    printf("\nDesafio\n");

    printf("\nExemplo aleatório\n");
    escreva_matriz(soma_matriz(aleatoria(3, 3), aleatoria(3, 3)));

    m1 = multiplicar_escalar(aleatoria(3, 7), 0.1);
    m2 = multiplicar_escalar(aleatoria(7, 10), 0.1);

    printf("\nNovo m1\n");
    escreva_matriz(m1);
    printf("\nNovo m1\n");
    escreva_matriz(m2);

    int i = 2; // linha 2 de m1
    int j = 5; // coluna 5 de m2
    double soma = 0;
    for (int k = 0; k < 7; k++)
        soma += m1.dados[i][k] * m2.dados[k][j];
    printf("\nSoma = %g", soma);

    printf("\nM3 = 2 * M1 + M2\n");
    m3 = soma_matriz(multiplicar_escalar(m1, 2), m2);
    escreva_matriz(m3);

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

struct matriz aleatoria(int linhas, int colunas)
{
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz.dados[i][j] = 0.1 * (rand() % 1000);

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

struct matriz multiplicar_escalar(struct matriz matriz, double valor_escalar)
{
    for (int i = 0; i < matriz.linhas; i++)
        for (int j = 0; j < matriz.colunas; j++)
            matriz.dados[i][j] *= valor_escalar;

    return matriz;
}

struct matriz soma_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz)
{
    struct matriz resultado;
    if (primeira_matriz.linhas != segunda_matriz.linhas || primeira_matriz.colunas != segunda_matriz.colunas)
        // Erro
        resultado.linhas = resultado.colunas = 0;
    else
    {
        // Dimensões batem
        resultado.linhas = primeira_matriz.linhas;
        resultado.colunas = primeira_matriz.colunas;
        for (int i = 0; i < primeira_matriz.linhas; i++)
            for (int j = 0; j < primeira_matriz.colunas; j++)
                resultado.dados[i][j] = primeira_matriz.dados[i][j] + segunda_matriz.dados[i][j];
    }
    return resultado;
}

struct matriz subtracao_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz)
{
    return soma_matriz(primeira_matriz, multiplicar_escalar(segunda_matriz, -1));
}

struct matriz multiplica_matriz(struct matriz primeira_matriz, struct matriz segunda_matriz){
    
}