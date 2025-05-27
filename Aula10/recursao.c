/*
Exemplos de código de recursividade
Rquer:
Assegura: apresentação


Jander - 2025
*/

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

long int fatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int mdc(int n1, int n2)
{
    printf("mdc para %d e %d\n", n1, n2);
    if (n2 == 0)
    {
        printf("Retornando %d (caso base)\n", n1);
        return n1;
    }
    else
    {
        int resultado = mdc(n2, n1 % n2);
        printf("Retornando %d (obtido pelo retorno de %d e %d)\n", resultado, n2, n1 % n2);
        return resultado;
    }
}

int main(void)
{
    // printf("%d\n", mdc(224645, 114185));

    // for (int i = 0; i <= 10; i++)
    //     printf("%d! = %ld\n", i, fatorial(i));

    // printf("%d\n", mdc(56461, 13231));
    
    for (int i = 1; i <= 50; i++)
        printf("fib(%d) = %d\n", i, fibonacci(i));


    return 0;
}