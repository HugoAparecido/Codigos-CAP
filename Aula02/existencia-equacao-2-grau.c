/*
Descrição: É eq. de 2º grau???
Jander Moreira - 2025
*/
#include <stdio.h>
#include <stdbool.h>

int main(void){
    char entrada[160];

    printf("a, b e c, please: ");
    fgets(entrada, sizeof entrada, stdin);
    double a, b, c;
    sscanf(entrada, "%lf%lf%lf", &a, &b, &c);

    bool eh_eq_do_segundo_grau = a != 0;
    printf("Resultado: %c\n", eh_eq_do_segundo_grau ? 'V' : 'F');
    printf("A equação %s do segundo grau\n", eh_eq_do_segundo_grau ? "é" : "não é");
    
    return 0;
}