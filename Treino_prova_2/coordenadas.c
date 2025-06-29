#include <stdio.h>
#include <math.h>

void ler_coordenadas(int *x, int *y, int *z)
{
    printf("Digite as coordenadas (x y z): ");
    scanf("%d %d %d", x, y, z);
}

double calcular_distancia(int x1, int y1, int z1, int x2, int y2, int z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main(void)
{
    int x1, y1, z1, x2, y2, z2;
    ler_coordenadas(&x1, &y1, &z1);
    ler_coordenadas(&x2, &y2, &z2);

    printf("A distancia entre os pontos é: %.2f\n", calcular_distancia(x1, y1, z1, x2, y2, z2));

    return 0;
}