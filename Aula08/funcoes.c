/*
 *Exemplos de funções
 *Requer: ainda não sei
 *Assegura: apresentação de resultados úteis
 *
 *Jander, 2025 - CAP
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>

double dobro(double);

double metade(double);

// double raiz_quarta(double);

bool eh_vogal(char);

bool eh_par(int);

bool eh_impar(int);

/*
tipo-de-retorno nome-função(parâmetros)
*/

int main(void)
{
    setlocale(LC_ALL, "");
    double valor = 5.2;
    double resultado = dobro(valor);
    printf("2 * %g = %g\n", valor, resultado);
    printf("metade de %g = %g\n", valor, metade(valor));
    // printf("a raiz quarta de %g = %g\n", valor, raiz_quarta(valor));

    for (char c = 'a'; c <= 'z'; c++)
        if (eh_vogal(c))
            printf("%c é vogal\n", c);
        else
            printf("%c não é vogal\n", c);

    for (int i = 0; i <= 10; i++)
        if (eh_par(i))
            printf("É par\n");
        else
            printf("Não é par\n");

    for (int i = 0; i <= 10; i++)
        if (eh_impar(i))
            printf("É ímpar\n");
        else
            printf("Não é ímpar\n");

    return 0;
}

double dobro(double x)
{
    return 2 * x;
}

double metade(double x)
{
    return 0.5 * x;
}

bool eh_vogal(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool eh_par(int numero)
{
    return (numero % 2 == 0);
}

bool eh_impar(int numero)
{
    return !eh_par(numero);
}

// double raiz_quarta(double x){
//     return sqrt(sqrt(x));
// }