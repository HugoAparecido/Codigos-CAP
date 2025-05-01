// Jander, 2025 - CAP

#include <stdio.h>

int main(void)
{
    char c = 'C';
    switch (c)
    {
    case 'A':
    case 'a':
        printf("1\n");
        printf("2\n");
        printf("3\n");
        break;
    case 'B':
    case 'b':
        printf("4\n");
        printf("5\n");
        printf("6\n");
        printf("7\n");
        break;
    case 'C':
    case 'c':
        printf("8\n");
        break;
    default:
        printf("NDA\n");
    }

    return 0;
}