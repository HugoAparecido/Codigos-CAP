#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída.
#include <stdbool.h> // Inclui a biblioteca para o tipo de dado booleano (`bool`).
#include <stdlib.h>  // Inclui a biblioteca para funções de uso geral, como geração de números aleatórios (`rand`, `srand`).

// ---

// Define a capacidade máxima de elementos que um conjunto pode armazenar.
#define MAXIMO 10000

// ---

/**
 * @brief Definição da estrutura `conjunto`.
 *
 * Esta estrutura representa um conjunto de números inteiros usando um array.
 * A estrutura armazena os elementos em um array de tamanho fixo e mantém o controle
 * da quantidade de elementos atualmente no conjunto.
 */
struct conjunto
{
    // Um array de inteiros para armazenar os elementos do conjunto.
    int elementos[MAXIMO];
    // Um contador para o número atual de elementos no conjunto.
    int quantidade;
};

// Declaração de uma variável global constante `vazio` do tipo `struct conjunto`.
// No C99 e em versões mais recentes, os membros de uma variável global são inicializados com zero por padrão.
// Isso significa que `vazio.quantidade` será 0 e `vazio.elementos` será um array de zeros.
const struct conjunto vazio;

// ---

/**
 * @brief Verifica se um conjunto está vazio.
 *
 * @param conjunto A estrutura do conjunto a ser verificada.
 * @return `true` se a quantidade de elementos for zero, `false` caso contrário.
 */
bool conjunto_vazio(struct conjunto conjunto)
{
    // Um conjunto é considerado vazio se sua quantidade de elementos for 0.
    return conjunto.quantidade == 0;
}

// ---

/**
 * @brief Imprime os elementos de um conjunto.
 *
 * @param nome Uma string para o nome do conjunto (por exemplo, "C1").
 * @param conjunto A estrutura do conjunto a ser impressa.
 */
void escreva_conjunto(char *nome, struct conjunto conjunto)
{
    // Imprime o nome do conjunto e o colchete de abertura.
    printf("%s = { ", nome);
    // Itera sobre os elementos do conjunto e os imprime.
    for (int i = 0; i < conjunto.quantidade; i++)
        printf("%d ", conjunto.elementos[i]);
    // Imprime o colchete de fechamento e uma nova linha.
    printf("}\n");
}

// ---

/**
 * @brief Verifica se um elemento pertence a um conjunto.
 *
 * @param conjunto A estrutura do conjunto a ser pesquisada.
 * @param elemento O valor inteiro a ser procurado no conjunto.
 * @return `true` se o elemento for encontrado, `false` caso contrário.
 */
bool pertence(struct conjunto conjunto, int elemento)
{
    int i = 0;
    // Percorre o array de elementos até encontrar o elemento ou atingir o final do conjunto.
    // O loop para se `i` for igual à quantidade ou se o elemento for encontrado.
    while (i < conjunto.quantidade && conjunto.elementos[i] != elemento)
        i++;
    // Se o loop parou antes de atingir o final do conjunto, significa que o elemento foi encontrado.
    return i < conjunto.quantidade;
}

// ---

/**
 * @brief Insere um novo elemento em um conjunto, se ele ainda não estiver presente.
 *
 * @param conjunto Um ponteiro para a estrutura do conjunto a ser modificada.
 * O ponteiro é usado para que as alterações (`conjunto->quantidade++`) sejam permanentes.
 * @param novo_elemento O valor a ser inserido.
 */
void insira(struct conjunto *conjunto, int novo_elemento)
{
    // Primeiro, verifica se o elemento já pertence ao conjunto.
    // A função `pertence` recebe o conjunto por valor, então usamos `*conjunto` para passar a estrutura.
    if (!pertence(*conjunto, novo_elemento))
    {
        // Se o elemento não pertencer, ele é adicionado no final do array.
        conjunto->elementos[conjunto->quantidade] = novo_elemento;
        // A quantidade de elementos no conjunto é incrementada.
        conjunto->quantidade++;
    }
}

// ---

/**
 * @brief Calcula a união de dois conjuntos.
 *
 * @param conj1 O primeiro conjunto.
 * @param conj2 O segundo conjunto.
 * @return Um novo conjunto que é o resultado da união de `conj1` e `conj2`.
 */
struct conjunto uniao(struct conjunto conj1, struct conjunto conj2)
{
    // Declara e inicializa o conjunto de resultado.
    struct conjunto resultado;
    resultado.quantidade = 0;

    // Itera sobre todos os elementos do primeiro conjunto e os insere no conjunto de resultado.
    // A função `insira` garante que não haverá duplicatas.
    for (int i = 0; i < conj1.quantidade; i++)
        insira(&resultado, conj1.elementos[i]);
    // Itera sobre todos os elementos do segundo conjunto e os insere no conjunto de resultado.
    for (int i = 0; i < conj2.quantidade; i++)
        insira(&resultado, conj2.elementos[i]);

    // Retorna o conjunto resultante.
    return resultado;
}

// ---

/**
 * @brief Calcula a interseção de dois conjuntos.
 *
 * @param conj1 O primeiro conjunto.
 * @param conj2 O segundo conjunto.
 * @return Um novo conjunto que é o resultado da interseção de `conj1` e `conj2`.
 */
struct conjunto intersecao(struct conjunto conj1, struct conjunto conj2)
{
    // Declara e inicializa o conjunto de resultado.
    struct conjunto resultado;
    resultado.quantidade = 0;

    // Itera sobre todos os elementos do primeiro conjunto.
    for (int i = 0; i < conj1.quantidade; i++)
        // Para cada elemento de `conj1`, verifica se ele também pertence a `conj2`.
        if (pertence(conj2, conj1.elementos[i]))
            // Se o elemento pertencer a ambos os conjuntos, ele é inserido no conjunto de resultado.
            insira(&resultado, conj1.elementos[i]);

    // Retorna o conjunto resultante.
    return resultado;
}

// ---

/**
 * @brief Função principal do programa.
 *
 * Demonstra a manipulação de conjuntos, incluindo a criação, inserção de elementos,
 * verificação de pertencimento e operações de união e interseção.
 */
int main(void)
{
    // Inicializa o gerador de números aleatórios com uma semente fixa (0).
    // Isso garante que a sequência de números aleatórios seja a mesma a cada execução.
    srand(0);

    // Declara e inicializa `conjunto1` com a variável global `vazio`.
    // Isso cria um conjunto vazio, pois `vazio.quantidade` é 0.
    struct conjunto conjunto1 = vazio;

    // Verifica se `conjunto1` está vazio e imprime uma mensagem correspondente.
    if (conjunto_vazio(conjunto1))
        printf("é vazio\n");
    else
        printf("não é vazio\n");

    // Imprime o conteúdo de `conjunto1`, que está vazio.
    escreva_conjunto("C1", conjunto1);

    // Insere o elemento 10 no conjunto.
    insira(&conjunto1, 10);
    // Imprime o conjunto após a inserção.
    escreva_conjunto("C1", conjunto1);

    // Insere 100 números aleatórios (entre 0 e 9) no conjunto.
    // A função `insira` garante que não haverá duplicatas.
    for (int i = 0; i < 100; i++)
        insira(&conjunto1, rand() % 10);

    // Imprime o conteúdo final do primeiro conjunto.
    escreva_conjunto("C1", conjunto1);

    // Declara um segundo conjunto e o inicializa com quantidade zero.
    struct conjunto conjunto2;
    conjunto2.quantidade = 0;

    // Insere 100 números aleatórios (entre 5 e 14) no segundo conjunto.
    for (int i = 0; i < 100; i++)
        insira(&conjunto2, rand() % 10 + 5);
    // Imprime o conteúdo do segundo conjunto.
    escreva_conjunto("C2", conjunto2);

    // Calcula a união dos dois conjuntos e imprime o resultado.
    // O resultado da função `uniao` é passado diretamente para a função de impressão.
    escreva_conjunto("C1 união C2", uniao(conjunto1, conjunto2));
    // Calcula a interseção dos dois conjuntos e imprime o resultado.
    escreva_conjunto("C1 interseção C2", intersecao(conjunto1, conjunto2));

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}