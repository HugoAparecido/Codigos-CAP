/*
Descrição: Criação de um arquivo texto e colocar três linhas nele
Requer: 3 linhas
Assegura: escrita de linhas em um arquivo

*/
#include <stdio.h>

int main(void)
{
    // Acesso ao arquivo
    FILE *arquivo = fopen("escrevi-isso.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro na criação do arqiivo\n");
        return 1;
    }

    // Uso do arquivo
    char entrada[160];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite alguma coisa: ");
        fgets(entrada, sizeof(entrada), stdin);
        fprintf(arquivo, "%s", entrada);
    }

    // Encerramento do acesso ao arquivo
    fclose(arquivo);

    return 0;
}