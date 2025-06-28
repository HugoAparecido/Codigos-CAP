#include <stdio.h>

// As funções recursivas são aquelas que chamam a si mesmas para resolver um problema.
// Para evitar que a chamada seja infinita, toda função recursiva precisa de dois componentes principais:
// 1. Um **caso base** que define a condição de parada da recursão, retornando um valor fixo.
// 2. Um **passo recursivo** (ou caso geral) que resolve uma parte do problema e chama a própria função com um subproblema menor.

// ---

// Função que calcula o n-ésimo termo da sequência de Fibonacci de forma recursiva.
// A sequência de Fibonacci começa com 1, 1, 2, 3, 5, 8, ...
// Cada termo é a soma dos dois anteriores.
int fibonacci(int n)
{
    // **Caso base:**
    // Os dois primeiros termos da sequência de Fibonacci são definidos como 1.
    // Se 'n' for 1 ou 2, a função retorna 1, encerrando a recursão para esses casos.
    if (n == 1 || n == 2)
        return 1;
    else
        // **Passo recursivo:**
        // Para qualquer outro valor de 'n', o termo é a soma dos dois termos anteriores.
        // A função chama a si mesma para calcular 'fibonacci(n - 1)' e 'fibonacci(n - 2)'.
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// ---

// Função que calcula o fatorial de um número inteiro não negativo de forma recursiva.
// O fatorial de um número 'n' (n!) é o produto de todos os inteiros positivos de 1 até 'n'.
long int fatorial(int n)
{
    // **Caso base:**
    // O fatorial de 0 é definido como 1.
    // Esta condição é a parada da recursão.
    if (n == 0)
        return 1;
    else
        // **Passo recursivo:**
        // O fatorial de 'n' é 'n' multiplicado pelo fatorial de 'n - 1'.
        // A função chama a si mesma com um valor menor até atingir o caso base.
        return n * fatorial(n - 1);
}

// ---

// Função principal do programa.
int main(void)
{
    // Loop para calcular e imprimir o fatorial dos números de 0 a 10.
    for (int i = 0; i <= 10; i++)
        printf("%d! = %ld\n", i, fatorial(i));

    // Loop para calcular e imprimir os 20 primeiros termos da sequência de Fibonacci.
    for (int i = 1; i <= 20; i++)
        printf("fib(%d) = %d\n", i, fibonacci(i));

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}