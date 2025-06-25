#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int linhas = 10;
    int colunas = 7;
    int *v = malloc(linhas * colunas * sizeof(int));
    int **p = malloc(linhas * sizeof(int*));

    for (int i = 0; i < linhas; i++)
        p[i] = &v[i * colunas];

    printf("%d", p[0][0]);

    free(p);
    free(v);
    return 0;
}