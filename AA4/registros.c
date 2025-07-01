/*
 * Descrição: Programa que dado 3 arquivos (nomes.txt, telefones.txt e estados.txt) crie um arquivo binário juntando todos eles.
 * Requer: Três arquivos de texto com nomes, telefones e a sigla dos estados, sendo que cada a mesma linha dos três arquivos estão     ligadas
 * Assegura: a criação de um arquivo binário com os dados dos três arquivos de texto.
 */

#include <stdio.h>
#include <string.h>
struct pessoa
{
    char nome[100];
    char telefone[20];
    char estado[3];
};

int main(void)
{
    FILE *nomes, *telefones, *estados;
    FILE *arquivo_binario_para_guardar;

    nomes = fopen("nomes.txt", "r");
    telefones = fopen("telefones.txt", "r");
    estados = fopen("estados.txt", "r");

    if (nomes == NULL || telefones == NULL || estados == NULL)
    {
        perror("Erro ao abrir os arquivos de texto");
        return 1;
    }

    arquivo_binario_para_guardar = fopen("dados.bin", "wb");
    if (arquivo_binario_para_guardar == NULL)
    {
        perror("Erro ao criar o arquivo binário");
        fclose(nomes);
        fclose(telefones);
        fclose(estados);
        return 1;
    }

    struct pessoa pessoa_atual;

    int quantidade_de_pessoas = 0;

    while (fgets(pessoa_atual.nome, sizeof(pessoa_atual.nome), nomes) != NULL)
    {
        fgets(pessoa_atual.telefone, sizeof(pessoa_atual.telefone), telefones);
        fgets(pessoa_atual.estado, sizeof(pessoa_atual.estado), estados);
        pessoa_atual.nome[strcspn(pessoa_atual.nome, "\n")] = '\0';
        pessoa_atual.telefone[strcspn(pessoa_atual.telefone, "\n")] = '\0';
        pessoa_atual.estado[strcspn(pessoa_atual.estado, "\n")] = '\0';
        fwrite(&pessoa_atual, sizeof pessoa_atual, 1, arquivo_binario_para_guardar);
        quantidade_de_pessoas++;
    }

    fclose(nomes);
    fclose(telefones);
    fclose(estados);
    fclose(arquivo_binario_para_guardar);

    printf("%d\n", quantidade_de_pessoas);

    return 0;
}