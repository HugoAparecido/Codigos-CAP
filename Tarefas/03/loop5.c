#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 20; i++)
        printf("%d\n", i);
    for (int i = 22; i <= 80; i += 2)
        printf("%d\n", i);

    return 0;
}