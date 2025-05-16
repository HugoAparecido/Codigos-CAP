/*
Leitura sequencial
Requer: 10 valores inteiros
Assegura: apresentação de cada valor lido

Jander, 2025 - CAP
*/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um inteiro: ");
        char entrada[160];
        fgets(entrada, sizeof(entrada), stdin);
        int valor;
        sscanf(entrada, "%d", &valor);

        printf("> Valor digitado: %d\n", valor);
    }

    return 0;
}