#include <stdio.h>

// ---

// Define constantes simbólicas para as dimensões da matriz, tornando o código mais legível e fácil de manter.
#define LINHAS 10     // O número de linhas na matriz.
#define COLUNAS 10    // O número de colunas na matriz.
#define COLUNA_SOMA 2 // O índice da coluna específica a ser somada.

// ---

/**
 * @brief Imprime os elementos de uma matriz de inteiros.
 *
 * @param matriz A matriz bidimensional a ser impressa. O tipo do parâmetro é um array de tamanho fixo para as colunas.
 * @param linhas O número de linhas a serem impressas.
 * @param colunas O número de colunas a serem impressas.
 */
void escreva_matriz(int matriz[][COLUNAS], int linhas, int colunas)
{
    // Loop externo para iterar sobre as linhas da matriz.
    for (int i = 0; i < linhas; i++)
    {
        // Loop interno para iterar sobre as colunas de cada linha.
        for (int j = 0; j < colunas; j++)
            // Imprime o elemento da matriz na posição [i][j].
            // O especificador de formato `%3d` alinha os números à direita em um espaço de 3 caracteres.
            printf("%3d ", matriz[i][j]);
        // Após imprimir todos os elementos de uma linha, imprime uma nova linha para formatar a matriz.
        printf("\n");
    }
}

// ---

/**
 * @brief Calcula a soma de todos os elementos de uma matriz.
 *
 * @param matriz A matriz bidimensional de inteiros.
 * @param linhas O número de linhas da matriz.
 * @param colunas O número de colunas da matriz.
 * @return A soma total de todos os elementos da matriz.
 */
int soma_matriz(int matriz[][COLUNAS], int linhas, int colunas){
    // Inicializa a variável `soma` para acumular a soma dos elementos.
    int soma = 0;
    // Loop aninhado para percorrer cada elemento da matriz.
    // O loop externo itera sobre as linhas.
    for (int i = 0; i < LINHAS; i++)
        // O loop interno itera sobre as colunas.
        for (int j = 0; j < COLUNAS; j++)
            // Adiciona o valor do elemento atual à soma.
            soma += matriz[i][j];
    // Retorna a soma total.
    return soma;
}

// ---

/**
 * @brief Função principal do programa.
 *
 * Demonstra a declaração, inicialização, preenchimento e manipulação de uma matriz bidimensional.
 */
int main(void)
{
    // Declara e inicializa uma matriz bidimensional de inteiros.
    // O inicializador `{{0}}` garante que todos os elementos da matriz sejam zerados.
    int matriz[LINHAS][COLUNAS] = {{0}};

    // Atribui valores específicos a alguns elementos da matriz.
    // Atribui 10 ao elemento na primeira linha e primeira coluna (índice [0][0]).
    matriz[0][0] = 10;
    // Atribui 5 ao elemento na última linha e última coluna.
    matriz[LINHAS - 1][COLUNAS - 1] = 5;

    // Loop aninhado para preencher a matriz com valores calculados com base em seus índices.
    // Por exemplo, o elemento [i][j] receberá o valor (i+1)*10 + (j+1).
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            matriz[i][j] = (i + 1) * 10 + (j + 1);

    // Loop aninhado para solicitar ao usuário que insira valores para cada elemento da matriz.
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
        {
            // Declara um buffer para a entrada do usuário.
            char entrada[160];
            // Exibe uma mensagem solicitando o valor para a posição [i][j].
            printf("m[%d, %d] = ", i, j);
            // Lê a linha de entrada do usuário de forma segura.
            fgets(entrada, sizeof entrada, stdin);
            // Converte a string lida para um inteiro e armazena na posição correspondente da matriz.
            sscanf(entrada, "%d", &matriz[i][j]);
        }

    // Chama a função para imprimir o conteúdo atual da matriz.
    escreva_matriz(matriz, LINHAS, COLUNAS);

    // Chama a função para calcular a soma de todos os elementos da matriz e imprime o resultado.
    printf("soma = %d\n", soma_matriz(matriz, LINHAS, COLUNAS));

    // ---
    // Início do bloco para somar os elementos de uma coluna específica.

    // Inicializa a variável `soma` para acumular a soma da coluna.
    int soma = 0;
    // Loop para iterar sobre as linhas da matriz.
    for (int i = 0; i < LINHAS; i++)
        // Adiciona à soma o elemento da coluna definida por `COLUNA_SOMA` em cada linha.
        soma += matriz[i][COLUNA_SOMA];
    // Imprime a soma dos elementos da coluna.
    printf("soma = %d\n", soma);

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}