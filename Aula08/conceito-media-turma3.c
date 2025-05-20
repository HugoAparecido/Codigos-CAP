/*
Descrição: Cálculo da média das notas dos conceitos de alunos de uma turma
Requer: Um arquivo contendo os conceitos
Assegura: Apresentação da média
*/

#include <stdio.h>

/*
Concerte conceito para nota
@param conceito: de A a B

*/
double conceito_para_nota(char conceito);

int main(void)
{
    FILE *arquivo = fopen("conceitos3.txt", "r");

    if (arquivo == NULL)
    {
        perror("Não encontrado conceitos.txt");
        return 1;
    }

    char linha[5];
    double soma = 0;
    int qtd_notas = 0;
    while (fgets(linha, sizeof linha, arquivo))
    {
        char conceito1, conceito2, conceito3;
        sscanf(linha, "%c%c%c", &conceito1, &conceito1, &conceito1);

        double nota = (conceito_para_nota(conceito1) + conceito_para_nota(conceito2) + conceito_para_nota(conceito3))/3;
        soma += nota;
        qtd_notas++;
    }

    fclose(arquivo);

    printf("A média é: %.2f\n", soma / qtd_notas);

    return 0;
}

// Conceito para nota
double conceito_para_nota(char conceito)
{
    double nota;
    switch (conceito)
    {
    case 'A':
        nota += 10.0;
        break;
    case 'B':
        nota += 8.0;
        break;
    case 'C':
        nota += 6.0;
        break;
    case 'D':
        nota += 3.0;
        break;
    default:
        nota += 0.0;
    }
    return nota;
}