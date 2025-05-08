/*
Descrição: Cálculo de um valor por somas sucessivas dado um n
Requer: um valor n
Assegura: a soma de n
*/
#include <stdio.h>

int main(void)
{
    int n = -5, soma = 0;

    for (int i = 1; i <= n; i++)
        soma += i;

    printf("%d\n", soma);

    return 0;
}