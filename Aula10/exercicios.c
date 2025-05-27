/*
Descrição: Aplicação das funções
Requer: o que a função precisar
Assegura: execução da função
*/

// Para estudar em casa

/*
Escreva uma função para retornar o nº de dígitos de um nº natural
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
Média de 3 valores
@param v1, v2, v3: valores
@return média de v1, v2, v3
*/

double media3(double v1, double v2, double v3)
{
    return (v1 + v2 + v3) / 3;
}

/*
Se valor divisível por 3 e 5
@param valor
@return se é ou não
*/

bool divisivel_5_3(int valor)
{
    return valor % 3 == 0 && valor % 5 == 0;
}

/*
Pegar a unidade
@param numero
@return último dígito do número
*/

int obtem_unidade(int valor)
{
    return valor % 10;
}

/*
Pegar a dezena
@param numero
@return penúltimo dígito do número
*/
int obtem_dezena(int valor)
{
    return valor / 10 % 10;
}

/*
Retorna a distancia em R^3
@param pontos x, y e z de 2 pontos
@return a distaância entre os dois pontos
*/

double distancia_pontos_3D(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

/*
Retorna o ponto médio de 2 pontos no plano R^2
@param x1, y1 : ponto 1;
@param x2, y2 : ponto 2;
@param xmedio, ymedio : ponto medio;
Return a modificção de xmedio, ymedio
*/

void ponto_medio(double x1, double y1, double x2, double y2, double *x_medio, double *y_medio)
{
    *x_medio = (x1 + x2) / 2;
    *y_medio = (y1 + y2) / 2;
}

int main(void)
{
    printf("média3: %g, %g, %g = %g\n", 13.2, 2.2, -4.18, media3(13.2, 2.2, -4.18));
    printf("média3: %g, %g, %g = %g\n", 1., 2., 3., media3(1., 2., 3.));

    printf("Divisores por 5 e 3 até 300:");
    for (int n = 3; n <= 300; n++)
        if (divisivel_5_3(n))
            printf(" %d", n);
    printf("\n");

    printf("Unidade:");
    for (int i = 231; i <= 245; i++)
        printf(" de %d é %d;", i, obtem_unidade(i));
    printf("\n");

    printf("Dezenas:");
    for (int i = 231; i <= 345; i += 13)
        printf(" de %d é %d;", i, obtem_dezena(i));
    printf("\n");

    printf("Distancia: %.2f\n", distancia_pontos_3D(3, 4, 0, 0, 0, 0));       // (3, 4, 0) a (0, 0, 0)
    printf("Distancia: %.2f\n", distancia_pontos_3D(3, 4, 10, 0, 10, 0));     // (3, 4, 10) a (0, 10, 0)
    printf("Distancia: %.2f\n", distancia_pontos_3D(0.5, 0.5, 0, 0, 0, 0.5)); // (0.5, 0.5, 0) a (0, 0, 0)

    double x1 = 17.2, y1 = 11.1, x2 = -0.8, y2 = 8.9, xmedio, ymedio;
    ponto_medio(x1, y1, x2, y2, &xmedio, &ymedio);

    printf("Ponto médio de (%.1f, %.1f) e (%.1f, %.1f) eh (%.1f, %.1f)\n", x1, y1, x2, y2, xmedio, ymedio);

    return 0;
}