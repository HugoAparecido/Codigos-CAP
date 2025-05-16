/*
Criação de um arquivo texto
Assegura: escrita de linhas em um arquivo

Jander, 2025 - CAP
*/
#include <stdio.h>

/*
Acesso:
    arq=fopen(nome, modo)
    modo:
    "w" - cria arquivo novo se não existir; zera um arquivo preexistente e prepara p/ escrever no início.
    "a" - cria arq. novo se não exixtir; abre arq. existente e prepara p/ escrever no final.
    "r" - abre arq. existente para leitura e posiciona para ler no início.

    scanf("%d", &i);
    fscanf(arq, "%d", &i);
    fscanf(stdin,  ---)

    "A"-> A\0
*/

int main(void)
{
    // Acesso ao arquivo
    FILE *arquivo = fopen("saida-exemplo.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro na criação do arqiivo\n");
        return 1;
    }

    // Uso do arquivo
    for (int i = 0; i < 10; i++)
        fprintf(arquivo, "%d + %d = %d\n", i, 20, i + 20);

    // Encerramento do acesso ao arquivo
    fclose(arquivo);

    return 0;
}