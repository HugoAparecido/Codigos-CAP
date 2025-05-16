/*
Mostrar o conteúdo do arquivo
Assegura: a leitura do arquivo

Jander, 2025 - CAP
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Qual é o arquivo?
    printf("Qual o arquivo? ");
    char nome_arquivo[160];
    fgets(nome_arquivo, sizeof(nome_arquivo), stdin);
    nome_arquivo[strlen(nome_arquivo) - 1] = '\0';

    // Acesso ao arquivo
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL)
    {
        perror(nome_arquivo);
        return 1;
    }

    // Acesso ao texto do arquivo
    char linha[200];
    int numero_linhas = 0;
    while (fgets(linha, sizeof linha, arquivo) != NULL)
    {
        printf("%s", linha);
        numero_linhas++;
    }

    // Encerramento do acesso ao arquivo
    fclose(arquivo);
    printf("\n\n O arquivo possui %d linhas\n", numero_linhas);

    return 0;
}