/*
Descrição: Verificar se uma data é válida dados o anos, mês e dia.
Requer: O ano, mês e dia.
Assegura: A apresentação se a data é válida ou não.
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    char entrada[160];

    printf("Digite o ano, mês e dia: ");
    fgets(entrada, sizeof(entrada), stdin);
    int ano, mes, dia;
    sscanf(entrada, "%d %d %d", &ano, &mes, &dia);

    bool ano_eh_valido = ano > 0;
    bool mes_eh_valido = mes >= 1 && mes <= 12;
    bool dia_eh_valido = ((mes == 1 && dia >= 1 && dia <= 31) ||
                          (mes == 2 && dia >= 1 && dia <= 28) ||
                          (mes == 3 && dia >= 1 && dia <= 31) ||
                          (mes == 4 && dia >= 1 && dia <= 30) ||
                          (mes == 5 && dia >= 1 && dia <= 31) ||
                          (mes == 6 && dia >= 1 && dia <= 30) ||
                          (mes == 7 && dia >= 1 && dia <= 31) ||
                          (mes == 8 && dia >= 1 && dia <= 31) ||
                          (mes == 9 && dia >= 1 && dia <= 30) ||
                          (mes == 10 && dia >= 1 && dia <= 31) ||
                          (mes == 11 && dia >= 1 && dia <= 30) ||
                          (mes == 12 && dia >= 1 && dia <= 31));

    if (ano_eh_valido && mes_eh_valido && dia_eh_valido)
        printf("A data é válida\n");
    else
        printf("A data não é válida\n");

    return 0;
}