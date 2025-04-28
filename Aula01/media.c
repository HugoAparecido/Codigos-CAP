/*
Descrição: Cálculo da média
Requer: dois valores reais
Assegura: apresentação da média
    Obtenha v1 e v2
    média <- (v1+v2)/2
    Apresente média
Jander Moreira - 2025
*/
#include <stdio.h>

int main(void)
{
    double valor1 = 2.5; // NÃO USAR FLOAT
    double valor2 = 6.4;

    double media = (valor1 + valor2) / 2;

    printf("media = %g\n", media);
    return 0;
}