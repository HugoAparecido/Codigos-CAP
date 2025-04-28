/*
Descrição: Conversão de grau Celsius para Fahrenheit
Rqquer: temperatura em Celsius
Assegura: apresentação da temperatura equivalente em Farenheit
*/
#include <stdio.h>

int main(void)
{
    // Obtenha a temperatura em Celsius
    printf("Digite um valor em Celsius: ");
    char entrada[160];
    fgets(entrada, sizeof entrada, stdin);
    double celsius = 100;
    sscanf(entrada, "%lf", &celsius);

    // Calcule a temperatura equivalente em Fahrenheit
    double fahrenheit = (double)9 / 5 * celsius + 32;

    // Apresente a temperatura em Fahrenheit
    printf("%g Celsius = %g Fahrenheit\n", celsius, fahrenheit);
    return 0;
}