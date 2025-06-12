/* arquivo: vetores.c

Estratégias no uso de vetores

Jander, 2025 - CAP
*/
#include <stdio.h>

int main(void)
{
    // Alternativa 1: guardar a quantidade de valores
    // Exemplo: ler dados até digitar -1 e colocar em um vetor; máx: 100
    int vetor[100]; // 100 é o máximo
    int valor;
    int quantidade = 0;
    do
    {
        char entrada[160];
        fgets(entrada, sizeof(entrada), stdin);
        sscanf(entrada, "%d", &valor);

        if (valor != -1)
        {
            vetor[quantidade] = valor;
            quantidade++;
        }
    } while (valor != -1); // -1 é sentinela

    for (int i = 0; i < quantidade; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    vetor[quantidade] = 40;
    quantidade++;

    for (int i = 0; i < quantidade; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    
    quantidade--;

    for (int i = 0; i < quantidade; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    
    return 0;
}