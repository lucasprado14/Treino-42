#include <stdio.h>

void ft_ultimade_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div= *a / *b;
    mod= *a % *b;
    *a = div;
    *b = mod;   
}

int main(void)
{
    int a;
    int b;

    a = 10;
    b = 3;

    printf("Antes: a: %d, b: %d\n", a, b);

    ft_ultimade_div_mod(&a, &b);
    printf("Depois: a: %d, b: %d\n", a, b);
    return (0);
}
