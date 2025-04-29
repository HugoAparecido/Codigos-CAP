#include <stdio.h>

int main(void)
{
    int idade_pedro = 10;
    printf("Pedro tem %d anos.\n", idade_pedro);

    int idade_maria = 15;
    printf("Maria, por sua vez, tem %d anos.\n", idade_maria);

    int diferenca_idade_maria_pedro = idade_maria - idade_pedro;
    printf("A diferença entre eles é %d - %d = %d anos.\n", idade_maria, idade_pedro, diferenca_idade_maria_pedro);

    return 0;
}