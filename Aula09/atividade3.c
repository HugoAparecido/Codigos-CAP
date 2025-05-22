/*
Descrição: realização de diferentes funções
Requer: alguns valores
Assegura: pós-realização das funções
*/

/*
int i = 10;
int *pi = &i;
int *pi2;
pi2 = pi;
*pi = 7;
*/

#include <stdio.h>

void torna_par(int *);

void torna_media(double *, double *);

void troque(int *, int *);

void ordene(int *, int *);

int main(void)
{
    int n = 5;
    printf("antes: n = %d\n", n);
    torna_par(&n);
    printf("depois: n = %d\n", n);

    double x = 2.3, y = 5.6;
    printf("antes: x = %g, y = %g\n", x, y);
    torna_media(&x, &y);
    printf("depois: x = %g, y = %g\n", x, y);

    int i = 2, k = 7;
    printf("antes: i = %d, k = %d\n", i, k);
    troque(&i, &k);
    printf("depois: i = %d, k = %d\n", i, k);

    printf("antes: i = %d, k = %d\n", i, k);
    ordene(&i, &k);
    printf("depois: i = %d, k = %d\n", i, k);

    return 0;
}

void torna_par(int *numero)
{
    *numero = *numero % 2 != 0 ? *numero + 1 : *numero;
}

void torna_media(double *nota1, double *nota2)
{
    *nota1 = *nota2 = (*nota1 + *nota2) / 2;
}

void troque(int *num1, int *num2)
{
    int manter = *num1;
    *num1 = *num2;
    *num2 = manter;
}

void ordene(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        troque(num1, num2);
    }
}