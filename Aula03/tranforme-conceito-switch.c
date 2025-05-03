#include <stdio.h>

int main(void)
{

    printf("Qual é o conceito? ");
    char entrada[160];
    fgets(entrada, sizeof(entrada), stdin);
    char conceito = entrada[0];
    double nota;
    switch (conceito)
    {
    case 'A':
    case 'a':
        nota = 10.0;
        break;
    case 'B':
    case 'b':
        nota = 8.0;
        break;
    case 'C':
    case 'c':
        nota = 6.0;
        break;
    case 'D':
    case 'd':
        nota = 3.0;
        break;
    case 'E':
    case 'e':
        nota = 0.0;
        break;
    default:
        nota = -1.0;
    }

    printf("Nota equivalente a %c é %g\n", conceito, nota);

    return 0;
}