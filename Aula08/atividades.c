/*
Descrição: implementação de várias funções
Requer: Não sei
Assegura: Resultados de funções
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
Retorna o valor absoluto
@param valor
@return valor absoluto
*/
double absoluto(double);

int numero_divisores(int);

int soma_divisores(int);

bool eh_numero_perfeito(int); // numero que é igual a soma de seus divisores exceto ele mesmo

double distancia_da_origem(double, double);

int main(void)
{
    for (double v = -2; v <= 2; v += 0.2)
        printf("absoluto(%5.2f) = %5.2f\n", v, absoluto(v));

    int divisores[] = {5, 3, 6, 7, 1024};

    for (int i = 0; i < 5; i++)
        printf("A quantidade de divisores de %d é %d\n", divisores[i], numero_divisores(divisores[i]));

    for (int i = 1; i <= 10; i++)
        printf("%d tem %d divisores\n", i, numero_divisores(i));

    for (int i = 1; i <= 10; i++)
        printf("%d tem soma %d\n", i, soma_divisores(i));

    for (int i = 0; i < 5; i++)
        printf("A soma dos divisores de %d é %d\n", divisores[i], soma_divisores(divisores[i]));

    printf("Descubra se um número é perfeito: ");
    int numero;
    scanf("%d", &numero);

    if (eh_numero_perfeito(numero))
        printf("%d é um número perfeito\n", numero);
    else
        printf("%d não é um número perfeito\n", numero);

    printf("Descubra a distância de um ponto até a origem: ");
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("A distância é de %g\n", distancia_da_origem(x, y));

    return 0;
}

double absoluto(double numero)
{
    return numero < 0 ? -numero : numero;
}

int numero_divisores(int numero)
{
    int qtd_divisores = 1; // conta o próprio n
    for (int i = 1; i <= numero / 2; i++)
        if (numero % i == 0)
            qtd_divisores++;
    return qtd_divisores;
}

int soma_divisores(int numero)
{
    int soma = numero; // inclui o próprio n
    for (int i = 1; i <= numero / 2; i++)
        if (numero % i == 0)
            soma += i;
    return soma;
}

bool eh_numero_perfeito(int numero)
{
    return 2 * numero == soma_divisores(numero);
}

double distancia_da_origem(double x, double y)
{
    return sqrt(pow(x, 2) + pow(y, 2));
}