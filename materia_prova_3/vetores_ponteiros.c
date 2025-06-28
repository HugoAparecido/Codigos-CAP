#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída.
#include <string.h> // Inclui a biblioteca para manipulação de strings.
#include <stdlib.h> // Inclui a biblioteca para funções de uso geral, como geração de números aleatórios.
#include <time.h>   // Inclui a biblioteca para funções de tempo, usada para a semente do gerador aleatório.

// ---

/**
 * @brief Preenche um vetor de números de ponto flutuante com um valor especificado.
 * * @param vetor O vetor de `double` a ser preenchido. O nome do parâmetro é um ponteiro para o primeiro elemento.
 * @param tamanho O número de elementos no vetor.
 * @param valor O valor a ser atribuído a cada elemento do vetor.
 */
void preencha_vetor(double vetor[], int tamanho, double valor)
{
    // Percorre cada elemento do vetor.
    for (int i = 0; i < tamanho; i++)
        vetor[i] = valor; // Atribui o `valor` a cada posição do vetor.
}

// ---

/**
 * @brief Imprime os elementos de um vetor de inteiros no formato de lista.
 * * @param vetor O vetor de inteiros a ser impresso. `const` indica que a função não modificará o vetor.
 * @param tamanho O número de elementos no vetor.
 */
void imprima_vetor(const int vetor[], int tamanho)
{
    printf("["); // Imprime o colchete de abertura.
    // Percorre cada elemento do vetor.
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]); // Imprime o valor do elemento seguido de um espaço.
    printf("]\n"); // Imprime o colchete de fechamento e uma nova linha.
}

// ---

/**
 * @brief Itera sobre uma string, imprimindo cada caractere, e depois concatena " Moreira" ao final.
 * * @param str A string a ser manipulada. O nome do parâmetro é um ponteiro para o primeiro caractere.
 */
void f(char *str)
{
    int i = 0;
    // Itera sobre a string até encontrar o caractere nulo de terminação (`\0`).
    while (str[i] != '\0')
    {
        // Imprime cada caractere da string em uma nova linha.
        printf("> %c\n", str[i]); 
        i++; // Avança para o próximo caractere.
    }
    // Concatena a string " Moreira" à string `str`.
    // `strncat` é usada para evitar estouro de buffer, garantindo que não mais de 50 - strlen(str) - 1
    // caracteres sejam copiados.
    strncat(str, " Moreira", 50 - strlen(str) - 1);
}

// ---

/**
 * @brief Preenche um vetor de inteiros com números aleatórios entre 0 e 199.
 * * @param vetor O vetor de inteiros a ser preenchido.
 * @param tamanho O número de elementos no vetor.
 */
void colocar_aleatorio(int vetor[], int tamanho)
{
    // Percorre cada elemento do vetor.
    for (int i = 0; i < tamanho; i++)
        // Atribui um número aleatório. `rand() % 200` gera um número entre 0 e 199.
        vetor[i] = rand() % 200;
}

// ---

/**
 * @brief Troca todos os números pares em um vetor por zero.
 * * @param vetor O vetor de inteiros a ser modificado.
 * @param tamanho O número de elementos no vetor.
 */
void troca_par_por_zero(int vetor[], int tamanho)
{
    // Percorre cada elemento do vetor.
    for (int i = 0; i < tamanho; i++)
        // Verifica se o resto da divisão do elemento por 2 é igual a 0.
        // Isso verifica se o número é par.
        if (((vetor[i]) % 2) == 0)
            // Se for par, atribui 0 àquela posição do vetor.
            vetor[i] = 0;
}

// ---

/**
 * @brief Função principal que demonstra o uso das funções acima.
 */
int main(void)
{
    // Declara e inicializa um vetor de 5 elementos do tipo `double` com zeros.
    double v1[5] = {0};
    // Declara um vetor de 10 elementos do tipo `double` sem inicialização.
    double v2[10];

    // Chama a função para preencher `v2` com o valor 7.0.
    preencha_vetor(v2, 10, 7.0);

    // Imprime o conteúdo de `v1` e `v2`.
    // Note que `imprima_vetor` espera um vetor de `int`, o que causará um aviso ou erro de compilação
    // pois os tipos dos vetores (`double`) não correspondem. A função `imprima_vetor` está configurada
    // para imprimir inteiros (`%d`).
    imprima_vetor(v1, 5);
    imprima_vetor(v2, 10);

    // Declara uma string (array de caracteres) com espaço para 50 caracteres e a inicializa com "Jander".
    char nome[50] = "Jander";
    // Chama a função `f`, que imprime cada caractere e concatena uma nova string.
    f(nome);
    // Imprime a string modificada.
    printf("%s!!!\n", nome);

    // Declara um vetor de 100 inteiros.
    int v3[100];
    
    // Inicializa o gerador de números aleatórios com a hora atual, para garantir que os números
    // gerados sejam diferentes a cada execução. Esta linha deve ser chamada apenas uma vez no programa.
    srand(time(NULL));

    // Chama a função para preencher `v3` com números aleatórios.
    colocar_aleatorio(v3, 100);
    // Chama a função para substituir os números pares por zero em `v3`.
    troca_par_por_zero(v3, 100);
    // Imprime o vetor `v3` após as modificações.
    imprima_vetor(v3, 100);

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}