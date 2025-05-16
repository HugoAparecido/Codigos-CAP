/*
Soma de valores reais de um arquivo texto
Requer: um arquivo texto contendo um valor real por linha
Assegura: apresentação da soma dos valores
*/
#include <stdio.h>

int main(void)
{
    FILE *arquivo = fopen("dados-reais.txt", "r");
    if (arquivo == NULL)
    {
        perror("dados-reais");
        return 1;
    }

    char linha[100];
    double soma = 0;
    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        double valor;
        sscanf(linha, "%lf", &valor);
        soma += valor;
    }

    fclose(arquivo);

    printf("Soma total = %g\n", soma);

    return 0;
}