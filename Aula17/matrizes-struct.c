/* arquivo: matrizes-struct.c
 * 
 * Requer:
 * Assegura: apresentação
 * 
 * Jander, 2025 - CAP
*/
#include <stdio.h>
#include "matriz.h"

int main(void){
    struct matriz m1 = nova_matriz(4, 5);
    struct matriz m2 = nova_matriz(10, 10);

    escreva_matriz(m1);
    escreva_matriz(m2);

    return 0;
}