#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    /*double d1 = 5;
    double d2 = 3;

    printf("soma %g; subtração %g\n", d1 + d2, d1-d2);
    printf("multiplicação %g; divisão %g\n", d1 * d2, d1/d2);

    printf("Expressão: %g\n", d1*d2/(d1+d2));
    printf("Expressão: %g\n", d1/(d2/d1));
    printf("Expressão: %g\n", (d1*d2)/(d1*2*d2));
*/
    int i1 = -10;
    int i2 = 6;
    printf("soma %d; subtração %d\n", i1 + i2, i1 - i2);
    printf("multiplicação %d; divisão %d\n", i1 * i2, i1 / i2);

    bool eh_maior = false || true;

    printf("%d\n", i1 > i2);
    printf("%d\n", i1 < i2);
    printf("%d\n", i1 >= i2);
    printf("%d\n", i1 <= i2);
    printf("%d\n", i1 == i2);
    printf("%d\n", i1 != i2);

    printf("%d\n", i1 == -10 & i2 - 1 == 0);
    // printf("tripla %d\n", 0 <= i1 || i1 >= 20); // Nunca emendar expressões Certo 0 < -10 && -10<20

    // printf("%g\n", 3. * i1 / i2);
    // printf("%g\n", 1.0/2.0/(3.0/2.0));
    // sqrt
    // pow
    // log
    // ln
    // fabs

    return 0;
}