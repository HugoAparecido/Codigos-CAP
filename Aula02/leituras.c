/*
Exemplos de leituras diversas em C
Requer: muitas coisas digitadas pelo usuário
Assegura: apresentar os valores das variáveis lidas
*/
#include <stdio.h>
#include <string.h> // Para strlen

int main(void)
{
    char entrada[160];

    // int
    printf("valor inteiro: ");
    fgets(entrada, sizeof entrada, stdin);
    int valor_inteiro;
    sscanf(entrada, "%d", &valor_inteiro);
    printf("O valor digitado foi %d\n", valor_inteiro);

    // double
    printf("Digite um valor real: ");
    fgets(entrada, sizeof entrada, stdin);
    double valor_real;
    sscanf(entrada, "%lf", &valor_real);
    printf("O valor digitado foi %g\n", valor_real);

    // int + double
    printf("Digite um valor inteiro e um real: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d%lf", &valor_inteiro, &valor_real);
    printf("Valores digitados %d e %g\n", valor_inteiro, valor_real);

    // texto
    printf("Digite um texto: ");
    char texto[1000]; // Tamanho aleatório
    fgets(texto, sizeof texto, stdin);
    texto[strlen(texto) - 1] = '\0'; // Remove o \n do final
    printf("O texto digitado foi \"%s\"\n", texto);

    // caractere (1 caractere só)
    char caractere;
    caractere = 'x';
    printf("Meu caractere é %c\n", caractere);
    fgets(entrada, sizeof entrada, stdin);
    caractere = entrada[0]; // Pega o primeiro
    printf("Meu caractere é %c\n", caractere);

    return 0;
}