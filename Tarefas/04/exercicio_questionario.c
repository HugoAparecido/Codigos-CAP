#include <stdio.h>
#include <stdbool.h>

/*
Retirada do máximo entre dois valores
@param double numero 1, double numero 2
@return o máximo dentre eles
*/

double max(double num1, double num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

/*
Calculo do mínimo dentre dois valores
@param valor1, valor2
@return o mínimo entre os dois
*/

double min(double valor1, double valor2)
{
    if (valor1 < valor2)
        return valor1;
    else
        return valor2;
}

/*
Calculo do resto da divisão
@param um valor inteiro e positivo, um divisor diferente de zero
@return o resto da divisão
*/

int resto(int valor, int divisor)
{
    return valor % divisor;
}

/*
Verifica se um valor eh par
@param valor a ser verificado
@return se ele é par (true) ou não (false)
*/

bool par(int valor)
{
    return valor % 2 == 0;
}

/*
Cáculo do número de raízes de uma função do segundo grau
@param coeficiente a, coeficiente b, e coeficiente c
@return número de raízes reais distintas ou -1 se a equção não for válida
*/

int numero_raizes(double a, double b, double c)
{
    if (a == 0)
        return -1;
    double delta = b * b - 4 * a * c;
    if (delta == 0)
    {
        return 1;
    }
    else if (delta > 0)
        return 2;
    else
        return 0;
}

/*
Verifica se uma função do 2 grau tem duas raízes reais
@param coeficiente a, coeficiente b, e coeficiente c
@return se tem ou não duas raízes reais
*/

bool duas_raizes_reais(double a, double b, double c)
{
    if (numero_raizes(a, b, c) == 2)
        return true;
    else
        return false;
}

/*
Comparacao entre entre dois numeros
@param numero1, numero2
@return o caracter correspondente a ao o que o primeiro é com o segundo, exemplo maior, igual ou menor
*/

char compare(double valor1, double valor2)
{
    if (valor1 == valor2)
        return '=';
    if (valor1 > valor2)
        return '>';
    else
        return '<';
}

int main(void)
{

    printf("%g", max(1.2, 1.7));
    printf("%g", max(-2.4, 0.0));
    return 0;
}