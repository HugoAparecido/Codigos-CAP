#include <stdio.h>

int main(void)
{
    struct pessoa
    {
        char nome[100];
        char telefone[20];
        char estado[3];
    };
    FILE *arquivo = fopen("dados.bin", "r");
    if (arquivo == NULL)
    {
        perror("Arquivo dados-binario");
        return 1;
    }
    struct pessoa j;

    fread(&j, sizeof j, 1, arquivo);
    printf("Nome = %s, tel = %s, estados = %s\n", j.nome, j.telefone, j.estado);
}