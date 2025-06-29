#include <stdio.h>

long long int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}

int combinacao(int n, int p)
{
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main(void)
{
    int n, p;
    printf("Digite o número de valores e o número de agrupamentos que deseja: ");
    scanf("%d %d", &n, &p);

    printf("O número de combinações de %d valores tomados %d a %d é %d\n", n, p, p, combinacao(n, p));

    return 0;
}