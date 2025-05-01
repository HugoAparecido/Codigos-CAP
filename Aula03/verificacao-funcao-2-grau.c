// Descrição: Verifica se uma função de 2º grau tem raízes reais distintas
// Requer: Coeficientes a, b e c
// Assegura: Apresentação se há uo não duas raizes reais distintas
#include <stdio.h>

int main(void)
{
    // Obtenha os coeficientes
    printf("Digite os coeficientes a, b e c da função ax^2 + bx + c separados por espaço: ");
    char entrada[160];
    fgets(entrada, sizeof(entrada), stdin);
    double a, b, c;
    sscanf(entrada, "%lf%lf%lf", &a, &b, &c);

    if (a == 0)
        printf("não há\n");
    else
    { 
        // Cáculo do discriminante ou delta
        double delta = b * b - 4 * a * c;

        // Verificação e apresentação do resultado se há ou não duas raízes reais distintas
        if (delta > 0)
            printf("há\n");
        else
            printf("não há\n");
    }
    
    return 0;
}