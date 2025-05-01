// Deacrição: Cálculo da área de um retângulo dada a coordeada de um ponto correspondente ao vértice e seu oposto
// Requer: Coordenadas de cada um dos vértices do retângulo
// Assegura: Apresentação da área do retângulo

#include <stdio.h>
#include <math.h>

int main(void)
{
    char entrada[160];

    // Obtenha as cooordenadas dos vértices do retângulo
    // Vértice 1
    printf("Digite as coordenadas do primeiro vértice no formato (x, y): ");
    fgets(entrada, sizeof(entrada), stdin);
    double x_vertice1, y_vertice1;
    sscanf(entrada, "%lf%lf", &x_vertice1, &y_vertice1);

    // Vértice 2
    printf("Digite as coordenadas do segundo vértice no formato (x, y): ");
    fgets(entrada, sizeof(entrada), stdin);
    double x_vertice2, y_vertice2;
    sscanf(entrada, "%lf%lf", &x_vertice2, &y_vertice2);

    // Cálculo da área do retângulo
    // operador ternário
    // double base = x_vertice2 > x_vertice1 ? x_vertice2 - x_vertice1 : x_vertice1 - x_vertice2;   // base
    // double altura = y_vertice2 > y_vertice1 ? y_vertice2 - y_vertice1 : y_vertice1 - y_vertice2; // altura
    // double area = base * altura;                 // área

    // com if
    // double base, altura, area;
    // if (x_vertice2 > x_vertice1)
    //     base = x_vertice2 - x_vertice1;
    // else
    //     base = x_vertice1 - x_vertice2;
    // if (y_vertice2 > y_vertice1)
    //     altura = y_vertice2 - y_vertice1;
    // else
    //     altura = y_vertice1 - y_vertice2;

    // Apresentação das coordenadas do retângulo
    // printf("base = %g, altura = %g\n", base, altura);
    // area = base * altura;

    // Calcule os lados
    double base = fabs(x_vertice2 - x_vertice1);
    double altura = fabs(y_vertice2 - y_vertice1);
    double area = base * altura;

    // Apresentação da área do retângulo
    printf("Área = %g\n", area);

    return 0;
}