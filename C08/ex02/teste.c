#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	a = -42;
	int	b = 42;
	int	c = 0;

	printf("ABS(%d) = %d (Esperado: 42)\n", a, ABS(a));
	printf("ABS(%d) = %d (Esperado: 42)\n", b, ABS(b));
	printf("ABS(%d) = %d (Esperado: 0)\n", c, ABS(c));
	printf("ABS(5 - 10) = %d (Esperado: 5)\n", ABS(5 - 10));

	return (0);
}