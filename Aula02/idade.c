/*
Descrição: Cálculo da estimativa do ano de nascimento
Requer: A idade atual
Assegura: O ano de nascimento estimado
*/
#include <stdio.h>

int main(void)
{
    char entrada[160];

    printf("Digite sua idade atual: ");
    int idade;
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &idade);

    double ano_nascimento = 2025 - idade;
    printf("O ano estimado de nascimento foi %g\n", ano_nascimento);

    return 0;
}