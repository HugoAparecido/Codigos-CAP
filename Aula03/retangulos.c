// Dadas 2 descrições de retângulos, dizer se é ou não o mesmo retângulo
#include <stdio.h>

int main(void)
{
    char entrada[160];

    printf("Digite as coordenadas dos dois vértices opsotos do primeiro retângulo no formato (x, y): ");
    fgets(entrada, sizeof(entrada), stdin);
    double x_vertice1_retangulo1, y_vertice1_retangulo1, x_vertice2_retangulo1, y_vertice2_retangulo1;
    sscanf(entrada, "%lf%lf%lf%lf", &x_vertice1_retangulo1, &y_vertice1_retangulo1, &x_vertice2_retangulo1, &y_vertice2_retangulo1);

    printf("Digite as coordenadas dos dois vértices opsotos do segundo retângulo no formato (x, y): ");
    fgets(entrada, sizeof(entrada), stdin);
    double x_vertice1_retangulo2, y_vertice1_retangulo2, x_vertice2_retangulo2, y_vertice2_retangulo2;
    sscanf(entrada, "%lf%lf%lf%lf", &x_vertice1_retangulo2, &y_vertice1_retangulo2, &x_vertice2_retangulo2, &y_vertice2_retangulo2);

    if ((x_vertice1_retangulo1 == x_vertice1_retangulo2 && y_vertice1_retangulo1 == y_vertice1_retangulo2) ||
        (x_vertice1_retangulo1 == x_vertice2_retangulo2 && y_vertice1_retangulo1 == y_vertice2_retangulo2) ||
        (x_vertice2_retangulo1 == x_vertice1_retangulo2 && y_vertice2_retangulo1 == y_vertice1_retangulo2) ||
        (x_vertice2_retangulo1 == x_vertice2_retangulo2 && y_vertice2_retangulo1 == y_vertice2_retangulo2) ||
        (x_vertice1_retangulo1 == x_vertice1_retangulo2 && y_vertice2_retangulo1 == y_vertice1_retangulo2) ||
        (x_vertice1_retangulo1 == x_vertice2_retangulo2 && y_vertice2_retangulo1 == y_vertice2_retangulo2) ||
        (x_vertice2_retangulo1 == x_vertice1_retangulo2 && y_vertice1_retangulo1 == y_vertice2_retangulo2) ||
        (x_vertice2_retangulo1 == x_vertice2_retangulo2 && y_vertice1_retangulo1 == y_vertice1_retangulo2))
    {
        printf("Os retângulos são iguais\n");
    }
    else
    {
        printf("Os retângulos não são iguais\n");
    }

    return 0;
}