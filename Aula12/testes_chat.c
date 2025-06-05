#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Gera um vetor de tamanho n com valores aleatórios entre min e max (inclusive)
void gerar_vetor_aleatorio(int *vetor, int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }
}

int main() {
    int n = 10;
    int vetor[10];

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    gerar_vetor_aleatorio(vetor, n, 0, 100);

    printf("Vetor gerado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}