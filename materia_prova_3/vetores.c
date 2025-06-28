#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída.
#include <stdbool.h> // Inclui a biblioteca para o tipo de dado booleano (`bool`).
#include <stdlib.h> // Necessário para as funções de alocação de memória e geração de números aleatórios (`rand`, `srand`).
#include <time.h>   // Necessário para a função de tempo (`time`), usada para a semente do gerador aleatório.

// ---

// Define uma constante simbólica para o tamanho dos vetores.
// Usar uma constante torna o código mais legível e fácil de manter, permitindo alterar o tamanho
// de todos os vetores definidos com essa constante em um único lugar.
#define TAMANHO 10

// ---

/**
 * @brief Preenche um vetor de inteiros com valores aleatórios dentro de um intervalo especificado.
 * * @param vetor Um ponteiro para o primeiro elemento do vetor a ser preenchido.
 * Embora `int *vetor` e `int vetor[]` sejam funcionalmente equivalentes em parâmetros de função,
 * `int vetor[]` é muitas vezes preferido para indicar que a função espera um array,
 * tornando o código mais legível.
 * @param n O número de elementos no vetor.
 * @param min O valor mínimo (inclusive) para os números aleatórios.
 * @param max O valor máximo (inclusive) para os números aleatórios.
 */
void gerar_vetor_aleatorio(int *vetor, int n, int min, int max) 
{
    // Itera sobre cada posição do vetor, de 0 a n-1.
    for (int i = 0; i < n; i++)
    {
        // Gera um número aleatório no intervalo [min, max].
        // A expressão `rand() % (max - min + 1)` gera um número aleatório no intervalo [0, (max - min)].
        // Ao adicionar `min`, o intervalo do resultado é deslocado para [min, max].
        vetor[i] = min + rand() % (max - min + 1);
    }
}

// ---

/**
 * @brief Função principal do programa.
 *
 * Demonstra a leitura de dados do usuário, cálculo de média,
 * manipulação de vetores e a utilização de um valor sentinela para leitura de dados.
 */
int main(void)
{
    // Declara um array (vetor) de inteiros para armazenar 10 idades.
    // O tamanho do vetor é definido pela constante `TAMANHO`, que é 10.
    int idades[TAMANHO];

    // Loop para ler a idade de 10 alunos a partir da entrada padrão (teclado).
    for (int i = 0; i < TAMANHO; i++)
    {
        // Declara um buffer de caracteres para armazenar a linha de entrada do usuário.
        char entrada[160];
        // Exibe uma mensagem solicitando a idade.
        printf("Idade: ");
        // A função `fgets` lê uma linha completa da entrada padrão, incluindo o caractere de nova linha.
        // É considerada mais segura que `scanf` para evitar estouro de buffer, pois limita a quantidade de caracteres lidos.
        fgets(entrada, sizeof entrada, stdin);
        // A função `sscanf` lê dados formatados de uma string.
        // Aqui, ela extrai um número inteiro (`%d`) da string `entrada` e armazena na posição `i` do vetor `idades`.
        sscanf(entrada, "%d", &idades[i]);
    }

    // ---
    // Início do bloco de cálculo da média das idades.
    
    // Inicializa a variável `soma` para acumular a soma das idades. O tipo `double` é usado para garantir a precisão do cálculo.
    double soma = 0;
    // Loop para somar todos os elementos do vetor `idades`.
    for (int i = 0; i < TAMANHO; i++)
        soma = soma + idades[i];
    // Calcula a média das idades.
    // O operador `(double)` realiza um "cast" (conversão de tipo), garantindo que a divisão seja de ponto flutuante,
    // o que resulta em um valor com casas decimais.
    double media = (double)soma / TAMANHO;

    // Imprime a média das idades com uma casa decimal de precisão.
    printf("A média é %.1f\n", media);

    // ---
    // Início do bloco de contagem de alunos acima da média.
    
    // Inicializa um contador para contar quantos alunos têm idade acima da média.
    int contador = 0;
    // Itera sobre o vetor `idades`.
    for (int i = 0; i < TAMANHO; i++)
        // Verifica se a idade na posição atual é maior que a média.
        if (idades[i] > media)
            // Se a condição for verdadeira, incrementa o contador.
            contador++;
    // Imprime a quantidade de alunos com idade acima da média.
    printf("Acima da média: %d alunos\n", contador);

    // ---
    // Início do bloco de manipulação de vetor com números aleatórios.

    // Declara um novo vetor de inteiros com o tamanho definido pela constante `TAMANHO`.
    int vetor[TAMANHO];

    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo atual do sistema.
    // Isso garante que a sequência de números gerados pela função `rand()` seja diferente a cada execução do programa.
    srand(time(NULL));

    // Chama a função `gerar_vetor_aleatorio` para preencher o vetor com 10 números aleatórios entre 0 e 100.
    gerar_vetor_aleatorio(vetor, TAMANHO, 0, 100);

    // Imprime os elementos do vetor gerado para visualização.
    printf("vetor = ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    // ---
    // Início da lógica para verificar se o valor da primeira posição do vetor se repete em outras posições.

    // Declara e inicializa uma variável booleana para rastrear se o valor se repetiu.
    // Inicialmente, é `false`, pois a repetição ainda não foi encontrada.
    bool repetiu = false;
    // Inicializa um contador para o loop `while`, começando da segunda posição (índice 1).
    int i = 1;
    // Loop `while` que continua enquanto duas condições forem verdadeiras:
    // 1. O contador `i` não atingiu o final do vetor (`i < TAMANHO`).
    // 2. A repetição ainda não foi encontrada (`!repetiu`).
    // O loop para assim que uma das condições se torna falsa.
    while (i < TAMANHO && !repetiu)
    {
        // Compara o elemento atual do vetor (`vetor[i]`) com o primeiro elemento (`vetor[0]`).
        if (vetor[i] == vetor[0])
            // Se forem iguais, a variável `repetiu` é definida como `true`.
            // Isso fará com que o loop seja encerrado na próxima verificação da condição.
            repetiu = true;
        // Incrementa o contador para verificar a próxima posição na próxima iteração.
        i++;
    }

    // O programa poderia continuar a partir deste ponto para, por exemplo, imprimir o resultado
    // da verificação (se o valor foi repetido ou não), usando a variável `repetiu`.
    // Por exemplo: `if (repetiu) { ... } else { ... }`

    // ---
    // Alternativa 1: Demonstração da leitura de dados do usuário usando um valor sentinela.

    // Declara um vetor com um tamanho máximo de 100 para armazenar os valores lidos.
    int vetor2[100]; 
    // Declara a variável que armazenará o valor lido do usuário.
    int valor;
    // Declara e inicializa uma variável para contar a quantidade de valores válidos lidos.
    int quantidade = 0;
    // Loop `do-while` que executa o bloco de código pelo menos uma vez e depois repete
    // enquanto a condição for verdadeira.
    do
    {
        // Declara um buffer de entrada e lê uma linha do teclado.
        char entrada[160];
        fgets(entrada, sizeof(entrada), stdin);
        // Lê o valor inteiro da string de entrada.
        sscanf(entrada, "%d", &valor);

        // Verifica se o valor lido não é o valor sentinela (-1).
        if (valor != -1)
        {
            // Se não for a sentinela, armazena o valor no vetor na posição `quantidade`.
            vetor2[quantidade] = valor;
            // Incrementa o contador de quantidade para a próxima posição livre.
            quantidade++;
        }
    } while (valor != -1); // A condição do loop é que o valor lido seja diferente de -1.

    // Loop para imprimir os valores armazenados no `vetor2`, usando a variável `quantidade`
    // para iterar apenas sobre os elementos válidos.
    for (int i = 0; i < quantidade; i++)
        printf("%d ", vetor2[i]);
    printf("\n");


    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}