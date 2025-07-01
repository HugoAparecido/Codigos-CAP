#include <stdio.h>

int main(void){
    int v1, v2, v3;
    scanf("%d%d%d", &v1, &v2, &v3);
    int *p_minimo;
    int *p_maximo;
    if (v1 < v2 && v1 < v3){
        p_minimo = &v1;
    }
    int auxiliar = *p_minimo;
}