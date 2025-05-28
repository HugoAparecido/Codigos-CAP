#include <stdio.h>

int main(void)
{
    int inteiro = 0;
    double real = 8.9;
    char caractere = 'c';
    unsigned long int inteiro_longo = 98888888;

    int *ponteiro_inteiro = &inteiro;
    double *ponteiro_real = &real;
    char *ponteiro_caractere = &caractere;
    unsigned long int *ponteiro_inteiro_longo = &inteiro_longo;

    printf("%p\n", ponteiro_inteiro);
    printf("%p\n", ponteiro_real);
    printf("%p\n", ponteiro_caractere);
    printf("%p\n", ponteiro_inteiro_longo);

    printf("%d\n", *ponteiro_inteiro);
    printf("%g\n", *ponteiro_real);
    printf("%c\n", *ponteiro_caractere);
    printf("%lu\n", *ponteiro_inteiro_longo);

    return 0;
}