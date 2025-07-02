#include <stdio.h>

int main(void)
{
    int v1, v2, v3;
    scanf("%d%d%d", &v1, &v2, &v3);
    int *p_minimo = &v1;
    int *p_maximo = &v1;

    if (v2 < *p_minimo)
        p_minimo = &v2;
    if (v3 < *p_minimo)
        p_minimo = &v3;

    if (v2 > *p_maximo)
        p_maximo = &v2;
    if (v3 > *p_maximo)
        p_maximo = &v3;

    int auxiliar = *p_minimo;
    *p_minimo = *p_maximo;
    *p_maximo = auxiliar;

    printf("%d %d %d\n", v1, v2, v3);
    return 0;
}