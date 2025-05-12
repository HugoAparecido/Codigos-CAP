/*
Descrição: Apresentação da categoria de um nadador dada a idade.
Requer: A idade do nadador.
Assegura: A apresentação da categoria do nadador.
*/

#include <stdio.h>

int main(void)
{
    char entrada[160];

    printf("Digite a idade do nadador: ");
    fgets(entrada, sizeof(entrada), stdin);
    int idade;
    sscanf(entrada, "%d", &idade);

    if (idade <= 4)
        printf("Infantil A\n");
    else if (idade < 7)
        printf("Infantil B\n");
    else if (idade <= 10)
        printf("Infantil C\n");
    else if (idade <= 13)
        printf("Juvenil A\n");
    else if (idade <= 17)
        printf("Juvenil B\n");
    else
        printf("Sênior\n");

    return 0;
}