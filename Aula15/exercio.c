/*
 */

#include <stdio.h>

#define QUANTIDADE_MAX 100

#define INEXISTENTE -1

int localize_valor(int vetor[], int tamanho, int valor_buscado)
{
    int posicao = 0;
    while (posicao < tamanho && vetor[posicao] != valor_buscado)
        posicao++;
    if (posicao < tamanho)
        return posicao;
    else
        return INEXISTENTE;
}

/*
Função para colocar um elemento no vetor numa nova posição no final
@param o vetor, o tamanho do vetor com valores válidos, o valor a ser adicionado
@return o vetor e o tamanho atualizados
*/
void acrescentar_item_vetor(int vetor[], int *tamanho, int novo_valor)
{
    if (*tamanho == QUANTIDADE_MAX)
        printf("Limite excedido...\n");
    else if (localize_valor(vetor, *tamanho, novo_valor) == INEXISTENTE)
    {
        vetor[*tamanho] = novo_valor;
        (*tamanho)++;
    }
}

/*
Função para escrever todos os elementos do vetor
@param o vetor, o tamanho do vetor com valores válidos
@return A apresentação de todos os valores do vetor
*/
void escrever_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d\n", vetor[i]);
    printf("\n");
}

int main(void)
{
    char linha[160];

    int codigos_alunos[QUANTIDADE_MAX];
    int tamanho_codigo_alunos = 0;

    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL)
    {
        perror("dados.txt");
        return 1;
    }

    while(fgets(linha, sizeof linha, arquivo)){
        int codigo;
        sscanf(linha, "%d", &codigo);
        acrescentar_item_vetor(codigos_alunos, &tamanho_codigo_alunos, codigo);
    }

    escrever_vetor(codigos_alunos, tamanho_codigo_alunos);

    fclose(arquivo);

    return 0;
}