/*
Descrição: Verificação da clssificação de um triângulo, dado dois ângulos.
Entrada: Dois ângulos em graus.
Saída: Apresnetação da classificação do triângulo.
*/

#include <stdio.h>

int main(void) {
    
    printf("Digite dois ângulo de um triângulo em graus separados por espaço: ");
    char entrada[160];
    fgets(entrada, sixeof(entrada), stdin);
    int angulo1, angulo2;
    sscanf(entrada, "%d %d", &angulo1, &angulo2);
    
    return 0;
}