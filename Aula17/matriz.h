// Descrição: Implementação de matrizes
// Jander Moreira - 2025

#ifndef PROGRAMAS_MATRIZ_H
#define PROGRAMAS_MATRIZ_H

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

#endif