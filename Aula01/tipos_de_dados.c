// Descrição:
// Jander Moreira 2025
// gcc nome_arquivo.c -o nome_arquivo && ./nome_arquivo
#include <stdio.h>

int main(void) {
    int valor_int = 10;
    unsigned long int valor_int_grande = 4000000000;
    double valor_real = 1.1;
    char texto[] = "Um texto qualquer";

    printf("Valor inteiro: %d\n", valor_int);
    printf("Valor real: %g\n", valor_real); // g melhor forma f sete casas após a vírgula
    printf("Valor textual: %s\n", texto);

    printf("Tamanho do int: %ld\n", sizeof(int));
    printf("Tamanho do double: %ld\n", sizeof(double));
    return 0;
}