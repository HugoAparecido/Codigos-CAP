// Cálculo da média de duas notas e sinalização de aprovação/reprovação
// REquer; duas notas
// Assegura: apresentação da média e mensagem  "aprovado" ou reprovado

// Jander 2025 - CAP

#include <stdio.h>

int main(void)
{
    // Obtenha as duas notas
    char entrada[160];
    printf("Digite as duas notas: ");
    fgets(entrada, sizeof(entrada), stdin);
    double nota1, nota2;
    sscanf(entrada, "%lf%lf", &nota1, &nota2);

    // Calcule a média
    double media = (nota1 + nota2) / 2;

    // Apresente a média
    printf("Média = %.1f\n", media);

    // Apresente a mensagem de aprovação/reprovação
    if (media >= 5.95) // >= 6 por conta da precisão
        printf("Situação = Aprovado\n");
    else
        printf("Situação = Reprovado\n");

    return 0;
}