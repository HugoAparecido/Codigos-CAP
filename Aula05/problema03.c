#include <stdio.h>

int main(void)
{
    long int n = 18, multiplicacao = 1;

    for (long int i = 1; i <= n; i++)
        multiplicacao *= i;

    printf("%ld\n", multiplicacao);

    return 0;
}