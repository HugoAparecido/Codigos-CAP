#include <stdio.h>

int main(void)
{
    int v[] = {1, 2, 3, 4, 5, 0};

    int *p = v;

    printf("*p = %d\n", *p);
    p++;
    printf("*p = %d\n", *p);

    printf("\n");
    p = v;
    while (*p != 0)
    {
        printf("*p = %d\n", *p);
        p++;
    }

    printf(">> *p = %d\n", *p);
    printf(">> *p = %d\n", *(p - 1));

    int *p2 = p - 1;

    return 0;
}