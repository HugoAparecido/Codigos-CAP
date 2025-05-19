#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("[");
    for (int i = n1; i < n2; i++)
        printf("%d ", i);
    printf("%d]", n2);

    return 0;
}