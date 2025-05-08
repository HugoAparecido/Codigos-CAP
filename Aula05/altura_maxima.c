/*
Descrição: Determinação da altura máxima em uma equipe de 20 competidores
Requer: uma sequência de 20 medidas de altura
Assegura: a altura máxima
*/
#include <stdio.h>

int main(void)
{
    double altura;
    double altura_max;

    printf("Digite a altura do competidor 1: ");
    scanf("%lf", &altura);

    altura_max = altura;
    for (int i = 2; i <= 20; i++)
    {
        printf("Digite a altura do competidor %d: ", i);
        scanf("%lf", &altura);
        if (altura > altura_max)
            altura_max = altura;
    }

    printf("A altura máxima é: %.2lf\n", altura_max);

    return 0;
}