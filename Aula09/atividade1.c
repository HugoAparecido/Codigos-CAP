/*
Descrição: criações de funções para exercícios
Requer: não sei
Assegura: processamento da função
*/
#include <stdio.h>

double f(double *);

void absoluto(double *);

int main(void)
{
    double x = 10;
    double y = f(&x);

    printf("x = %g e y = %g\n", x, y); // x = 0 e y = 20

    double d = -7.95;
    absoluto(&d);
    printf("d = %g\n", d);

    return 0;
}

double f(double *a)
{
    double y = 2 * *a; // pega o valor que está em x
    *a = 0;            // muda x
    return y;
}

void absoluto(double *v)
{
    if (*v < 0)
        *v = -*v;
}