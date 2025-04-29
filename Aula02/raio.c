/*
Descrição: Cálculo da área de um círculo dado o raio
Requer: Raio do círculo
Assegura: Apresentação da área do círculo
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Digite o raio de um círculo: ");
    double raio;
    scanf("%lf", &raio);

    double area = 3.1415926539 * pow(raio, 2); // Área = π * r²
    printf("Área: %.2f\n", area);
    printf("Área: %f\n", area);
    printf("Área: %g\n", area);

    return 0;
}