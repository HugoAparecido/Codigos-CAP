/*
Exemplos de endereços e ponteiros

Jander, 2025 - CAP
*/
#include <stdio.h>

/*
Ponteiros são variáveis que guardam endereços de memória.
Com o ponteiro é possível:
    1) ver o que tem no endereço
    2) Mudar o que tem no endereço

    double d; //guarda real
    double *pd //guarda end. de um valor real
    pd = &d;
    *pd = 5.2; //altera d indiretamente
    *pd = *pd * 7;
*/

int main(void)
{
    int i = 10;
    int j = 20;
    int *endereco = &i;

    printf("%d\n", *endereco);

    *endereco = 100;
    printf("i = %d, j = %d\n", i, j);

    return 0;
}