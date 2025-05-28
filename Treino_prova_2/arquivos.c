#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *arquivo = fopen("entrada.txt", "r");

    if(arquivo == NULL){
        printf("Arquivo não encontrado");
        return 1;
    }

    char linha[160];
    double soma = 0;
    int contador = 0;

    while(fgets(linha, sizeof linha, arquivo) != NULL){
        int valor=0;
        sscanf(linha, "%d", &valor);

        soma+=valor;
        contador++;
    }

    fclose(arquivo);

    printf("\n O arquivo possui %d linhas\n", contador);
    printf("\n A soma dos valores é %lf \n", soma);

    return 0;
}