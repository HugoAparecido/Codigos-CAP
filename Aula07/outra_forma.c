/*
Descrição: Criação de um arquivo texto e colocar três linhas nele
Requer: 3 linhas
Assegura: escrita de linhas em um arquivo

*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Acesso ao arquivo
    FILE *arquivo = fopen("meu-diario.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro na criação do arqiivo\n");
        return 1;
    }

    // Entradas no diário
    char linha[160];
    printf("> ");
    fgets(linha, sizeof linha, stdin);
    while (strcmp(linha, "\n") != 0)
    {
        fprintf(arquivo, "%s", linha);
        printf("> ");
        fgets(linha, sizeof linha, stdin);
    }

    // Encerramento do acesso ao arquivo
    fclose(arquivo);

    return 0;
}