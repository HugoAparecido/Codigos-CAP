#include <stdio.h>
#include <string.h>

// ponteiro para string

int main(void)
{
    char *texto1 = "Um texto qualquer (0)";
    printf("TEXTO: %s\n", texto1);

    char texto[100];
    fgets(texto, sizeof texto, stdin);
    texto[strlen(texto) - 1] = '\0';

    printf("Tamanho: %lu \n", (unsigned long)strlen(texto));
    printf("texto: %s \n", texto);

    // COMPARANDO strings

    while (strcmp(texto, "fim\n") != 0)
    {
        fgets(texto, sizeof texto, stdin);
        // texto[strlen(texto) - 1] = '\0';
    }

    printf("FIM DO PROGRAMA");

    // strcmp = 0 se 2 strings são iguais
    // strcmp = >0 se str1 vem depois da str2 (alfabeticamente falando)
    // strcmp = <0 se str1 vem antes da str2 (alfabeticamente falando)

    return 0;
}