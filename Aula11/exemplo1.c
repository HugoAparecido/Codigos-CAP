/*
    Pontos 3d: manipulações
    Assegura: apresentação de resultados gerais

    Jander, 2025 - CAP
*/

#include <stdio.h>
#include <math.h>

struct ponto_r3
{
    char nome;
    double x, y, z;
};

double distancia_origem(struct ponto_r3 pto);

double distancia_pontos(struct ponto_r3 p1, struct ponto_r3 p2);

struct ponto_r3 crie_ponto(double x, double y, double z);

int main(void)
{
    struct ponto_r3 ponto;

    ponto = crie_ponto(1.2, -0.5, 1.7);

    struct ponto_r3 outro_ponto;
    outro_ponto = crie_ponto(0, 0, ponto.z);

    printf("ponto = (%g, %g, %g)\n", ponto.x, ponto.y, ponto.z);
    printf("ponto = (%g, %g, %g)\n", outro_ponto.x, outro_ponto.y, outro_ponto.z);

    // struct ponto_r3 outro_ponto;

    // outro_ponto = ponto;

    // printf("outro ponto = (%g, %g, %g)\n", outro_ponto.x, outro_ponto.y, outro_ponto.z);

    printf("d = %.2f\n", distancia_origem(ponto));

    // x = 7;
    // y = -1.2;
    // z = 5;
    // printf("A distância do ponto (%.2f, %.2f, %.2f) à origem é: %.2f\n", x, y, z, distancia_origem(x, y, z));

    return 0;
}

double distancia_origem(struct ponto_r3 pto)
{
    struct ponto_r3 origem;
    origem.x = origem.y = origem.z = 0;
    return distancia_pontos(pto, origem);
}

double distancia_pontos(struct ponto_r3 p1, struct ponto_r3 p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

struct ponto_r3 crie_ponto(double x, double y, double z)
{
    struct ponto_r3 novo_ponto;
    novo_ponto.x = x;
    novo_ponto.y = y;
    novo_ponto.z = z;
    return novo_ponto;
}