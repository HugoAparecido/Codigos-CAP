// Conversão de um conceito (A, B, C, D ou E) para nota numérica
// Requer: Um conceito
// Assegura: apresentação da nota equivalente

// Jander, 2025 - CAP
#include <stdio.h>

int main(void)
{
    printf("Qual é o conceito? ");
    char entrada[160];
    fgets(entrada, sizeof(entrada), stdin);
    char conceito = entrada[0];

    double nota;
    if (conceito == 'A')
        nota = 10.0;
    else if (conceito == 'B')
        nota = 8.0;
    else if (conceito == 'C')
        nota = 6.0;
    else if (conceito == 'D')
        nota = 3.0;
    else
        nota = 0.0; // 'E'

    printf("Nota equivalente a %c é %g\n", conceito, nota);

    return 0;
}