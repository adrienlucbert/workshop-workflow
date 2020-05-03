#include "my_pow.h"
#include <stdio.h>

int main(void)
{
    int a = 4;
    int b = 5;
    int c = my_pow(a, b);
    printf("%d ** %d = %d\n", a, b, c);
    return (0);
}