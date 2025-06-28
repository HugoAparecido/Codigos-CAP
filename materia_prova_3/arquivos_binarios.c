#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para manipulação de arquivos e I/O.

/**
 * @brief Função principal que demonstra a escrita e leitura de dados em um arquivo binário.
 */
int main(void)
{
    // ---
    // Abertura do arquivo para escrita em modo binário.

    // Abre um arquivo chamado "dados_binarios" para escrita (`w`) em modo binário (`b`).
    // O ponteiro de arquivo `arquivo` é usado para referenciar o arquivo aberto.
    FILE *arquivo = fopen("dados_binarios", "wb"); // Alterado para "wb" para escrita binária.
    // Verifica se a abertura do arquivo foi bem-sucedida.
    // Se `arquivo` for `NULL`, houve um erro (por exemplo, permissão negada).
    if (arquivo == NULL)
    {
        // `perror` imprime uma mensagem de erro descritiva para o erro de sistema atual.
        perror("Erro ao abrir o arquivo para escrita"); // Comentário e mensagem de erro aprimorados.
        // Retorna 1 para indicar um erro.
        return 1;
    }

    // ---
    // Escrita de dados no arquivo binário.

    // Declara uma variável inteira e a inicializa com 10.
    int i = 10;
    // Escreve o conteúdo da variável `i` no arquivo.
    // `fwrite` recebe:
    // 1. O endereço da variável a ser escrita (`&i`).
    // 2. O tamanho de cada item a ser escrito (`sizeof i`, que é o tamanho de um `int`).
    // 3. O número de itens a serem escritos (1).
    // 4. O ponteiro do arquivo.
    fwrite(&i, sizeof i, 1, arquivo);
    // Altera o valor da variável `i` para -1.
    i = -1;
    // Escreve o novo valor de `i` no arquivo, logo após o valor anterior.
    fwrite(&i, sizeof i, 1, arquivo);

    // Declara uma variável `double` e a inicializa.
    double d = 1234.567;
    // Escreve o conteúdo da variável `d` no arquivo.
    fwrite(&d, sizeof d, 1, arquivo);

    // Declara um array de caracteres (string) e o inicializa com uma frase.
    char texto[40] = "Maria tinha um lindo carneirinho";
    // Escreve o conteúdo do array `texto` no arquivo.
    // O tamanho total do array (40 bytes) é escrito.
    fwrite(texto, sizeof texto, 1, arquivo);

    // Fecha o arquivo, liberando os recursos associados a ele.
    fclose(arquivo);

    // ---
    // Abertura do arquivo para leitura em modo binário.

    // Abre o mesmo arquivo para leitura (`r`) em modo binário (`b`).
    arquivo = fopen("dados_binarios", "rb"); // Alterado para "rb" para leitura binária.
    // Verifica se a abertura para leitura foi bem-sucedida.
    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo para leitura"); // Comentário e mensagem de erro aprimorados.
        return 1;
    }

    // ---
    // Leitura de dados do arquivo binário.

    // Declara uma variável inteira para armazenar o valor lido.
    int j;
    // Lê o primeiro `int` do arquivo e o armazena em `j`.
    // `fread` lê o número de bytes especificado e avança o ponteiro de arquivo.
    fread(&j, sizeof j, 1, arquivo);
    // Imprime o valor lido.
    printf("Primeiro inteiro lido (j) = %d\n", j);
    // Lê o segundo `int` do arquivo e o armazena em `j`, sobrescrevendo o valor anterior.
    fread(&j, sizeof j, 1, arquivo);
    // Imprime o segundo valor lido.
    printf("Segundo inteiro lido (j) = %d\n", j);

    // Declara uma variável `double` para armazenar o valor lido.
    double d2;
    // Lê o `double` do arquivo.
    fread(&d2, sizeof d2, 1, arquivo);
    // Imprime o valor do `double` lido.
    printf("double lido = %g\n", d2);

    // Declara um array de caracteres para armazenar o texto lido.
    char volta[40];
    // Lê o bloco de 40 bytes do arquivo e o armazena em `volta`.
    fread(volta, sizeof volta, 1, arquivo);
    // Imprime a string lida.
    printf("Texto lido: %s\n", volta);

    // Fecha o arquivo.
    fclose(arquivo);

    return 0;
}