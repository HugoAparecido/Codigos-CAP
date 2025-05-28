/*
    Conversão de Celsius para fahrenheit
    Hugo Aparecido Gregorio de Almeida, 844917
*/
#include <stdio.h>

/*
Calculo de uma temperatura em fahrenheit
@param temperatura em Celsius
@return temperatura em fahrenheit
*/

double fahrenheit(double celsius)
{
    return 9.0 / 5 * celsius + 32;
}

int main(void)
{
    double celsius;
    scanf("%lf", &celsius);
    printf("%.1f", fahrenheit(celsius));

    return 0;
}