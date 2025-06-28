#include <stdio.h>

// ---

// Definição da estrutura `data`.
// Uma `struct` é uma coleção de variáveis de diferentes tipos agrupadas sob um único nome.
// Esta estrutura representa uma data, contendo três membros inteiros: dia, mês e ano.
struct data
{
    int dia; // Armazena o dia do mês.
    int mes; // Armazena o mês do ano.
    int ano; // Armazena o ano.
};

// ---

// Função que recebe uma estrutura `data` como argumento e a imprime no formato DD-MM-AAAA.
// Por exemplo, 02-06-2025.
// O especificador de formato `%02d` garante que o número terá pelo menos dois dígitos,
// preenchendo com um zero à esquerda se necessário (por exemplo, 2 se torna 02).
void escreva_data(struct data data)
{
    printf("%02d-%02d-%04d", data.dia, data.mes, data.ano);
}

// ---

// Função principal do programa.
int main(void)
{
    // Definição da estrutura `numero_racional` dentro da função `main`.
    // Isso a torna uma estrutura local, visível apenas dentro desta função.
    // Ela representa um número racional (uma fração), com um numerador e um denominador.
    struct numero_racional
    {
        int numerador;   // Armazena o numerador da fração.
        int denominador; // Armazena o denominador da fração.
    };

    // Declaração de duas variáveis do tipo `struct numero_racional`.
    // Essas variáveis são usadas para representar duas frações.
    struct numero_racional q1, q2;

    // Atribuição de valores aos membros da estrutura `q1`.
    // Os membros são acessados usando o operador de ponto (`.`).
    // Isso representa a fração 1/2.
    q1.numerador = 1;
    q1.denominador = 2;

    // Atribuição de valores aos membros da estrutura `q2`.
    // Isso representa a fração 7/3.
    q2.numerador = 7;
    q2.denominador = 3;

    // Imprime os valores das frações `q1` e `q2`.
    printf("q1 = %d/%d e q1 = %d/%d\n", q1.numerador, q1.denominador, q2.numerador, q2.denominador);

    // Declaração de duas variáveis do tipo `struct data`.
    struct data hoje, amanha;

    // Atribuição de valores para a variável `hoje`.
    // Isso representa a data 02 de junho de 2025.
    hoje.dia = 2;
    hoje.mes = 6;
    hoje.ano = 2025;

    // Atribuição de uma estrutura para outra.
    // O conteúdo de `hoje` é copiado para `amanha`, incluindo dia, mês e ano.
    amanha = hoje;
    // Incrementa o valor do dia da variável `amanha`, usando o operador de incremento (`++`).
    // O valor do dia passa a ser 3.
    amanha.dia++;

    // Imprime a data armazenada na variável `hoje` chamando a função `escreva_data`.
    printf("Hoje: ");
    escreva_data(hoje);
    printf("\n");

    // Imprime a data armazenada na variável `amanha`.
    printf("Amanha: ");
    escreva_data(amanha);
    printf("\n");

    // Inicialização da estrutura `natal` no momento da declaração.
    // Os valores são atribuídos aos membros em ordem: {dia, mes, ano}.
    struct data natal = {25, 12, 2025};
    // Imprime a data de Natal.
    printf("Natal: ");
    escreva_data(natal);
    printf("\n");

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}