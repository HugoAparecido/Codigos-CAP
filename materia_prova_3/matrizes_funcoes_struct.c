#include <stdio.h>  // Inclui a biblioteca padrão para funções de entrada e saída, como `printf`.
#include <stdlib.h> // Inclui a biblioteca padrão para funções de utilidade geral, como `rand` e `srand`.

// ---

// Define o número máximo de linhas e colunas que a matriz pode ter.
// Essas constantes são usadas para definir o tamanho do array dentro da estrutura `matriz`.
#define MAX_LINHAS 50
#define MAX_COLUNAS 50

// ---

/**
 * @brief Definição da estrutura `matriz`.
 *
 * Esta estrutura representa uma matriz bidimensional de números de ponto flutuante.
 * Ela armazena o número real de linhas e colunas usadas, além de um array
 * bidimensional de tamanho fixo para os dados.
 */
struct matriz
{
    // Armazena o número de linhas que a matriz está usando.
    int linhas;
    // Armazena o número de colunas que a matriz está usando.
    int colunas;
    // Um array bidimensional para armazenar os dados da matriz. O tamanho é fixo.
    double dados[MAX_LINHAS][MAX_COLUNAS];
};

// ---

// Declaração de protótipos de funções. Isso informa ao compilador sobre a existência
// das funções antes que elas sejam definidas.

/**
 * @brief Cria e retorna uma nova matriz com dimensões especificadas, inicializada com zeros.
 * @param linhas O número de linhas da nova matriz.
 * @param colunas O número de colunas da nova matriz.
 * @return Uma nova estrutura `matriz` inicializada.
 */
struct matriz nova_matriz(int linhas, int colunas);

/**
 * @brief Imprime os elementos de uma matriz no console.
 * @param matriz A estrutura `matriz` a ser impressa.
 */
void escreva_matriz(struct matriz matriz);

/**
 * @brief Cria e retorna uma nova matriz com dimensões especificadas, preenchida com valores aleatórios.
 * @param linhas O número de linhas da nova matriz.
 * @param colunas O número de colunas da nova matriz.
 * @return Uma nova estrutura `matriz` preenchida com valores aleatórios.
 */
struct matriz aleatoria(int linhas, int colunas);

/**
 * @brief Calcula e retorna a soma de todos os elementos de uma matriz.
 * @param matriz A estrutura `matriz` cujos elementos serão somados.
 * @return A soma total dos elementos da matriz como um `double`.
 */
double soma(struct matriz matriz);

/**
 * @brief Calcula e retorna a média de todos os elementos de uma matriz.
 * @param matriz A estrutura `matriz` para a qual a média será calculada.
 * @return A média dos elementos da matriz como um `double`.
 */
double media(struct matriz matriz);

// ---

/**
 * @brief Função principal do programa.
 *
 * Demonstra a criação, manipulação e cálculo de propriedades de estruturas de matrizes.
 */
int main(void)
{
    // Inicializa o gerador de números aleatórios com uma semente fixa (0).
    // Isso garante que a sequência de números aleatórios seja a mesma a cada execução do programa.
    srand(0);

    // Cria uma nova matriz `m1` com 4 linhas e 5 colunas, inicializada com zeros.
    struct matriz m1 = nova_matriz(4, 5);
    // Imprime um cabeçalho para a matriz `m1`.
    printf("\nM1\n");
    // Imprime o conteúdo da matriz `m1`.
    escreva_matriz(m1);
    // Calcula e imprime a soma dos elementos de `m1`.
    printf("Soma de M1 = %g\n", soma(m1));

    // ---

    // Cria uma nova matriz `m2` com 20 linhas e 10 colunas, inicializada com zeros.
    struct matriz m2 = nova_matriz(20, 10);
    // Loop para preencher a quinta coluna (índice 4) de `m2` com valores sequenciais (1, 2, 3, ...).
    for (int i = 0; i < m2.linhas; i++)
        m2.dados[i][4] = i + 1;
    // Imprime um cabeçalho para a matriz `m2`.
    printf("\nM2\n");
    // Imprime o conteúdo da matriz `m2`.
    escreva_matriz(m2);
    // Calcula e imprime a soma dos elementos de `m2`.
    printf("Soma de M2 = %g\n", soma(m2));

    // ---

    // Cria uma nova matriz `m3` com 30 linhas e 30 colunas, preenchida com valores aleatórios.
    struct matriz m3 = aleatoria(30, 30);
    // Imprime um cabeçalho para a matriz `m3`.
    printf("\nM3\n");
    // Imprime o conteúdo da matriz `m3`.
    escreva_matriz(m3);
    // Calcula e imprime a soma dos elementos de `m3`.
    printf("Soma de M3 = %g\n", soma(m3));
    // Calcula e imprime a média dos elementos de `m3`.
    printf("Media de M3 = %g\n", media(m3));

    // Retorna 0 para indicar que o sucesso da execução do programa.
    return 0;
}

// ---

/**
 * @brief Implementação da função `nova_matriz`.
 *
 * @param linhas O número de linhas da nova matriz.
 * @param colunas O número de colunas da nova matriz.
 * @return A estrutura `matriz` criada e inicializada.
 */
struct matriz nova_matriz(int linhas, int colunas)
{
    // Declara uma nova estrutura `matriz`.
    struct matriz matriz;
    // Atribui as dimensões especificadas aos membros da estrutura.
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    // Loop aninhado para inicializar todos os elementos da matriz com 0.0.
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz.dados[i][j] = 0;

    // Retorna a estrutura `matriz` inicializada.
    return matriz;
}

// ---

/**
 * @brief Implementação da função `aleatoria`.
 *
 * @param linhas O número de linhas da nova matriz.
 * @param colunas O número de colunas da nova matriz.
 * @return A estrutura `matriz` preenchida com valores aleatórios.
 */
struct matriz aleatoria(int linhas, int colunas)
{
    // A função `srand` é chamada aqui para inicializar o gerador de números aleatórios com uma semente
    // baseada nas dimensões da matriz.
    // **Atenção:** Em programas que geram múltiplos conjuntos de números aleatórios, é melhor chamar `srand`
    // uma única vez no início do `main` com `time(NULL)` para garantir uma sequência diferente a cada execução.
    // Usar uma semente fixa ou baseada em valores constantes gera a mesma sequência de números aleatórios
    // toda vez que a função é chamada com os mesmos parâmetros.
    srand((linhas + colunas) / (colunas % 3 + 1));
    // A linha comentada `// srand(linhas+colunas);` mostra uma semente alternativa.
    
    // Declara uma nova estrutura `matriz`.
    struct matriz matriz;
    // Atribui as dimensões.
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    // Loop aninhado para preencher a matriz com valores aleatórios.
    // `rand() % 1000` gera um inteiro entre 0 e 999.
    // A multiplicação por `0.1` o converte em um número de ponto flutuante entre 0.0 e 99.9.
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz.dados[i][j] = (rand() % 1000) * 0.1;

    // Retorna a estrutura `matriz` preenchida.
    return matriz;
}

// ---

/**
 * @brief Implementação da função `escreva_matriz`.
 *
 * @param matriz A estrutura `matriz` a ser impressa.
 */
void escreva_matriz(struct matriz matriz)
{
    // Loop externo para iterar sobre as linhas da matriz.
    for (int i = 0; i < matriz.linhas; i++)
    {
        // Loop interno para iterar sobre as colunas da matriz.
        for (int j = 0; j < matriz.colunas; j++)
            // Imprime o valor do elemento.
            // `%5.1f` formata o número para ocupar 5 espaços no total, com 1 casa decimal.
            printf("%5.1f ", matriz.dados[i][j]);
        // Imprime uma nova linha após cada linha da matriz.
        printf("\n");
    }
}

// ---

/**
 * @brief Implementação da função `soma`.
 *
 * @param matriz A estrutura `matriz` cujos elementos serão somados.
 * @return A soma total dos elementos.
 */
double soma(struct matriz matriz)
{
    // Inicializa a variável `soma` para acumular o total.
    double soma = 0;
    // Loop aninhado para percorrer cada elemento da matriz.
    for (int i = 0; i < matriz.linhas; i++)
        for (int j = 0; j < matriz.colunas; j++)
            // Adiciona o valor do elemento atual à soma.
            soma += matriz.dados[i][j];
    // Retorna o valor acumulado.
    return soma;
}

// ---

/**
 * @brief Implementação da função `media`.
 *
 * @param matriz A estrutura `matriz` para a qual a média será calculada.
 * @return A média dos elementos.
 */
double media(struct matriz matriz)
{
    // A média é a soma de todos os elementos dividida pelo número total de elementos.
    // A função `soma` é reutilizada para obter o total, e o número de elementos é o produto de linhas por colunas.
    return soma(matriz) / (matriz.colunas * matriz.linhas);
}