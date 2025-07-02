/*
  Leitura de dados em vetor e apresentacao
  Input: uma sequencia de 10 valores inteiros
  Output: uma sequencia de 10 valores que e' a
    permutacao da de entrada em ordem inversa
*/
#include <stdio.h>

#define TAM 10

int main(void)
{
    unsigned int vet[TAM];
    for (int i = 0; i < TAM; i++)
        scanf("%u", &vet[i]);

    for (int i = TAM - 1; i >= 0; i--)
        printf("%u ", vet[i]);
    printf("\n");

    return 0;
}