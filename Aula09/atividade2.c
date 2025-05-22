/*
Descrição: função para alterar o valor absoluto
Requer: um parâmetro
Assegura: a mudança de valor
*/
#include <stdio.h>

void muda_valor_negativo(double *);

int main(void)
{
    double d = -7.95;

    muda_valor_negativo(&d);

    printf("%g", d);

    return 0;
}

void muda_valor_negativo(double *numero)
{
    *numero = *numero < 0 ? -*numero : *numero;
}