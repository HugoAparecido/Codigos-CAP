#include <stdio.h>

int verifica_caso(char vetor_letras[])
{
    int apenas_minusculas = 1;
    int apenas_maiusculas = 1;
    int tem_maiusculas_minusculas = 0;
    int indice = 0;
    while ((vetor_letras[indice] != '$' && apenas_minusculas == 1) || (vetor_letras[indice] != '$' && apenas_maiusculas == 1))
    {
        if (caso(vetor_letras[indice]) == 'M')
            apenas_minusculas = 0;
        if (caso(vetor_letras[indice]) == 'm')
            apenas_maiusculas = 0;
        indice++;
    }
    if (apenas_maiusculas == 0 && apenas_minusculas == 0)
        tem_maiusculas_minusculas = 1;
    return tem_maiusculas_minusculas;
}

int palindromo(char palavra[], int tamanho)
{
    int i = 0;
    int eh_palindromo = 1;
    while (i < tamanho / 2 && eh_palindromo == 1)
    {
        if (palavra[i] != palavra[tamanho - 1 - i])
            eh_palindromo = 0;
        i++;
    }
    return eh_palindromo;
}

void desloque_menor(int vetor[], int tamanho)
{
    int menor = vetor[0];
    int posicao_menor = 0;
    for (int i = 1; i < tamanho; i++)
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao_menor = i;
        }
    vetor[posicao_menor] = vetor[0];
    vetor[0] = menor;
}

void remova_item(int vetor[], int *tamanho, int valor)
{
    int indice_sobreposto = 0;
    for (int i = 0; i < *tamanho; i++)
        if (vetor[i] != valor)
        {
            vetor[indice_sobreposto] = vetor[i];
            indice_sobreposto++;
        }
    *tamanho = indice_sobreposto;
}

int main(void)
{
    // double vet[8] = {-2.5, 3, 0.4, -1.02, 17.25, 37.8, -18.05, 0};
    // int vet[2000] = {0};
    int tamanho = 5;
    int vet[5];
    double soma = 0;
    int qtd_valores_positivos = 0;
    for (int i = 0; i < tamanho; i++)
        if (vet[i] > 0)
        {
            soma += vet[i];
            qtd_valores_positivos++;
        }
    double media = qtd_valores_positivos == 0 ? -1 : soma / qtd_valores_positivos;

    int tamanho1 = 4;
    int tamanho2 = 4;
    int vet1[4] = {1, 2, 3, 4};
    int vet2[4] = {1, 2, 3, 4};
    int iguais = 1;
    if (tamanho1 != tamanho2)
        iguais = 0;
    else
        for (int i = 0; i < tamanho1; i++)
            if (vet1[i] != vet2[i])
                iguais = 0;

    for (int i = 0; i < tamanho / 2; i++)
    {
        double aux = vet[i];
        vet[i] = vet[tamanho - 1 - i];
        vet[tamanho - 1 - i] = aux;
    }

    return 0;
}