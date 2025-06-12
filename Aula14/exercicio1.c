/*
Descrição: Manipulação de vetores dinamicamente.
Requer: Valores predefinidos no código.
Assegura: várias apresentações do vetor.
*/

#include <stdio.h>

#define MAXIMO 100

#define INEXISTENTE -1

/*
Função para escrever todos os elementos do vetor
@param o vetor, o tamanho do vetor com valores válidos
@return A apresentação de todos os valores do vetor
*/
void escrever_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

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
    if (*tamanho == MAXIMO)
        printf("Limite excedido...\n");
    else if (localize_valor(vetor, *tamanho, novo_valor) == INEXISTENTE)
    {
        vetor[*tamanho] = novo_valor;
        (*tamanho)++;
    }
}

int localize_valor2(int vetor[], int tamanho, int valor_buscado)
{
    for (int i = 0; i < tamanho; i++)
        if (vetor[i] == valor_buscado)
            return i;
    return INEXISTENTE;
}

int main(void)
{
    int vetor[MAXIMO];
    int quantidade = 0;

    // coloca 5x 10 dentro do vetor
    for (int i = 0; i < 5; i++)
        acrescentar_item_vetor(vetor, &quantidade, 10);

    escrever_vetor(vetor, quantidade);

    acrescentar_item_vetor(vetor, &quantidade, 17);

    escrever_vetor(vetor, quantidade);

    // novas inserções...
    int novos_valores[] = {18, 13, 21, 45, 21};
    for (int i = 0; i < (int)(sizeof novos_valores / sizeof novos_valores[0]); i++)
        acrescentar_item_vetor(vetor, &quantidade, novos_valores[i]);

    escrever_vetor(vetor, quantidade);

    printf("10? %d\n", localize_valor2(vetor, quantidade, 10));
    printf("18? %d\n", localize_valor2(vetor, quantidade, 18));
    printf("21? %d\n", localize_valor2(vetor, quantidade, 21));
    printf("3? %d\n", localize_valor2(vetor, quantidade, 3));

    return 0;
}