#include <stdio.h>

int main(void)
{
    FILE *arquivo = fopen("dados_binarios", "w");
    if (arquivo == NULL)
    {
        perror("Arquivo dados-binario");
        return 1;
    }

    int i = 10;
    fwrite(&i, sizeof i, 1, arquivo);
    i = -1;
    fwrite(&i, sizeof i, 1, arquivo);

    double d = 1234.567;
    fwrite(&d, sizeof d, 1, arquivo);

    char texto[40] = "Maria tinha um lindo carneirinho";
    fwrite(texto, sizeof texto, 1, arquivo);

    fclose(arquivo);

    arquivo = fopen("dados_binarios", "r");
    if (arquivo == NULL)
    {
        perror("Arquivo leitura dados-binarios");
        return 1;
    }

    int j;
    fread(&j, sizeof j, 1, arquivo);
    printf("j lido = %d\n", j);
    fread(&j, sizeof j, 1, arquivo);
    printf("j lido = %d\n", j);

    double d2;
    fread(&d2, sizeof d2, 1, arquivo);
    printf("double = %g\n", d2);

    char volta[40];
    fread(volta, sizeof volta, 1, arquivo);
    printf("texto: %s\n", volta);

    fclose(arquivo);

    return 0;
}