/*
    Descrição: declaração de um struct para número racional
    Assegura: a exibição do struct

*/


#include <stdio.h>

int main(void)
{
    struct numero_racional {
        int numerador;
        int denominador;
    };

    struct numero_racional q1, q2;

    // q1 = 1/2
    q1.numerador = 1;
    q1.denominador = 2;

    // q1 = 7/3
    q2.numerador = 7;
    q2.denominador = 3;

    printf("q1 = %d/%d e q1 = %d/%d\n", q1.numerador, q1.denominador, q2.numerador, q2.denominador);

    return 0;
}