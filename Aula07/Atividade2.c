/*
Descrição: Cálculo da soma de todos os valores de um arquivo
Requer: um arquivo não vazio
Assegura: a soma de todos os valores do arquivo
*/
/*
entrad[strcspn(entrada, "\n")] = '\0';
rewind(arq); -> volta para o começo do arquivo
*/

#include <stdio.h>
#include <locale.h>

int main(void){
    FILE *arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char linha[200];
    double soma = 0;
    while(fgets(linha, sizeof linha, arquivo) != NULL){
        double valor;
        sscanf(linha, "%lf", &valor);
        printf("valor lido: %.2f\n", valor);
        soma += valor;
    }

    fclose(arquivo);
    printf("A soma é: %.2f\n", soma);

    return 0;
}