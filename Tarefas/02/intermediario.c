/*
Descrição: Captura do valor intermediário
Requer: uma sequência de 3 valores
Assegura: o valor intermediário
*/

#include <stdio.h>

int main(void)
{
    char entrada[160];
    double valor1, valor2, valor3;

    printf("Digite os 3 valores da medição: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%lf%lf%lf", &valor1, &valor2, &valor3);

    double intermediario;
    if (valor1 > valor2 && valor1 > valor3)
    {
        if (valor2 > valor3)
            intermediario = valor2;
        else
            intermediario = valor3;
    }
    else if (valor2 > valor1 && valor2 > valor3)
    {
        if (valor1 > valor3)
            intermediario = valor1;
        else
            intermediario = valor3;
    }
    else
    {
        if (valor1 > valor2)
            intermediario = valor1;
        else
            intermediario = valor2;
    }
    printf("O valor intermediário é: %g\n", intermediario);

    return 0;
}