#include <stdio.h>

int main(void)
{
    double d;
    d = 1.1;
    ; // comando vazio
    10; // comando inútil, sem ação

    int i = 100;
    {
        int i = 10;
        printf("no bloco\n");
        printf("i = %d\n", i);
    }

    printf("oi\n");
    printf("i = %d\n", i);

    return 0;
}