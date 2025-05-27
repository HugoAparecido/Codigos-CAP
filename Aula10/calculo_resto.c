/*
Calculo do resto da divisão de dois números
Requer: Dois números
Assegura: O resto da divisão
*/

#include <stdio.h>

int main(void)
{
    char entrada[160];

    fgets(entrada, sizeof entrada, stdin);

    int num1, num2;
    sscanf(entrada, "%d %d", &num1, &num2);

    printf("%d", num1 % num2);

    return 0;
}