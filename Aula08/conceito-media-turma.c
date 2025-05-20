/*
Descrição: Cálculo da média das notas dos conceitos de alunos de uma turma
Requer: Um arquivo contendo os conceitos
Assegura: Apresentação da média
*/

#include <stdio.h>

int main(void)
{
    FILE *arquivo = fopen("conceitos.txt", "r");

    if (arquivo == NULL)
    {
        perror("Não encontrado conceitos.txt");
        return 1;
    }

    char linha[3];
    double soma = 0;
    int qtd_notas = 0;
    while (fgets(linha, sizeof linha, arquivo))
    {
        char conceito = linha[0];
        qtd_notas += 1;
        switch (conceito)
        {
        case 'A':
            soma += 10.0;
            break;
        case 'B':
            soma += 8.0;
            break;
        case 'C':
            soma += 6.0;
            break;
        case 'D':
            soma += 3.0;
            break;
        case 'E':
            soma += 0.0;
            break;
        }
    }

    fclose(arquivo);

    printf("A média é: %.2f\n", soma / qtd_notas);

    return 0;
}