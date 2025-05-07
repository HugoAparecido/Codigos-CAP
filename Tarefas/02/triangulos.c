/*
Descrição: Verificação da clssificação de um triângulo, dado dois ângulos.
Entrada: Dois ângulos em graus.
Saída: Apresnetação da classificação do triângulo.
*/

#include <stdio.h>

int main(void)
{

    printf("Digite dois ângulo de um triângulo em graus separados por espaço: ");
    char entrada[160];
    fgets(entrada, sizeof(entrada), stdin);
    int angulo1, angulo2;
    sscanf(entrada, "%d %d", &angulo1, &angulo2);

    int soma_angulos = angulo1 + angulo2;
    int angulo3 = 180 - soma_angulos;

    if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
        printf("O triângulo é acutângulo.\n");
    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
        printf("O triângulo é retângulo.\n");
    if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90)
        printf("O triângulo é obtusângulo.\n");

    return 0;
}