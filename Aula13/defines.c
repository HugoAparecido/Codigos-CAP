#include <stdio.h>

#define DEZ 10
#define VINTE 20
#define MAX(v1, v2) ((v1) > (v2)) ? (v1) : (v2)

int main()
{
    printf("DEZ = %d\n", DEZ);
    printf("VINTE = %f\n", MAX(4.1, 5));

    return 0;
}