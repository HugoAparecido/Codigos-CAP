/*
Descrição: verificar se dois números racionais são iguais dado seus respectivos numeradores e denominadores.
Requer: O numerador e o denominador de cada um dos dois números.
Assegura: A apresentação se é ou não igua.asm
*/

#include <stdio.h>
int main(void)
{
    char entrada[160];

    printf("Digite o numerador e o denominador do primeiro número racional: ");
    fgets(entrada, sizeof(entrada), stdin);
    int numerador1, denominador1;
    sscanf(entrada, "%d %d", &numerador1, &denominador1);

    printf("Digite o numerador e o denominador do segundo número racional: ");
    fgets(entrada, sizeof(entrada), stdin);
    int numerador2, denominador2;
    sscanf(entrada, "%d %d", &numerador2, &denominador2);

    if (numerador1 * denominador2 == numerador2 * denominador1)
        printf("Os números são iguais\n");
    else
        printf("Os números são diferentes\n");

    return 0;
}