#include <stdio.h>

int main(void)
{
    // double mat[3][2] = {{1.6, 2.5}, {3.4, 4.3}, {5.2, 6.1}};
    // int mat[500][500] = {0};
    // int mat[5][3] = {
    //     {1, 2, 3},
    //     {0, 0, 0},
    //     {-3, -2, -1},
    //     {1, 0, 1},
    //     {0, 0, 0},
    // };

    double mat[10][5];
    int numero_linhas, numero_colunas;

    int linha;
    double soma_linha = 0;
    for (int j = 0; j < numero_colunas; j++)
        soma_linha += mat[linha][j];

    int indice_menor = 0;
    double soma_menor = 0;
    for (int j = 0; j < numero_colunas; j++)
        soma_menor += mat[0][j];
    for (int i = 1; i < numero_linhas; i++)
    {
        double soma_atual = 0;
        for (int j = 0; j < numero_colunas; j++)
            soma_atual += mat[i][j];
        if (soma_atual < soma_menor)
        {
            soma_menor = soma_atual;
            indice_menor = i;
        }
    }

    return 0;
}