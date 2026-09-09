#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("Index -1: %d (Esperado: -1)\n", ft_fibonacci(-1));
	printf("Index  0: %d (Esperado: 0)\n", ft_fibonacci(0));
	printf("Index  1: %d (Esperado: 1)\n", ft_fibonacci(1));
	printf("Index  2: %d (Esperado: 1)\n", ft_fibonacci(2));
	printf("Index  3: %d (Esperado: 2)\n", ft_fibonacci(3));
	printf("Index  4: %d (Esperado: 3)\n", ft_fibonacci(4));
	printf("Index  5: %d (Esperado: 5)\n", ft_fibonacci(5));
	printf("Index  6: %d (Esperado: 8)\n", ft_fibonacci(6));

	return (0);
}