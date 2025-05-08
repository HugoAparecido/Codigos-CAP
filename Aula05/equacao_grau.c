/*
Descrição: Determonação, dados os coeficientes, das raízes de uma equação ax² + bx + c = 0, nunca sendo a e b simultaneamente nulos.
Requer: valores de a, b, c
Assegura: apresentação das raízes reais ou sem apresentar nada se não houver nenhuma
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    char entrada[160];
    printf("Digite os coeficientes a, b e c: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        double x = -c / b;
        printf("%g\n", x);
    }
    else
    {
        double delta = b * b - 4 * c * a;
        if (delta == 0)
        {
            double x = -b / (2 * a);
            printf("%g\n", x);
        }
        else if (delta > 0)
        {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            printf("x1: %g, x2: %g\n", x1, x2);
        }
    }

    return 0;
}