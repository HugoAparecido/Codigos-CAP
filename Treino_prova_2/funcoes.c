#include <stdio.h>

int hms_para_s(int horas, int minutos, int segundos)
{
    return horas * 3600 + minutos * 60 + segundos;
}

void s_para_hms(int segundos_totais, int *horas, int *minutos, int *segundos)
{
    *horas = segundos_totais / 3600;
    segundos_totais %= 3600;
    *minutos = segundos_totais / 60;
    *segundos = segundos_totais % 60;
}

void limite(int *valor)
{
    if (*valor < 0)
        *valor = 0;
    else if (*valor > 10)
        *valor = 10;
}

void leia(int *valor)
{
    scanf("%d", valor);
    limite(valor);
}

int mdc(int n1, int n2)
{
    while (n2 != 0)
    {
        int resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    return n1;
}

int mdc3(int a, int b, int c)
{
    return mdc(mdc(a, b), c);
}