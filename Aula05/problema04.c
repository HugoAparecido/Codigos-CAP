#include <stdio.h>

int main(void)
{
    int n = 4, prod = 1, soma = 0;
    for (int i = 1; i <= n; i++)
    {
        prod *= i;
        soma += prod;
    }

    printf("%d\n", soma);

    return 0;
}