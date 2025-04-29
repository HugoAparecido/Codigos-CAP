/*
Descrição: Cálculo da média de duas notas
Requer: Duas notas
Assegura: Apresentação da média
*/
#include <stdio.h>

int main(void)
{
    char entrada[160];

    printf("Digite a primeira nota: ");
    double nota1;
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &nota1);

    printf("Digite a segunda nota: ");
    fgets(entrada, sizeof entrada, stdin);
    double nota2;
    sscanf(entrada, "%lf", &nota2);

    double media = (nota1 + nota2) / 2.0;
    printf("Média: %.1f\n", media);

    return 0;
}