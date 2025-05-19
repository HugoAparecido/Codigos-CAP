#include <stdio.h>

int main(void)
{
    int valor;
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}