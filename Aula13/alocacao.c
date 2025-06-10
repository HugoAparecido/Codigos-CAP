/*
arquivo: alocacao.c

Exemplos de alocação

Jander, 2025 - CAP
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;

    p = malloc(200000000 * sizeof(char));
    if (p == NULL)
    {
        perror("p");
        return 1;
    }

    p[0] = 1;
    printf("%d\n", p[0]);

    free(p);

    return 0;
}