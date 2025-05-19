#include <stdio.h>

int main(void)
{
    printf("1\n");
    for (int i = 5; i <= 100; i += 5)
        printf("%d\n", i);

    return 0;
}