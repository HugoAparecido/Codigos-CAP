/*
Exemplos básicos de utilização de variáveis textuais
Requer: entrdas gerais para exemplificar as operações
Assegura: apresentação de resultados das operações

Jander, 2025 - CAP
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    // char c1 = 'é';
    // printf("c1 = %c código %d (%ld byte)\n", c1, c1, sizeof(c1));

    // char c2 = 'a';
    // printf("c1 = %c código %d (%ld byte)\n", c2, c2, sizeof(c2));

    // if (c1 == c2)
    //     printf("c1 é igual a c2\n");
    // else
    //     printf("c1 é diferente a c2\n");

    // if (c1 > c2)
    //     printf("c1 é maior a c2\n");
    // else
    //     printf("c1 é menor ou igual a c2\n");

    // printf("Depois de %c vem %c\n", c2, c2 + 1);
    // printf("No meio de %c e %c tem %c\n", c1, c2, (c1 + c2) / 2);
    // for (char c = 'A'; c <= 'Z'; c++)
    //     printf("%c --> %c\n",c, c + 'a' - 'A');

    // Cadeias de caracteres
    char texto[50] = "um texto qualquer"; // criação de variável com atribuição
    printf("texto: %s (%d caracteres)\n", texto, strlen(texto));

    // atribuição fora da declaração --> strncpy
    char texto2[10];
    strncpy(texto2, "Zacarias", sizeof(texto2) - 1);
    char texto3[10];
    strncpy(texto3, "abraão", sizeof(texto3) - 1);
    printf("texto2: %s\n", texto2);
    printf("texto3: %s\n", texto3);

    if (strcmp(texto2, texto3) == 0)
        printf("Textos iguais\n");
    else if (strcmp(texto2, texto3) < 0)
        printf("primeiro menor que o segundo\n");
    else
        printf("segundo menor que o primeiro\n");

    strncat(texto, " e mais algo muito comprido demais da conta de todo mundo", sizeof(texto2) - strlen(texto2) - 1);
    printf("texto = %s -- %d\n", texto, strlen(texto));

    // leitura
    char outro_texto[40];
    fgets(outro_texto, sizeof(outro_texto) - 1, stdin);
    outro_texto[strlen(outro_texto) - 1] = '\0';
    printf("Texto digitado: <<%s>>\n", outro_texto);

    return 0;
}