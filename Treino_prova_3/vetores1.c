/*
  Leitura de dados em vetor e apresentacao
  Input: uma sequencia de 10 valores inteiros
  Output: a mesma sequencia de 10 valores
*/
#include <stdio.h>

#define TAM 10

int main(void)
{
    unsigned int vet[TAM];
    for (int i = 0; i < TAM; i++)
        scanf("%u", &vet[i]);

    for (int i = 0; i < TAM; i++)
        printf("%u ", vet[i]);
    printf("\n");

    return 0;
}