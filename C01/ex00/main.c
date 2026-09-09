#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int a;
    a = 21;

    printf("Número antes: %d\n", a);

    ft_ft(&a);

    printf("Número depois: %d\n", a);
    
    return (0);
}