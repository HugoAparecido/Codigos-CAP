#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int comprimento(char *str)
{
    int contador = 0;
    while (str[contador] != '\0')
        contador++;
    return contador;
}

bool eh_vogal(char letra)
{
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
}

bool eh_maiuscula(char letra)
{
    return ('A' <= letra && letra <= 'Z');
}

int quantidade_vogais(char *cadeia)
{
    int qtd_vogais = 0;
    int i = 0;
    while (cadeia[i] != '\0')
    {
        if (eh_vogal(cadeia[i]))
            qtd_vogais++;
        i++;
    }
    return qtd_vogais;
}

int main(void)
{
    char s[100];

    s[0] = 'X';
    s[1] = 'Y';
    s[2] = 'a';
    s[3] = 'U';
    s[4] = 'X';
    s[5] = 'x';
    s[6] = 'b';
    s[7] = 'B';
    s[8] = '\0';

    // printf("%s tem %d caracteres\n", s, comprimento(s));
    // int i = 0;
    // while (s[i] != '\0')
    // {
    //     printf("\n\n%c\n", s[i]);
    //     printf("%s vogal\n", eh_vogal(s[i]) ? "Eh" : "Nao eh");
    //     printf("%s maiuscula\n", eh_maiuscula(s[i]) ? "Eh" : "Nao eh");
    //     i++;
    // }

    // printf("A cadeia de caracteres tem %d vogais\n", quantidade_vogais(s));

    //Vogais
    char texto[] = "Ainda estou aqui";
    printf("%s tem %d vogais", texto, quantidade_vogais(texto));

    return 0;
}