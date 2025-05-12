/*
Descrição: Contagem de vezes em que o primeiro nome apareceu na sequência seguido pelo sentinela 'FIM'
Requer: uma série de nomes e o sentinela
Assegura: apresentação da quantidade de vezes em que o primeiro nome apareceu na sequência
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char entrada[160];

    fgets(entrada, sizeof(entrada), stdin);
    char primeiro_nome[20];
    sscanf(entrada, "%s", primeiro_nome); // Leitura do primeiro nome

    char nome_atual[20];
    int qtd_nomes = 1;
    while (strcmp(nome_atual, "FIM") != 0)
    {
        fgets(entrada, sizeof(entrada), stdin); // Leitura dos próximos
        sscanf(entrada, "%s", nome_atual);
        if (strcmp(primeiro_nome, nome_atual) == 0)
            qtd_nomes++;
    }
    printf("%d", qtd_nomes);

    return 0;
}