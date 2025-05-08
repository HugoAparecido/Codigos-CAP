#include <stdio.h>

int main(void)
{
    int soma = 0, n = 128;

    for (int i = 2; i <= n; i += 2)
        soma += i;

    printf("%d\n", soma);

    return 0;
}