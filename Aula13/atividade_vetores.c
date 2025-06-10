/*
Descrição: Cálculo da média de 24 temperaturas, localizando a máxima e a mínima entre elas.
Requer: 24 medidas de temperaturas inteiras.
Assegura: A apresentação da temperatura média, a temperatura máxima e a temperatura mínima.
*/

#include <stdio.h>

#define MAX_TEMPERATURAS 5

/*
Função para preencher um array com temperaturas.
@param o vetor, o tamanho do vetor.
@return o vetor atualizado.
*/

void preencher_temperaturas(int temperaturas[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite a temperatura que estava às %02d: ", i);
        scanf("%d", &temperaturas[i]);
    }
}

/*
Função para calcular a média
@param o vetor, o tmanho do vetor.
@return a média das temperaturas.
*/

double calcular_media_temperaturas(int temperaturas[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        soma += temperaturas[i];
    return (double)soma / tamanho;
}

/*
Função para pegar a maior temperatura e o horário em que ocorreu.
@param o vetor, o tamanho do vetor.
@return a temperatura máxima.
*/

int pegar_maior_temperatura(int temperaturas[], int tamanho)
{
    int maior_temperatura = temperaturas[0];
    for (int i = 1; i < tamanho; i++)
        if (maior_temperatura < temperaturas[i])
            maior_temperatura = temperaturas[i];
    return maior_temperatura;
}

/*
Função para pegar a menor temperatura e o horário em que ocorreu.
@param o vetor, o tamanho do vetor.
@return a temperatura mínima.
*/

int pegar_menor_temperatura(int temperaturas[], int tamanho)
{
    int menor_temperatura = temperaturas[0];
    for (int i = 1; i < tamanho; i++)
        if (menor_temperatura > temperaturas[i])
            menor_temperatura = temperaturas[i];
    return menor_temperatura;
}

/*
Função para exibir o horário em que a temperatura apareceu.
@param o vetor, o tamanho do vetor, o valor a ser procurado.
@return a exibição dos horários das temperaturas.
*/

void exibir_horarios_temperaturas(int temperaturas[], int tamanho, int valor)
{
    printf("A temperatura %d foi registrada", valor);
    for (int i = 0; i < tamanho; i++)
        if (temperaturas[i] == valor)
            printf(" às %02d", i);
    printf("\n");
}

int main(void)
{
    int temperaturas[MAX_TEMPERATURAS];

    preencher_temperaturas(temperaturas, MAX_TEMPERATURAS);

    printf("A temperatura média é %.2f\n", calcular_media_temperaturas(temperaturas, MAX_TEMPERATURAS));

    int temperatura_maxima = pegar_maior_temperatura(temperaturas, MAX_TEMPERATURAS);

    printf("A temperatura máxima é %d\n", pegar_maior_temperatura(temperaturas, MAX_TEMPERATURAS));
    exibir_horarios_temperaturas(temperaturas, MAX_TEMPERATURAS, temperatura_maxima);

    int temperatura_minima = pegar_menor_temperatura(temperaturas, MAX_TEMPERATURAS);

    printf("A temperatura mínima é %d\n", temperatura_minima);
    exibir_horarios_temperaturas(temperaturas, MAX_TEMPERATURAS, temperatura_minima);

    return 0;
}